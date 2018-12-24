#include "zipArchiver.h"
#include <zlib.h>
// minizip ver.1.01h -- 最新版(1.1)はパスワード付きunzOpenCurrentFileに問題あり
#include <minizip/zip.h>
#include <minizip/unzip.h>

namespace Sltk{
	static inline u16 getDosDate(u32 year, u32 month, u32 day){
		return (u16)(((unsigned)(year - 1980) << 9) | ((unsigned)month << 5) | (unsigned)day);
	}
	
	static inline u16 getDosTime(u32 hour, u32 minute, u32 second){
		return (u16)(((unsigned)hour << 11) | ((unsigned)minute << 5) | ((unsigned)second >> 1));
	}
	
	// \を/に変換
	static inline string &exchangePath(string &dest){
		for(char *p = (char*)dest.c_str(); *p; ++p) if(*p == '\\') *p = '/';
		return dest;
	}
	
	/*** zlib用ファイル操作関数定義 ***/
	#ifdef _WINDOWS
		#ifdef _MSC_VER
			#define ENCODE(str) Encoding::utf8ToWideString(str).c_str()
			#define _FOPEN(open) _w##open
			#define _STRING(str) L##str
		#else
			#define ENCODE(str) Encoding::utf8ToShiftJIS(str).c_str()
			#define _FOPEN(open) open
			#define _STRING(str) str
		#endif
	#else
		#define ENCODE(str) str
		#define _FOPEN(open) open
		#define _STRING(str) str
	#endif
	#define FOPEN(open, path, mode) _FOPEN(open)(ENCODE(path), mode)
	
	static voidpf ZCALLBACK openFileFunc(voidpf opaque, const char* filename, int mode){
		FILE *file = nullptr;
		#ifdef _MSC_VER
			const wchar_t* mode_fopen = nullptr;
		#else
			const char* mode_fopen = nullptr;
		#endif
		
		if((mode & ZLIB_FILEFUNC_MODE_READWRITEFILTER) == ZLIB_FILEFUNC_MODE_READ) mode_fopen = _STRING("rb");
		else if(mode & ZLIB_FILEFUNC_MODE_EXISTING) mode_fopen = _STRING("r+b");
		else if(mode & ZLIB_FILEFUNC_MODE_CREATE) mode_fopen = _STRING("wb");
		
		if(mode_fopen){
			if(nullptr == (file = FOPEN(fopen, filename, mode_fopen)) && getFileSystemDirectory() != "")
				 // 通常のopenに失敗したらFileSystemDirectoryからも探す
				file = FOPEN(fopen, (Path::appendSlash(getFileSystemDirectory())+filename).c_str(), mode_fopen);
		}
		return file;
	}
	
	#undef ENCODE
	#undef _FOPEN
	#undef _STRING
	#undef FOPEN
	
	static uLong ZCALLBACK readFileFunc(voidpf opaque, voidpf stream, void* buf, uLong size){
		return (uLong)fread(buf, 1, (size_t)size, (FILE *)stream);
	}
	
	static uLong ZCALLBACK writeFileFunc(voidpf opaque, voidpf stream, const void* buf, uLong size){
		return (uLong)fwrite(buf, 1, (size_t)size, (FILE *)stream);
	}
	
	static long ZCALLBACK tellFileFunc(voidpf opaque, voidpf stream){
		return ftell((FILE *)stream);
	}
	
	static long ZCALLBACK seekFileFunc(voidpf opaque, voidpf stream, uLong offset, int origin){
		int fseek_origin = 0;
		long ret = 0;
		switch (origin){
		case ZLIB_FILEFUNC_SEEK_CUR :
			fseek_origin = SEEK_CUR;
			break;
		case ZLIB_FILEFUNC_SEEK_END :
			fseek_origin = SEEK_END;
			break;
		case ZLIB_FILEFUNC_SEEK_SET :
			fseek_origin = SEEK_SET;
			break;
		default: return -1;
		}
		if(fseek((FILE *)stream, offset, fseek_origin) != 0) ret = -1;
		return ret;
	}
	
	static int ZCALLBACK closeFileFunc(voidpf opaque, voidpf stream){
		return fclose((FILE *)stream);
	}
	
	static int ZCALLBACK errorFileFunc(voidpf opaque, voidpf stream){
		return ferror((FILE *)stream);
	}
	
	static zlib_filefunc_def g_fileFuncDef = { // UTF-8対応ファイル操作関数定義
		openFileFunc, readFileFunc, writeFileFunc, tellFileFunc,
		seekFileFunc, closeFileFunc, errorFileFunc, nullptr
	};
	
	
	/*** class ZipArchiver ***/
	bool ZipArchiver::open(const string &filename, const string &mode){
		close();
		
		u8 type;
		if(mode == "w") type = 0;
		else if(mode == "w+") type = 1;
		else if(mode == "a") type = 2;
		else if(mode == "r") type = 3;
		else{
			_state = FAILED;
			_message = "unknown ZipArchiver.open mode";
			return false;
		}
		
		if(type < 3){ // 作成
			if(0 == (zip = (u32)zipOpen2(filename.c_str(), type, nullptr, &g_fileFuncDef))){
				_state = FAILED;
				_message = "failed to create zip file '"+filename+"'";
				return false;
			}
		}else{ // 読み込み
			if(0 == (unz = (u32)unzOpen2(filename.c_str(), &g_fileFuncDef))){
				_state = FAILED;
				_message = "failed to open zip file '"+filename+"'";
				return false;
			}
			// zipファイル全体のサイズを算出しておく
			u32 offset = getCurrentOffset(), localFileSize = 0; // OFFSET, ローカルファイルサイズの合計
			for(bool flag = toFirstFile(); flag; flag = toNextFile()){
				ZipFileInformation info;
				// 各ローカルファイルのヘッダサイズと圧縮サイズ取得
				if(!getCurrentFileInformation(&info)){
					_state = FAILED;
					_message = "failed to get local file information '"+filename+"'";
					return false;
				}
				localFileSize += info.compressedSize + info.fileNameSize + info.fileExtraSize + 30;
			}
			zipSize = (u32)getFileSize(filename) - (offset - localFileSize); // zipサイズ
			if(!toFirstFile()){ // 最初のローカルファイルに戻る
				_state = FAILED;
				_message = "failed to go to the first local file '"+filename+"'";
				return false;
			}
			_state = ACTIVE;
			return true;
		}
		return true;
	}
	
	bool ZipArchiver::close(const string &comment){
		_state = NONE;
		_message.clear();
		if(zip){
			if(ZIP_OK != zipClose((zipFile)zip, comment != ""?
				#ifdef _WINDOWS
					Encoding::utf8ToShiftJIS(comment).c_str()
				#else
					comment.c_str()
				#endif
				: nullptr)) return false;
			zip = 0;
		}
		if(unz){
			if(UNZ_OK != unzClose((unzFile)unz)) return false;
			unz = 0;
		}
		return true;
	}
	
	/** zip::ZipArchiver outputモード関数 **/
	bool ZipArchiver::append(const string &filename, const void *data, u32 datasize, u8 level,
		const string &comment, const string &password)
	{
		DateTime tm;
		zip_fileinfo info;
		string name = filename;
		
		getDate(&tm);
		info.tmz_date.tm_year = tm.year;
		info.tmz_date.tm_mon = tm.month;
		info.tmz_date.tm_mday = tm.day;
		info.tmz_date.tm_hour = tm.hour;
		info.tmz_date.tm_min = tm.min;
		info.tmz_date.tm_sec = tm.sec;
		info.dosDate = getDosDate(tm.year, tm.month, tm.day);
		info.internal_fa = 0;
		info.external_fa = 0;
		// UTF-8対応 flagBase: 1<<11
		if(ZIP_OK != zipOpenNewFileInZip4((zipFile)zip,
			exchangePath(name).c_str(), &info, nullptr, 0,
			nullptr, 0, comment != ""? comment.c_str(): nullptr, Z_DEFLATED, level,
			0, 15, 8, Z_DEFAULT_STRATEGY, password != ""? password.c_str(): nullptr,
			getCRC32(data, datasize, 0xffffffff), 36, 1 << 11))
		{
			_message = "failed to create local file '"+filename+"' in zip";
			return false;
		}
		if(ZIP_OK != zipWriteInFileInZip((zipFile)zip, data, datasize)){
			_message = "failed to write local file '"+filename+"' in zip";
			zipCloseFileInZip((zipFile)zip);
			return false;
		}
		zipCloseFileInZip((zipFile)zip);
		return true;
	}
	
	bool ZipArchiver::appendFile(const string &destFileName, const string &srcFileName, u8 level,
		const string &comment, const string &password)
	{
		File file(srcFileName, "rb");
		if(getState(&file) == FAILED){
			_message = "failed to read file '"+srcFileName+"'";
			return false;
		}
		u32 size = file.getSize();
		Binary bin(size);
		
		file.read(bin.getPointer(), size);
		return append(destFileName, bin.getPointer(), size, level, comment, password);
	}
	
	/** zip::ZipArchiver inputモード関数 **/
	bool ZipArchiver::getGlobalInformation(ZipGlobalInformation *info) const{
		return UNZ_OK == unzGetGlobalInfo((unzFile)unz, (unz_global_info*)info);
	}
	
	string ZipArchiver::getGlobalComment(u32 size) const{
		string ret;
		
		ret.resize(size);
		unzGetGlobalComment((unzFile)unz, (s8*)ret.c_str(), size);
		return ret;
	}
	
	bool ZipArchiver::toFirstFile(){
		return UNZ_OK == unzGoToFirstFile((unzFile)unz);
	}
	
	bool ZipArchiver::toNextFile(){
		return UNZ_OK == unzGoToNextFile((unzFile)unz);
	}
	
	bool ZipArchiver::locateFile(const string &filename){
		string name = filename;
		return UNZ_OK == unzLocateFile((unzFile)unz, exchangePath(name).c_str(), 0);
	}
	
	bool ZipArchiver::getCurrentFileInformation(ZipFileInformation *info) const{
		return UNZ_OK == unzGetCurrentFileInfo((unzFile)unz, (unz_file_info*)info,
			nullptr, 0, nullptr, 0, nullptr, 0);
	}
	
	bool ZipArchiver::getCurrentFileInformation(void *filename, u32 fileNameSize, void *comment, u32 commentSize) const{
		return UNZ_OK == unzGetCurrentFileInfo((unzFile)unz, nullptr,
			(s8*)filename, fileNameSize, nullptr, 0, (s8*)comment, commentSize);
	}
	
	u32 ZipArchiver::getCurrentOffset() const{
		return unzGetOffset((unzFile)unz);
	}
	
	bool ZipArchiver::openCurrentFile(const string &password){
		return UNZ_OK == unzOpenCurrentFile3((unzFile)unz, nullptr, nullptr, 0,
			password != ""? password.c_str(): nullptr);
	}
	
	bool ZipArchiver::closeCurrentFile(){
		return UNZ_OK == unzCloseCurrentFile((unzFile)unz);
	}
	
	bool ZipArchiver::readCurrentFile(void *dest, u32 size){
		return 0 <= unzReadCurrentFile((unzFile)unz, dest, size);
	}
	
	u32 ZipArchiver::getCurrentFilePosition() const{
		return unztell((unzFile)unz);
	}
	
	u8 ZipArchiver::_getState(){
		if(unz && 1 == unzeof((unzFile)unz)) return FINISHED;
		else return _state;
	}
	
	
	bool removeZipData(const string &filename){
		ZipArchiver arc(filename, "r");
		if(getState(&arc) == Object::FAILED) return false;
		// zip以外の部分のデータをコピー
		File file(filename, "rb");
		u32 size = file.getSize() - arc.getSize();
		Binary bin(size);
		file.read(bin.getPointer(), bin.getSize());
		// 上書き
		file.open(filename, "wb");
		return 0 < file.write(bin.getPointer(), bin.getSize());
	}
}
