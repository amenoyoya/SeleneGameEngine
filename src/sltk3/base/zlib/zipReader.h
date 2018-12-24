#pragma once

/* アーカイブファイル操作 */

#include "zipArchiver.h"

namespace Sltk{
	/*** ZIPアーカイブ内ファイル読み込みクラス ***/
	class ZipFileReader: public IFileReader {
	public:
		ZipFileReader(): IFileReader() {}
		explicit ZipFileReader(const string &arcname, const string &filename, const string &password="")
			: IFileReader(), password(password)
		{
			open(arcname, filename);
		}
		~ZipFileReader(){
			close();
		}
		
		void setPassword(const string &pass){ password = pass; }
		
		bool open(const string &arcname, const string &filename);
		void close(){
			_state = NONE; _message.clear(); bin.release();
		}
		
		u32 getSize(){
			return bin.getSize();
		}
		string readLine();
		s8 readChar(){
			seek(1, SEEK_CUR); return bin[getPosition()-1];
		}
		u32 read(void *dest, u32 size, u32 n=1);
		string load(u32 size);
		bool seek(s32 move, u8 from=SEEK_SET){
			bin.seek(move, from); return true;
		}
		u32 getPosition(){
			return bin.getPosition();
		}
		
		Binary &getBinary(){return bin;}
	private:
		Binary	bin;	// ファイル内容をBinaryオブジェクトで保持
		string	password;
	protected:
		virtual u8 _getState(){ // EOF検知
			return getState(&bin) == FINISHED? FINISHED: _state;
		}
	};
	
	
	/* ZipFile操作関数 */
	u32 readFileInZip(const string &arcname, const string &filename, Binary *dest, const string &password="");
	
	inline string loadFileInZip(const string &arcname, const string &filename, const string &password=""){
		ZipFileReader file(arcname, filename, password);
		return getState(&file) == Object::FAILED? "": (const s8*)file.getBinary().getPointer();
	}
	inline bool isFileInZip(const string &arcname, const string &filename, const string &password=""){
		ZipFileReader file(arcname, filename, password);
		return getState(&file) == Object::ACTIVE;
	}
	
	
	/*** File, ZipFileReaderラッパークラス ***/
	class FileReader: public Object {
	public:
		FileReader(): Object(), pFile(nullptr), arcPathLen(0) {}
		explicit FileReader(const string &filename, const string &ext="", const string &password="")
			: Object(), pFile(nullptr), arcPathLen(0)
		{
			open(filename, ext, password);
		}
		~FileReader(){
			close();
		}
		
		// openするデフォルトのアーカイブを設定
		void setDefaultArchive(const string &path, const string &key){
			arcPath = path, arcKey = key; arcPathLen = path.size();
		}
		void setDefaultArchive(const FileReader *file){
			arcPath = file->arcPath, arcKey = file->arcKey; arcPathLen = file->arcPathLen;
		}
		
		// File::open, ZipFileReader::open のラッパー
		// "Archive/File"形式のパスをZipFileReaderで開く
		// デフォルトアーカイブが設定されている場合は，まず"DefaultArchive/File"に対するopenを試行(ext, password は無視される)
		// setFileSystemDirectoryで指定したディレクトリ（アーカイブ）も探索する
		// ext: "～ext/"をArchiveと判断してopenを試行
		// 		指定しない場合，"/"が見つかる度にZipFileReader::openを試行
		// password: Archiveパスワード
		bool open(const string &filename, const string &ext="", const string &password="");
		
		// File::open
		bool openFile(const string &filename);
		
		// ZipFileReader::open
		bool openFileInZip(const string &arcname, const string &filename, const string &password="");
		
		void close();
		
		// 現在開いているファイルのパス("ディレクトリorアーカイブ/ファイル名")を取得
		const string &getCurrentFilePath() const{return curPath;}
		
		u32 getSize(){
			return (pFile? pFile->getSize(): 0);
		}
		string readLine(){
			return (pFile? pFile->readLine(): "");
		}
		s8 readChar(){
			return (pFile? pFile->readChar(): 0);
		}
		u32 read(void *dest, u32 size, u32 n=1){
			return (pFile? pFile->read(dest, size, n): 0);
		}
		string load(u32 size){
			return (pFile? pFile->load(size): "");
		}
		bool seek(s32 move, u8 from=SEEK_SET){
			return (pFile? pFile->seek(move, from): false);
		}
		u32 getPosition(){
			return (pFile? pFile->getPosition(): 0);
		}
	private:
		IFileReader		*pFile; // 条件によってFile,ZipFileReaderクラスに変わる
		string			 curPath; // 現在開いているファイルのパス
		
		/* openするデフォルトアーカイブ */
		string arcPath, arcKey;
		u32 arcPathLen;
	protected:
		virtual u8 _getState(){
			return pFile? getState(pFile): _state;
		}
		
		bool __open(const string &filename, const string &ext, const string &password);
	};
}
