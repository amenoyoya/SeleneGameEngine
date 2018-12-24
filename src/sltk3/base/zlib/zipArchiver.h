#pragma once

#include "../core.h"

namespace Sltk{
	/* zipグローバル情報 */
	struct ZipGlobalInformation{
		u32 entries, // エントリー数
			commentSize; // グローバルコメントのバイト数
		
		ZipGlobalInformation(){}
	};
	
	/* zip書庫内ファイル情報 */
	struct ZipFileInformation{
		u32 version, // 作成されたバージョン
			neededVersion, // 解凍に必要なバージョン
			flag, // ビットフラグ
			compressionMethod, // 圧縮メソッド
			dosDate, // ファイル更新日(DOS)
			crc, // crc32
			compressedSize, // 圧縮時のサイズ
			uncompressedSize, // 解凍時のサイズ
			fileNameSize, // ファイル名のバイト数
			fileExtraSize, // エキストラフィールドのバイト数
			fileCommentSize, // コメントのバイト数
			diskNumStart, // disk num のスタート位置
			internalFA, // 内部ファイル属性
			externalFA; // 外部ファイル属性
		struct _DateTime{ // 日付・時間
			u32 sec, min, hour, day, month, year;
		}date;
		
		ZipFileInformation(){}
	};
	
	/*** zipファイル作成クラス ***/
	class ZipArchiver: public Object {
	public:
		ZipArchiver(): Object(), zip(0), unz(0), zipSize(0) {}
		explicit ZipArchiver(const string &filename, const string &type="w"): Object(), zip(0), unz(0), zipSize(0) {
			open(filename, type);
		}
		~ZipArchiver(){
			close();
		}
		
		// zipファイル作成
		// type: 作成タイプ
		// 		"w": 新規作成、 "w+":（ファイルに）埋め込み、 "a":（zipに）追加
		// 		"r": 作成(埋め込み)したzipアーカイブを読み込む
		bool open(const string &filename, const string &type="w");
		// close時に作成したzipファイルにコメントを付加できる
		bool close(const string &comment="");
		
		/*** アウトプットモード用関数 ***/
		// zipファイルにデータをファイルとして追加
		// level: 圧縮レベル0～9
		bool append(const string &filename, const void *data, u32 datasize,
			u8 level=6, const string &comment="", const string &password="");
		// データを文字列として追加
		bool appendString(const string &filename, const string &data,
			u8 level=6, const string &comment="", const string &password="")
		{
			return append(filename, data.c_str(), data.size(), level, comment, password);
		}
		// データをファイルとして追加
		bool appendFile(const string &destFileName, const string &srcFileName,
			u8 level=6, const string &comment="", const string &password="");
		
		
		/*** インプットモード用関数 ***/
		// グローバル情報取得
		bool getGlobalInformation(ZipGlobalInformation *info) const;
		// グローバルコメント取得。サイズはZipGlobalInfo.commentSize
		string getGlobalComment(u32 size) const;
		const u32 &getSize() const{return zipSize;} // zip全体のサイズ
		
		/* zip書庫内ファイル探索 */
		bool toFirstFile(); // 書庫内ファイルの最初の位置へ移動
		bool toNextFile(); // 次へ移動
		bool locateFile(const string &filename); // 指定ファイル名のファイル位置に移動
		bool getCurrentFileInformation(ZipFileInformation *info) const; // 現在位置にあるファイル情報を取得
		bool getCurrentFileInformation(void *filename, u32 fileNameSize, void *comment=nullptr, u32 commentSize=0) const;
		u32 getCurrentOffset() const; // 現在位置
		
		/* zip書庫内ファイル操作 */
		// 現在位置にあるファイルを開く
		bool openCurrentFile(const string &password="");
		bool closeCurrentFile();
		bool readCurrentFile(void *dest, u32 size);
		// open-read-closeを一気に行う関数
		bool openReadCurrentFile(void *dest, u32 size, const string &password=""){
			return openCurrentFile(password) && readCurrentFile(dest, size) && closeCurrentFile();
		}
		u32 getCurrentFilePosition() const; // openした書庫内ファイルの現在位置(解凍時)
	private:
		u32		zip, unz; // 圧縮・解凍ハンドル
		u32		zipSize; // zipファイル全体のサイズ
	protected:
		// 書庫内ファイルの読み込みが完了した場合FINISHEDを返す
		virtual u8 _getState();
	};
	
	// zipサイズ取得
	inline u32 getZipSize(const string &filename){
		ZipArchiver zip(filename, "r"); return zip.getSize();
	}
	
	// 埋め込みzipデータを削除する
	bool removeZipData(const string &filename);
}
