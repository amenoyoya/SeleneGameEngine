#include "filesystem.h"

#ifdef _WINDOWS
	#include <shlwapi.h>
#else
	#include <sys/stat.h>
	#include <dirent.h>
#endif

namespace Sltk{
	/*** ファイルパスライブラリ ***/
	namespace Path{
		// '/'か'\\'まで後方から検索
		static s32 getParentSep(const string &path, u32 size, s32 start=-1){
			s32 p = (start == -1? size-1: start);
			
			while(path[p] != '/'
				#ifdef _WINDOWS
					&& path[p] != '\\'
				#endif
				)
			{
				if(p == 0) return -1;
				--p;
			}
			return p;
		}
		
		// '.'まで後方から検索
		static s32 getFirstDot(const string &path, u32 size, s32 start=-1){
			s32 p = (start == -1? size-1: start);
			
			while(p >= 0){
				// '.'が見つかる前に'/'が見つかった場合は拡張子なし
				if(path[p+1] == '/'
					#ifdef _WINDOWS
						|| path[p] == '\\'
					#endif
				) return -1;
				// '.'の直後が'.'でなければ拡張子
				if(path[p] == '.' && (u32)p < size-1 && path[p+1] != '.') return p;
				--p;
			}
			return -1;
		}
		
		string getLeaf(const string &path){
			u32 size = path.size();
			return size > 0? path.substr(getParentSep(path, size)+1): "";
		}
		
		string getStem(const string &path){
			u32 size = path.size();
			if(size > 0){
				s32 extp = getFirstDot(path, size),
					sep = getParentSep(path, size, extp);
				return path.substr(sep+1, extp == -1? u32(-1): extp-(sep+1));
			}
			return "";
		}
		
		string getExtension(const string &path){
			u32 size = path.size();
			
			if(size > 0){
				s32 extp = getFirstDot(path, size);
				if(extp > 0) return path.substr(extp);
				return "";
			}
			return "";
		}
		
		string getParent(const string &path, bool real){
			if(real){
				string realpath = complete(path);
				u32 size = realpath.size();
				if(size > 0){
					s32 p = getParentSep(realpath, size);
					return p > 0? realpath.substr(0, p): "";
				}
				return "";
			}else{
				u32 size = path.size();
				if(size > 0){
					s32 p = getParentSep(path, size);
					return p > 0? path.substr(0, p): "";
				}
				return "";
			}
		}
		
		string convert(const string &path){
			string dest;
			char *p = (char*)path.c_str();
			bool sep = true;
			
			while(*p != 0){
				if(sep && *p == '.'){
					if(*(p+1) == '/'
						#ifdef _WINDOWS
							|| *(p+1) == '\\'
						#endif
					){
						p += 2;
						continue;
					}else if(*(p+1) == '.' && (*(p+2) == '/'
						#ifdef _WINDOWS
							|| *(p+2) == '\\'
						#endif
					)){
						char c = (dest.empty()? 0: *(dest.end()-1));
						p += 3;
						if(!dest.empty()) dest.erase(dest.end()-1);
						dest = getParent(dest, false);
						if(c) dest.push_back(c);
						continue;
					}
				}
				
				if(*p == '/' || *p == '\\') sep = true;
				else sep = false;
				
				dest.push_back(*p);
				++p;
			}
			return dest;
		}
		
		bool isSame(const string &path1, const string &path2, u32 len){
			unsigned char *p1 = (unsigned char*)path1.c_str(), *p2 = (unsigned char*)path2.c_str();
			u32 i = 0;
			
			while (*p1 || *p2) {
				if (len != (u32)-1 && len == i) return true;
				#if defined(_WINDOWS)
					if (toupper(*p1) != toupper(*p2) && !((*p1 == '/' && *p2 == '\\') || (*p1 == '\\' && *p2 == '/'))) return false;
				#elif defined(_APPLE)
					if (toupper(*p1) != toupper(*p2)) return false;
				#else
					if (*p1 != *p2) return false;
				#endif
				++p1; ++p2; ++i;
			}
			return true;
		}
		
		#ifdef _WINDOWS
			/* Windows版ファイル判定,フルパス取得など */
			bool isFile(const string &path){
				wstring p = Encoding::utf8ToWideString(path);
				return !PathIsDirectory(p.c_str()) && PathFileExists(p.c_str());
			}
			
			bool isDirectory(const string &path){
				return FALSE != PathIsDirectory(Encoding::utf8ToWideString(path).c_str());
			}
			
			string complete(const string &path){
				wchar_t dest[512];
				GetFullPathName(Encoding::utf8ToWideString(path).c_str(), 512, dest, nullptr);
				return Encoding::toUTF8(dest);
			}
			
			string appendSlash(const string &path){
				auto it = path.end() - 1;
				if(*it != '/' && *it != '\\') return path + "\\";
				return path;
			}
			
			string removeSlash(string path){
				auto it = path.end() - 1;
				if(*it == '/' || *it == '\\') path.erase(it);
				return path;
			}
		#else
			/* UNIX版ファイル判定,フルパス取得など */
			bool isFile(const string &path){
				struct stat buf;
				stat(path.c_str(), &buf);
				return (buf.st_mode & S_IFMT) == S_IFMT;
			}
			
			bool isDirectory(const string &path){
				struct stat buf;
				stat(path.c_str(), &buf);
				return (buf.st_mode & S_IFDIR) == S_IFDIR;
			}
			
			string complete(const string &path){
				char dest[512];
				return realpath(path.c_str(), dest);
			}
			
			string appendSlash(const string &path){
				auto it = path.end() - 1;
				if(*it != '/') return path + "/";
				return path;
			}
			
			string removeSlash(string path){
				auto it = path.end() - 1;
				if(*it == '/') path.erase(it);
				return path;
			}
		#endif
	}
	
	
	/*** FileSystem 参照ディレクトリ設定 ***/
	static string _fsdir;
	
	void setFileSystemDirectory(const string &dir){
		_fsdir = dir;
	}
	const string &getFileSystemDirectory(){
		return _fsdir;
	}
	
	
	/*** class File ***/
	#ifdef _WINDOWS
		#ifdef _MSC_VER
			#define ENCODE(str) Encoding::utf8ToWideString(str)
			#define _FOPEN(open) _w##open
		#else
			#define ENCODE(str) Encoding::utf8ToShiftJIS(str)
			#define _FOPEN(open) open
		#endif
	#else
		#define ENCODE(str) str
		#define _FOPEN(open) open
	#endif
	#define FOPEN(open, path, mode) _FOPEN(open)(ENCODE(path).c_str(), ENCODE(mode).c_str())
	
	bool File::open(const string &path, const string &mode){
		close();
		if(mode[0] == 'p'){
			if(nullptr == (fp = FOPEN(popen, path, mode.substr(1))) && _fsdir != "")
				// 通常のopenに失敗したらFileSystemDirectoryからも探す
				fp = FOPEN(popen, Path::appendSlash(_fsdir)+path, mode.substr(1));
			if(nullptr == fp){
				_state = FAILED;
				_message = "failed to open pipe '"+path+"'";
				return false;
			}
			closeMode = 2;
		}else{
			if(nullptr == (fp = FOPEN(fopen, path, mode)) && _fsdir != "")
				// 通常のopenに失敗したらFileSystemDirectoryからも探す
				fp = FOPEN(fopen, Path::appendSlash(_fsdir)+path, mode);
			if(nullptr == fp){
				_state = FAILED;
				_message = "failed to open file '"+path+"'";
				return false;
			}
			closeMode = 1;
		}
		_state = ACTIVE;
		return true;
	}
	
	#undef ENCODE
	#undef _FOPEN
	#undef FOPEN
	
	bool File::open(u32 pFile, u8 mode){
		close();
		if(nullptr == (fp = (FILE*)pFile)){
			_state = FAILED;
			_message = "failed to open stream";
			return false;
		}
		closeMode = mode;
		_state = ACTIVE;
		return true;
	}
	
	void File::close(){
		_state = NONE;
		_message.clear();
		if(fp){
			if(closeMode == 1) fclose(fp);
			else if(closeMode == 2)
				#ifdef _MSC_VER
					_pclose(fp);
				#else _MSC_VER
					pclose(fp);
				#endif
			fp = nullptr;
		}
		closeMode = 0;
	}
	
	string File::readLine(){
		string ret;
		
		ret.reserve(128);
		for(char c = readChar(); c != EOF; c = readChar()){
			if(c == '\r'){
				readChar(); break; // 次の改行文字を飛ばす
			}else if(c == '\n') break;
			ret.push_back(c);
		}
		return ret;
	}
	
	u32 File::getSize(){
		u32 size = 0, current = getPosition();
		
		seek(0, SEEK_END);
		size = getPosition();
		// 元の位置に戻す
		seek(current, SEEK_SET);
		return size;
	}
	
	string File::load(u32 size){
		string ret;
		
		ret.resize(size);
		read((char*)&ret[0], sizeof(char), size);
		return ret;
	}
	
	
	/*** ファイル列挙クラス ***/
	#ifdef _WINDOWS
		/* Windows版FileEnumerator */
		bool FileEnumerator::open(const string &_dir){
			WIN32_FIND_DATA info;
			
			close();
			dir = Path::appendSlash(_dir);
			if(0 == (handle = (u32)FindFirstFile((Encoding::utf8ToWideString(dir)+L"*.*").c_str(), &info))){
				_state = FAILED;
				_message = "failed to open directory '"+_dir+"'";
				return false;
			}
			name = Encoding::toUTF8(info.cFileName);
			_state = ACTIVE;
			return true;
		}
		
		void FileEnumerator::close(){
			_state = NONE;
			_message.clear();
			if(handle){
				FindClose((HANDLE)handle);
				handle = 0;
			}
			dir.clear();
			name.clear();
		}
		
		bool FileEnumerator::toNext(){
			WIN32_FIND_DATA info;
			
			if(!FindNextFile((HANDLE)handle, &info)){
				_state = FINISHED;
				return false;
			}
			name = Encoding::toUTF8(info.cFileName);
			return true;
		}
	#else
		/* UNIX版FileEnumerator */
		bool FileEnumerator::open(const string &_dir){
			close();
			dir = Path::appendSlash(_dir);
			if(0 == (handle = (u32)opendir(dir.c_str()))){
				_state = FAILED;
				_message = "failed to open directory '"+_dir+"'";
				return false;
			}
			struct dirent* dent = readdir((DIR*)handle);
			if(!dent){
				_state = FAILED;
				_message = "failed to read directory '"+_dir+"'";
				return false;
			}
			name = dent->d_name;
			_state = ACTIVE;
			return true;
		}
		
		void FileEnumerator::close(){
			_state = NONE;
			_message.clear();
			if(handle){
				closedir((DIR*)handle);
				handle = 0;
			}
			dir.clear();
			name.clear();
		}
		
		bool FileEnumerator::toNext(){
			struct dirent* dent = readdir((DIR*)handle);
			if(!dent){
				_state = FINISHED;
				return false;
			}
			name = dent->d_name;
			return true;
		}
	#endif
	
	
	/** ファイル操作関連 **/
	bool readFile(const string &filename, Binary *dest){
		File file(filename, "rb");
		u32 cur = dest->getSize(), size = 0;
		
		if(getState(&file) == Object::FAILED) return false;
		size = file.getSize();
		dest->resize(cur + size);
		return 0 < file.read((u8*)dest->getPointer() + cur, size);
	}
	
	bool copyFile(const string &src, const string &dest, bool overwrite){
		Binary data;
		
		if(!overwrite && Path::isFile(dest)) return false;
		return readFile(src, &data) && writeFile(dest, data.getPointer(), data.getSize());
	}
	
	bool moveFile(const string &src, const string &dest, bool overwrite){
		bool isFile = Path::isFile(src), isDir = Path::isDirectory(src);
		
		if(overwrite){
			if(isFile){
				if(Path::isFile(dest) && !removeFile(dest)) return false;
			}else if(isDir){
				if(Path::isDirectory(dest) && !removeDirectory(dest)) return false;
			}
		}else{
			if(isFile){
				if(Path::isFile(dest)) return false;
			}else if(isDir){
				if(Path::isDirectory(dest)) return false;
			}
		}
		#ifdef _WINDOWS
			return FALSE != MoveFile(Encoding::utf8ToWideString(src).c_str(), Encoding::utf8ToWideString(dest).c_str());
		#else
			return 0 == rename(src.c_str(), dest.c_str());
		#endif
	}
	
	
	/** ディレクトリ操作関連 **/
	#ifdef _WINDOWS
		bool createDirectory(const string &dir){
			wstring wdir = Encoding::utf8ToWideString(dir);
			wchar_t *p = (wchar_t*)wdir.c_str();
			u32 i = 0;
			
			while(*p != '\0'){ // 上位階層のディレクトリから順に作っていく
				if((*p == '/' || *p == '\\') && i > 0){
					wstring name = wdir.substr(0, i);
					if(!PathIsDirectory(name.c_str())
						&& !CreateDirectory(name.c_str(), nullptr)) return false;
				}
				++p; ++i;
			}
			if(!PathIsDirectory(wdir.c_str())
				&& !CreateDirectory(wdir.c_str(), nullptr)) return false;
			return true;
		}
	#else
		bool createDirectory(const string &dir){
			char *p = (char*)dir.c_str();
			u32 i = 0;
			
			while(p){ // 上位階層のディレクトリから順に作っていく
				if((*p == '/') && i > 0){
					string name = dir.substr(0, i);
					if(!Path::isDirectory(name) && 0 != mkdir(name.c_str(),
						S_IRWXU|S_IRGRP|S_IXGRP|S_IROTH|S_IXOTH)) return false;
				}
				++p; ++i;
			}
			if(!Path::isDirectory(dir) && 0 != mkdir(dir.c_str(),
				S_IRWXU|S_IRGRP|S_IXGRP|S_IROTH|S_IXOTH)) return false;
			return true;
		}
	#endif
	
	bool copyDirectory(const string &src, const string &dest){
		FileEnumerator f(src);
		string dir = Path::appendSlash(dest);
		
		if(getState(&f) == Object::FAILED) return false;
		if(!Path::isDirectory(dest) && !createDirectory(dest)) return false;
		do{
			if(f.getName() != "." && f.getName() != ".."){
				string path = f.getPath();
				
				if(Path::isDirectory(path)){ // ディレクトリ再帰
					if(!copyDirectory(path, dir + f.getName())) return false;
				}else{ // ファイルコピー
					if(!copyFile(path, dir + f.getName())) return false;
				}
			}
		}while(f.toNext());
		return true;
	}
	
	// 空ディレクトリ削除
	inline bool rmDir(const string &dir){
		#ifdef _WINDOWS
			return FALSE != RemoveDirectory(Encoding::utf8ToWideString(dir).c_str());
		#else
			return 0 == rmdir(dir.c_str());
		#endif
	}
	
	bool removeDirectory(const string &dir){
		FileEnumerator f(dir);
		
		if(getState(&f) == Object::FAILED) return false;
		do{
			if(f.getName() != "." && f.getName() != ".."){
				string path = f.getPath();
				
				if(Path::isDirectory(path)){ // ディレクトリは再帰で空にする
					if(!removeDirectory(path)) return false;
				}else{ // ファイル削除
					if(!removeFile(path)) return false;
				}
			}
		}while(f.toNext());
		return rmDir(dir); // 空にしたディレクトリを削除
	}
}
