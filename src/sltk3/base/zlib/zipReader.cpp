#include "zipReader.h"

namespace Sltk{
	/*** class ZipFileReader ***/
	bool ZipFileReader::open(const string &arcname, const string &filename){
		ZipArchiver arc(arcname, "r");
		ZipFileInformation info;
		
		if(getState(&arc) == FAILED){
			_state = FAILED;
			_message = "failed to open zip file '"+arcname+"'";
			return false;
		}
		if(!arc.locateFile(filename)){
			_state = FAILED;
			_message = "failed to open local file '"+filename+"' in zip file '"+arcname+"'";
			return false;
		}
		if(!arc.getCurrentFileInformation(&info)){
			_state = FAILED;
			_message = "failed to get local file '"+filename+"' information in zip file '"+arcname+"'";
			return false;
		}
		close();
		bin.resize(info.uncompressedSize);
		if(!arc.openReadCurrentFile(bin.getPointer(), info.uncompressedSize, password)){
			_state = FAILED;
			_message = "failed to read local file '"+filename+"' in zip file '"+arcname+"'";
			return false;
		}
		_state = ACTIVE;
		return true;
	}
	
	string ZipFileReader::readLine(){
		string ret;
		
		while(getState(&bin) == ACTIVE){
			char c = bin.getS8();
			
			if(c == '\r'){
				bin.getS8(); break; // 次の改行文字を飛ばす
			}else if(c == '\n') break;
			ret.push_back(c);
		}
		return ret;
	}
	
	u32 ZipFileReader::read(void *dest, u32 size, u32 n){
		u32 ret = ((bin.getPosition() + size) > bin.getSize()? bin.getSize() - bin.getPosition(): size);
		
		memcpy(dest, bin.get(size), size);
		return ret;
	}
	
	string ZipFileReader::load(u32 size){
		string ret;
		
		ret.resize(size);
		read((void*)ret.c_str(), size);
		return ret;
	}
	
	
	u32 readFileInZip(const string &arcname, const string &filename, Binary *dest, const string &password){
		ZipFileReader file(arcname, filename, password);
		u32 cur = dest->getSize(), size = file.getSize();
		
		if(getState(&file) == Object::FAILED) return 0;
		dest->resize(cur + size);
		return file.read((u8*)dest->getPointer() + cur, size);
	}
	
	
	/*** class FileReader ***/
	bool FileReader::__open(const string &filename, const string &ext, const string &password){
		string path = Path::convert(filename); // ".", ".." を通常パスに変換
		
		// デフォルトアーカイブに対するopenを試行
		if(arcPathLen && Path::isSame(path, arcPath, arcPathLen)){
			string file = path.substr(arcPathLen + 1);
			
			pFile = new ZipFileReader(arcPath, file, arcKey);
			if(getState(pFile) == ACTIVE){
				curPath = Path::appendSlash(arcPath) + file;
				return true;
			}
			delete pFile; pFile = nullptr;
		}
		
		// 通常読み込み
		pFile = new File(filename, "rb");
		if(getState(pFile) == ACTIVE){
			curPath = filename;
			return true;
		}
		delete pFile; pFile = nullptr;
		
		// アーカイブ探索読み込み
		char *p = (char*)path.c_str();
		size_t i = 0, extlen = ext.size();
		
		while(*p){
			if(isSameStringIgnoreCase(p, ext, extlen) && (*(p+extlen) == '/'
				#ifdef _WINDOWS
					|| *(p+extlen) == '\\'
				#endif
			)){ // "ext/"の部分までをArchiveとしてopenを試行
				string arc = path.substr(0, i + extlen), file = path.substr(i + extlen + 1);
				
				pFile = new ZipFileReader(arc, file, password);
				if(getState(pFile) == ACTIVE){
					curPath = Path::appendSlash(arc) + file;
					return true;
				}
				delete pFile; pFile = nullptr;
				i += extlen;
				p += extlen;
			}
			++i;
			++p;
		}
		return false;
	}
	
	bool FileReader::open(const string &filename, const string &ext, const string &password){
		bool result;
		
		close();
		if(!(result = __open(filename, ext, password)) && getFileSystemDirectory() != "")
			// 通常のopenに失敗したらFileSystemDirectoryからも探す
			result = __open(Path::appendSlash(getFileSystemDirectory()) + filename, ext, password);
		if(!result){
			_state = FAILED;
			_message = "failed to open file '"+filename+"'";
			return result;
		}
		_state = ACTIVE;
		return result;
	}
	
	bool FileReader::openFile(const string &filename){
		close();
		pFile = new File(filename, "rb");
		if(getState(pFile) == FAILED){
			_state = FAILED;
			_message = getMessage(pFile);
			delete pFile; pFile = nullptr;
			return false;
		}
		curPath = filename;
		_state = ACTIVE;
		return true;
	}
	
	bool FileReader::openFileInZip(const string &arcname, const string &filename, const string &key){
		close();
		pFile = new ZipFileReader(arcname, filename, key);
		if(getState(pFile) == FAILED){
			_state = FAILED;
			_message = getMessage(pFile);
			delete pFile; pFile = nullptr;
			return false;
		}
		curPath = Path::appendSlash(arcname) + filename;
		_state = ACTIVE;
		return true;
	}
	
	void FileReader::close(){
		_state = NONE;
		_message.clear();
		if(pFile){
			pFile->close();
			delete pFile;
			pFile = nullptr;
			curPath.clear();
		}
	}
}
