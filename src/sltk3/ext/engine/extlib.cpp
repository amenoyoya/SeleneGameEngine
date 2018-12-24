/* Sltk::Engine::require */
static int require(string filename){
	string ext = Path::getExtension(filename);
	
	if(!isSameStringIgnoreCase(ext, ".sltk")
		&& !isSameStringIgnoreCase(ext, ".lua")
		&& !isSameStringIgnoreCase(ext, ".sym"))
	{
		// スクリプトファイルの拡張子でない場合、
		// ・filename/__Main.lua, filename.lua
		// ・filename/__Main.sltk, filename.sltk
		// ・filename/__Main.sym, filename.sym
		// を順に探す
		string files[] = {
			Path::appendSlash(filename) + "__Main.lua",  filename + ".lua",
			Path::appendSlash(filename) + "__Main.sltk", filename + ".sltk",
			Path::appendSlash(filename) + "__Main.sym",  filename + ".sym",
		}, exts[] = {
			".lua", ".lua", ".sltk", ".sltk", ".sym", ".sym"
		}, msg;
		for(u8 i = 0; i < 6; ++i){
			switch(loadScriptFile(files[i], exts[i])){
			case -2:
				msg.append("\n\tfile '" + files[i] + "' not found.");
				break;
			case 0:
				return _engine->error(getMessage(_engine));
			case 1:
				return 1;
			}
		}
		// 上で見つからなかった場合、filenameの'.'を'/'に置換して探す
		filename = replaceString(filename, ".",
			#ifdef _WINDOWS
				"\\"
			#else
				"/"
			#endif
		);
		files[0] = Path::appendSlash(filename) + "__Main.lua", files[1] = filename + ".lua",
		files[2] = Path::appendSlash(filename) + "__Main.sltk", files[3] = filename + ".sltk",
		files[4] = Path::appendSlash(filename) + "__Main.sym", files[5] = filename + ".sym";
		for(u8 i = 0; i < 6; ++i){
			switch(loadScriptFile(files[i], exts[i])){
			case -2:
				msg.append("\n\tfile '" + files[i] + "' not found.");
				break;
			case 0:
				return _engine->error(getMessage(_engine));
			case 1:
				return 1;
			}
		}
		_engine->pushString(msg);
		return 1;
	}else{
		switch(loadScriptFile(filename, ext)){
		case -2:
			_engine->pushString("\n\tfile '" + filename + "' not found.");
			return 1;
		case 0:
			return _engine->error(getMessage(_engine));
		case 1:
			return 1;
		}
	}
	return 1;
}

inline int require(lua_State *L){
	Lua lua(L); return require(lua.getString(1));
}

/* 相対パスからのスクリプトローダー */
static int script_loader(lua_State *L){
	string filename = _engine->getString(1);
	lua_Debug debug;
	
	// 呼び出し元スクリプトのディレクトリからの相対パスに変換
	if(lua_getstack(_engine->getHandle(), 2, &debug)){
		lua_getinfo(_engine->getHandle(), "S", &debug);
		filename = Path::appendSlash(Path::getParent(debug.source, false)) + filename;
	}
	return require(filename);
}

/* Lua/SeleneTalkスクリプトコードをloadstring */
// (script, chunkName="", luaMode=false) -> chunk, errorCode
static int loadstring(lua_State *L){
	Lua lua(L);
	
	if(lua.getBoolean(3)) setSeleneTalkMode(false);
	else setSeleneTalkMode(true);
	
	if(!lua.loadString(lua.getType(1) == Lua::T_STRING? lua.getString(1): "",
		lua.getType(2) == Lua::T_STRING? lua.getString(2): "string"))
	{
		lua.pushNil();
		lua.pushString(getMessage(&lua));
		return 2;
	}
	return 1;
}

/* tolua++オブジェクトをC++ポインタ(ffi)に変換 */
inline int tocdata(lua_State *L){
	Lua lua(L); lua.pushPointer(tolua_tousertype(L, 1, 0)); return 1;
}

/* Binaryポインタをtableにコピー */
static int getBinaryData(lua_State *L){
	Lua lua(L);
	tolua_Error tolua_err;
	if(!tolua_isusertype(lua, 1, "Sltk::Binary", 0, &tolua_err)
		|| !tolua_isnumber(lua, 2, 0, &tolua_err))
	{
		tolua_error(lua, "#ferror in function 'getBinaryData'.", &tolua_err);
		return 0;
	}
	
	Binary *self = (Binary*)tolua_tousertype(lua, 1, 0);
	if(!self){
		tolua_error(lua, "invalid 'self' in function 'getBinaryData'", nullptr);
		return 0;
	}
	
	u32 size = lua.getInteger(2);
	u8 *data = (u8*)self->getPointer();
	lua.createTable(size);
	for(u32 i = 0; i < size; ++i){
		lua.pushNumber(data[i]);
		lua.setRawValue(-2, i + 1);
	}
	return 1;
}

/* tableデータをBinaryポインタに反映 */
static int setBinaryData(lua_State *L){
	Lua lua(L);
	tolua_Error tolua_err;
	if(!tolua_isusertype(lua, 1, "Sltk::Binary", 0, &tolua_err)
		|| !tolua_isnumber(lua, 2, 0, &tolua_err)
		|| !tolua_istable(lua, 3, 0, &tolua_err))
	{
		tolua_error(lua, "#ferror in function 'setBinaryData'.", &tolua_err);
		return 0;
	}
	
	Binary *self = (Binary*)tolua_tousertype(lua, 1, 0);
	if(!self){
		tolua_error(lua, "invalid 'self' in function 'setBinaryData'", nullptr);
		return 0;
	}
	
	u32 size = lua.getInteger(2);
	u8 *data = (u8*)self->getPointer();
	for(u32 i = 0; i < size; ++i){
		lua.getRawValue(3, i + 1);
		data[i] = (u8)lua.getInteger(-1);
		lua.pop(1);
	}
	return 0;
}

/* ファイルを列挙し，tableに格納 */
// (string dir, int nest=1, int opt=2) -> table
// * dir: ディレクトリ
// * nest: 列挙深度(0なら列挙しない，マイナスなら無制限)
// * opt: 列挙オプション(2=全て列挙，1=ファイルのみ列挙，0=ディレクトリのみ列挙)
static void enumfiles(Lua *lua, u32 &index, const string &dir, s32 nest, u8 opt){
	if(nest == 0) return;
	
	FileEnumerator f(dir);
	while(getState(&f) == Object::ACTIVE){
		const string &name = f.getName();
		if(name != "." && name != ".."){
			string path = f.getPath();
			
			if(Path::isDirectory(path)){
				if(opt != 1){
					lua->pushString(path);
					lua->setRawValue(-2, ++index);
				}
				enumfiles(lua, index, path, nest-1, opt);
			}else{
				if(opt != 0){
					lua->pushString(path);
					lua->setRawValue(-2, ++index);
				}
			}
		}
		f.toNext();
	}
}

static int enumerateFiles(lua_State *L){
	Lua lua(L);
	tolua_Error tolua_err;
	if(!tolua_isstring(lua, 1, 0, &tolua_err)){
		tolua_error(lua, "#ferror in function 'enumerateFiles'.", &tolua_err);
		return 0;
	}
	
	u32 index = 0;
	lua.createTable();
	enumfiles(&lua, index, lua.getString(1), lua.getType(2) == Lua::T_NUMBER? lua.getInteger(2): 1,
		lua.getType(3) == Lua::T_NUMBER? lua.getInteger(3): 2);
	return 1;
}
