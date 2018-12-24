#pragma warning(disable:4244)

#include "core.h"
#include "luautf8/lutf8lib.c"
#include "lpeg-1.0.0/lpcap.c"
#include "lpeg-1.0.0/lpcode.c"
#include "lpeg-1.0.0/lpprint.c"
#include "lpeg-1.0.0/lptree.c"
#include "lpeg-1.0.0/lpvm.c"

namespace Sltk{
	Lua::Lua(bool useExtLib): Object(), pLua(luaL_newstate()), needclose(true) {
		_state = ACTIVE;
		luaL_openlibs(pLua); // 標準ライブラリopen
		if(useExtLib){
			luaopen_utf8(pLua); // UTF-8サポート
			setGlobal("utf8");
			luaopen_lpeg(pLua); // lua拡張パターンマッチングライブラリ
		}
	}
	
	Lua::Lua(lua_State *L, bool useExtLib): Object(), pLua(L), needclose(false) {
		_state = ACTIVE;
		if(useExtLib){
			luaopen_utf8(pLua); // UTF-8サポート
			setGlobal("utf8");
			luaopen_lpeg(pLua); // lua拡張パターンマッチングライブラリ
		}
	}
	
	bool Lua::loadFile(const string &filename){
		File file(filename, "rb");
		if(getState(&file) == Object::FAILED){
			_message = "file '" + filename + "' not found";
			return false;
		}
		
		Binary bin(file.getSize());
		file.read(bin.getPointer(), bin.getSize());
		return loadBuffer(bin.getPointer(), bin.getSize(), filename);
	}
	
	bool Lua::loadBuffer(const void *buffer, u32 size, const string &codeName){
		if(size == 0){
			_message = "["+codeName+"] loading buffer size is 0";
			return false;
		}else if(0 != luaL_loadbuffer(pLua, (const char*)buffer, size, codeName.c_str())){
			_message = Encoding::toUTF8(getString(-1));
			pop(1);
			return false;
		}
		return true;
	}
	
	/* Luaコードコンパイル */
	static Binary g_luaCodeBin;
	static bool g_luaStrReaderFlag = false;
	
	static const char *lua_strReader(lua_State *L, char *code, size_t *size){
		if(g_luaStrReaderFlag){
			*size = 0;
			return nullptr;
		}else{
			g_luaStrReaderFlag = true;
			*size = strlen(code);
			g_luaCodeBin.release();
			g_luaCodeBin.pushString(code, *size);
			return (const char*)g_luaCodeBin.getPointer();
		}
	}
	
	inline int lua_fileWriter(lua_State *ls, const void *data, size_t size, File *file){
		file->write(data, size);
		return 0; // no error
	}
	
	inline int lua_binWriter(lua_State *ls, const void *data, size_t size, Binary *bin){
		bin->push(data, size);
		return 0; // no error
	}
	
	// 文字列→ファイル コンパイル
	bool Lua::compileString(const string &code, const string &destFile, const string &codeName, bool strip){
		File fout(destFile, "wb");
		
		if(getState(&fout) == Object::FAILED) return false;
		g_luaStrReaderFlag = false;
		if(0 != lua_load(pLua, (lua_Reader)lua_strReader, (void*)code.c_str(), codeName.c_str())){
			_message = Encoding::toUTF8(getString(-1));
			setTop(0);
			return false;
		}
		bool ret = (0 == luaX_dump(pLua, (lua_Writer)lua_fileWriter, &fout, strip));
		setTop(0);
		return ret;
	}
	
	// 文字列→バイナリ コンパイル
	bool Lua::compileString(const string &code, Binary *dest, const string &codeName, bool strip){
		g_luaStrReaderFlag = false;
		if(0 != lua_load(pLua, (lua_Reader)lua_strReader, (void*)code.c_str(), codeName.c_str())){
			_message = Encoding::toUTF8(getString(-1));
			setTop(0);
			return false;
		}
		bool ret = (0 == luaX_dump(pLua, (lua_Writer)lua_binWriter, dest, strip));
		setTop(0);
		dest->seek(0, SEEK_SET);
		return ret;
	}
	
	// ファイル→ファイル コンパイル
	bool Lua::compileFile(const string &srcFile, const string &destFile, bool strip){
		string code = Sltk::loadFile(srcFile);
		if(code == ""){
			_message = "file '"+srcFile+"' buffer size is 0";
			return false;
		}
		return compileString(code, destFile, srcFile, strip);
	}
	
	// ファイル→バイナリ コンパイル
	bool Lua::compileFile(const string &srcFile, Binary *dest, bool strip){
		string code = Sltk::loadFile(srcFile);
		if(code == ""){
			_message = "file '"+srcFile+"' buffer size is 0";
			return false;
		}
		return compileString(code, dest, srcFile, strip);
	}
	/* end /Luaコードコンパイル */
	
	string Lua::callString(const string &name){
		string ret;
		
		getGlobal(name);
		ret = getString(-1);
		pop(1);
		return ret;
	}
	
	double Lua::callNumber(const string &name){
		double ret;
		
		getGlobal(name);
		ret = getNumber(-1);
		pop(1);
		return ret;
	}
	
	s32 Lua::callInteger(const string &name){
		s32 ret;
		
		getGlobal(name);
		ret = getInteger(-1);
		pop(1);
		return ret;
	}
	
	bool Lua::callBoolean(const string &name){
		bool ret;
		
		getGlobal(name);
		ret = getBoolean(-1);
		pop(1);
		return ret;
	}
	
	bool Lua::call(s32 argnum, s32 retnum){
		if(0 != lua_pcall(pLua, argnum, retnum, 0)){
			_message = Encoding::toUTF8(getString(-1));
			pop(1);
			return false;
		}
		return true;
	}
}
