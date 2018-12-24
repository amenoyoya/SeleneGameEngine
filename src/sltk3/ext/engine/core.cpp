#include "core.h"
#include "tolua/module_core.cpp"

namespace Sltk{
	namespace Engine{
		/*** メインエンジン ***/
		static Lua *_engine = nullptr;
		
		Lua *getMainEngine(){return _engine;}
		
		
		/*** スクリプトファイルリーダー ***/
		static FileReader _reader;
		
		FileReader *getFileReader(){return &_reader;}
		
		/* 追加ライブラリ定義 */
		#include "extlib.cpp"
		
		/* SeleneTalk/Coreライブラリ */
		static u8 table_lib_code[] = {
			#include "corelib/Table.cpp"
		}, string_lib_code[] = {
			#include "corelib/String.cpp"
		}, lpeg_lib_code[] = {
			#include "corelib/LPeg.cpp"
		}, main_lib_code[] = {
			#include "corelib/Main.cpp"
		};
		
		/*** LuaにSLTKライブラリ登録 ***/
		void registerCoreLibrary(Lua *pLua, bool setMain){
			/* SLTK基本ライブラリ登録 */
			tolua_libSLTK_core_open(*pLua);
			/* toluaライブラリ追加登録 */
			pLua->getGlobal("tolua");
			pLua->pushCFunction(tocdata);
			pLua->setField(-2, "tocdata");
			pLua->setTop(0);
			/* Sltk::Engine::loadString登録 */
			pLua->getGlobal("Sltk");
			pLua->getField(-1, "Engine");
			pLua->pushCFunction(loadstring);
			pLua->setField(-2, "loadString");
			pLua->setTop(0);
			/* Sltk::Binary追加ライブラリ登録 */
			pLua->getGlobal("Sltk");
			pLua->pushCFunction(getBinaryData);
			pLua->setField(-2, "getBinaryData");
			pLua->pushCFunction(setBinaryData);
			pLua->setField(-2, "setBinaryData");
			/* Sltk::enumerateFiles関数登録 */
			pLua->pushCFunction(enumerateFiles);
			pLua->setField(-2, "enumerateFiles");
			pLua->setTop(0);
			/* SeleneTalk/Coreライブラリ登録 */
			pLua->doBuffer(table_lib_code, sizeof(table_lib_code));
			pLua->doBuffer(string_lib_code, sizeof(string_lib_code));
			pLua->doBuffer(lpeg_lib_code, sizeof(lpeg_lib_code));
			pLua->doBuffer(main_lib_code, sizeof(main_lib_code));
			/* メインエンジン登録 */
			if(setMain){
				_engine = pLua;
				/* Sltk::Engine::require登録 */
				pLua->getGlobal("Sltk");
				pLua->getField(-1, "Engine");
				pLua->pushCFunction(require);
				pLua->setField(-2, "require");
				pLua->setTop(0);
				/* package.loaders設定 */
				pLua->getGlobal("package");
				pLua->getField(-1, "loaders");
				pLua->pushCFunction(script_loader);
				pLua->setRawValue(-2, 2); // package.loaders[2] = script_loader(相対パスrequire)
				pLua->setTop(0);
			}
		}
		
		
		/* Lua/SeleneTalkファイルをロード */
		s8 loadCurrentScriptFile(const string &extension){
			if(getState(&_reader) != Object::ACTIVE) return -2;
			
			string filename = _reader.getCurrentFilePath(),
				ext = (extension == "?"? Path::getExtension(filename): extension);
			
			if(isSameStringIgnoreCase(ext, ".sltk")){ // SeleneTalkファイル
				setSeleneTalkMode(true);
				return (s8)_engine->loadString(Encoding::toUTF8(_reader.load(_reader.getSize())), filename);
			}else if(isSameStringIgnoreCase(ext, ".lua")){ // Luaファイル
				setSeleneTalkMode(false);
				return (s8)_engine->loadString(Encoding::toUTF8(_reader.load(_reader.getSize())), filename);
			}else if(isSameStringIgnoreCase(ext, ".sym")){ // バイトコードはそのまま実行
				u32 size = _reader.getSize();
				Binary bin(size);
				_reader.read(bin.getPointer(), size);
				return (s8)_engine->loadBuffer(bin.getPointer(), size, filename);
			}else{ // スクリプトファイルでない
				return -1;
			}
		}
		
		
		/* ディレクトリをアーカイブ化する(基底) */
		static bool encodeDirectoryBase(ZipArchiver *zip, const string &dirPath,
			const string &key, u8 level, u32 baseDirLen, const string &rootDir, bool comp)
		{
			FileEnumerator f(dirPath);
			
			if(getState(&f) == Object::FAILED) return false;
			do{
				if(f.getName() == "." || f.getName() == "..") continue;
				
				string path = f.getPath();
				
				if(Path::isDirectory(path)){ // ディレクトリは再帰
					if(!encodeDirectoryBase(zip, path, key, level, baseDirLen, rootDir, comp)) return false;
				}else if(Path::isFile(path)){
					string filename = rootDir + path.substr(baseDirLen), ext = Path::getExtension(path);
					if(comp && isSameStringIgnoreCase(ext, ".lua")){ // luaをコンパイル
						Binary bin;
						compile(Encoding::toUTF8(loadFile(path)), &bin, filename, true);
						// 拡張子を.symにして追加
						if(!zip->append(filename.substr(0, filename.size()-3)+"sym", bin.getPointer(), bin.getSize(), level, "", key)) return false;
					}else if(comp && isSameStringIgnoreCase(path, ".sltk")){ // seleneTalkをコンパイル
						Binary bin;
						compile(Encoding::toUTF8(loadFile(path)), &bin, filename);
						// 拡張子を.symにして追加
						if(!zip->append(filename.substr(0, filename.size()-4)+"sym", bin.getPointer(), bin.getSize(), level, "", key)) return false;
					}else{ // その他のファイルはそのままzipに追加
						if(!zip->appendFile(filename, path, level, "", key)) return false;
					}
				}
			}while(f.toNext());
			return true;
		}
		
		/* ディレクトリをアーカイブ化する */
		bool encodeDirectory(const string &dirPath, const string &outputFile,
			const string &key, u8 level, const string &mode, const string &rootDir, bool comp)
		{
			ZipArchiver zip(outputFile, mode);
			
			if(getState(&zip) == Object::FAILED) return false;
			return encodeDirectoryBase(&zip, dirPath, key, level,
				Path::appendSlash(dirPath).size(), rootDir == ""? "": Path::appendSlash(rootDir), comp);
		}
		
		// パスワードを暗号化してファイルに付与する
		static void encodePassword(File *file, const string &key){
			Binary bin;
			Randomizer rand;
			u32 size = key.size(), allsize = size * 16;
			
			for(u32 i = 0; i < allsize; ++i){
				char buf = (char)rand.get(256);
				
				if(i % 16 == 0) buf = key[i/16];
				
				if((i/16) % 2 == 0) buf = ~buf;
				else if((i/16) % 3 == 0) buf -= (char)i;
				else buf += (char)i;
				
				bin.pushValue(buf, 1);
			}
			bin.pushValue(size, 4);
			file->seek(0, SEEK_END);
			file->write(bin.getPointer(), bin.getSize());
		}
		
		/* ディレクトリを復号化キー埋め込みアーカイブ化 */
		bool encodeScriptDirectory(const string &dirPath, const string &outputFile, const string &key, u8 level){
			File file(outputFile, "wb");
			// 復号化キーを埋め込む
			encodePassword(&file, key);
			file.close();
			// アーカイブ化
			return encodeDirectory(dirPath, outputFile, key, level, "w+");
		}
		
		/* 復号化キー埋め込みアーカイブから復号化キー取得 */
		string decodePassword(const string &arc){
			u32 zipsize = getZipSize(arc);
			File file(arc, "rb");
			Binary bin;
			string ret;
			s32 size = 0, allsize = 0;
			
			if(zipsize == 0 || getState(&file) == Object::FAILED) return "";
			file.seek(-1 * zipsize, SEEK_END); // zipデータの分だけ前に戻る
			file.seek(-4, SEEK_CUR); // パスワードサイズ値(4byte)分更に戻る
			// パスワードサイズ取得
			file.read(&size, 4);
			bin.allocate(allsize = size * 16);
			if(size <= 0 || file.getSize() < (u32)allsize + 4) return "";
			// 暗号化パスワード取得
			file.seek(-allsize-4, SEEK_CUR);
			file.read(bin.getPointer(), allsize);
			// 復号化
			ret.reserve(size);
			for(s32 i = 0; i < allsize; ++i){
				s8 buf = bin[i];
				
				if((i/16) % 2 == 0) buf = ~buf;
				else if((i/16) % 3 == 0) buf += (char)i;
				else buf -= (char)i;
				
				if(i % 16 == 0) ret.push_back(buf);
			}
			return ret;
		}
		
		
		/*** エラー処理 ***/
		// デフォルトエラーハンドラー
		inline void defErrorHandler(const string &msg){
			#ifdef _WINDOWS
				MessageBox(nullptr, Encoding::utf8ToWideString(msg).c_str(), L"Script Error", MB_OK|MB_ICONWARNING);
			#else
				Console::setAttribute(Console::RED, Console::BLACK, true, true);
				Console::writeLine(msg);
				Console::setAttribute();
			#endif
		}
		
		void setErrorHandler(int (*func)(lua_State *L)){
			_engine->getGlobal("Sltk");
			_engine->getField(-1, "Engine");
			_engine->pushCFunction(func);
			_engine->setField(-2, "errorHandler");
			_engine->setTop(0);
		}
		
		void processError(const string &msg){
			_engine->getGlobal("Sltk");
			_engine->getField(-1, "Engine");
			_engine->getField(-1, "errorHandler");
			if(_engine->getType(-1) == Lua::T_FUNCTION){
				_engine->pushString(msg);
				if(!_engine->call(1, 0)){
					defErrorHandler("[Sltk.Engine.errorHandler]" + getMessage(_engine) + "\n" + msg);
				}
			}else{
				defErrorHandler(msg);
			}
			_engine->setTop(0);
		}
	}
}
