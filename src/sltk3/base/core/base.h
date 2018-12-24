#pragma once

/*** C++ SLTK library の内部文字エンコーディングはUTF-8で統一 ***/

#include "config.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

/*** 整数型定義 ***/
typedef char			s8;
typedef unsigned char	u8;
typedef short			s16;
typedef unsigned short	u16;
typedef long			s32;
typedef unsigned long	u32;

namespace Sltk{
	/* 文字列変換 */
	// precision: 浮動小数点数などの精度。デフォルトは6
	template<typename T>
	string toString(const T& target, u8 precision=0){
		stringstream ss;
		
		if(precision > 0) ss.precision(precision);
		ss<<target;
		return ss.str();
	}
	
	template<typename T>
	T stringTo(const string &str){
		T result;
		stringstream ss;
		
		ss<<str;
		ss>>result;
		return result;
	}
	
	/* 大文字･小文字 */
	inline void toUpper(const string::iterator &begin, const string::iterator &end){
		for(string::iterator it = begin; it != end; ++it) (*it) = (s8)::toupper(*it);
	}
	
	inline void toLower(const string::iterator &begin, const string::iterator &end){
		for(string::iterator it = begin; it != end; ++it) (*it) = (s8)::tolower(*it);
	}
	
	// 大文字・小文字を区別せずに文字列を比較する
	// len: -1以外を指定するとlenバイト分だけ比較する（-1なら全て比較）
	bool isSameStringIgnoreCase(const string &s1, const string &s2, u32 len=(u32)-1);
	
	// 文字列を全置換する
	string replaceString(string str, const string &oldString, const string &newString);
	
	
	/*** 文字列エンコーディング関連 ***/
	namespace Encoding{
		// エンコーディングタイプ
		enum Type{
			UNKNOWN,
			BINARY,
			ANSI,
			SJIS,
			JIS,
			EUC,
			ISO2022JP,
			UTF8,
			UTF16BE,
			UTF16LE,
			UTF32BE,
			UTF32LE
		};
		
		// エンコーディングエンジン初期化
		void initialize();
		
		// 対象文字列のエンコーディング名取得
		string getName(const string &target);
		
		// UTF-8文字列か判定(0=YES, 1=BOM付, -1=NO)
		s8 isUTF8(const string &target);
		
		// 対象文字列を任意のフォーマットにエンコード
		// fromEncoding: 対象文字列のエンコーディングタイプ。ENC_UNKNOWNなら自動判別
		string encode(const string &target, u8 toEncoding, u8 fromEncoding=UNKNOWN);
		
		// 対象文字列をUTF-8にエンコーディング
		// fromEncoding: 対象文字列のエンコーディングタイプ。ENC_UNKNOWNなら自動判別
		inline string toUTF8(const string &target, u8 fromEncoding=UNKNOWN){
			return isUTF8(target) == -1? encode(target, UTF8, fromEncoding): target;
		}
		string toUTF8(const wstring &target);
		
		// UTF-8 -> wstring
		wstring utf8ToWideString(const string &target);
		
		#define _U8(str) Sltk::Encoding::toUTF8(L##str)
		
		// 対象文字列をUTF-8からShift-JISにエンコーディング
		#ifdef _WINDOWS
			string utf8ToShiftJIS(const string &target);
		#endif
	}
	
	
	/* コンソール制御関連 */
	namespace Console{
		// UTF-8文字列標準出力
		inline void writeLine(const string &str){
			wprintf(L"%s\n", Encoding::utf8ToWideString(str).c_str());
		}
		inline void write(const string &str){
			wprintf(L"%s", Encoding::utf8ToWideString(str).c_str());
		}
		
		// コンソール色
		enum Color{
			BLACK,
			BLUE,
			GREEN,
			CYAN,
			RED,
			PURPLE,
			YELLOW,
			WHITE
		};
		
		// コンソールテキストの色・属性を設定する
		// 引数 : 前景色, 背景色, 高輝度フラグ, 下線フラグ
		bool setAttribute(s8 wFore=WHITE, s8 wBlack=BLACK, bool bHigh=false, bool bUnderscore=false);
		
		// カーソルの位置をセットする
		bool setCursorPosition(s16 shXPos, s16 shYPos);
		
		// 画面を消去する
		bool clear();
		
		// キー入力があるか調べる
		bool isKeyPressed();
		
		// 入力されたキーコードを取得する
		s32 getPressedKey();
		
		#ifdef _WINDOWS
			/*** Windows専用 ***/
			// コンソール表示
			void open();
			
			// コンソール解放
			inline void close(){
				FreeConsole();
			}
		#endif
	}
	
	
	/*** システム関連 ***/
	namespace System{
		// コマンド実行
		inline s32 execute(const string &cmd){
			#ifdef _WINDOWS
				#ifdef _MSC_VER
					return _wsystem(Encoding::utf8ToWideString(cmd).c_str());
				#else
					return system(UTF8toShiftJIS(cmd).c_str());
				#endif
			#else
				return /*WEXITSTATUS(*/system(cmd.c_str())/*)*/;
			#endif
		}
		
		
		// スリープ
		inline void sleep(u32 msec){
			#ifdef _WINDOWS
				Sleep(msec);
			#else
				usleep(msec*1000);
			#endif
		}
		
		
		/* 環境変数 */
		// 環境変数定義
		inline bool setEnvironmentVariable(const string &name, const string &val){
			#ifdef _WINDOWS
				return FALSE != SetEnvironmentVariable(Encoding::utf8ToWideString(name).c_str(), Encoding::utf8ToWideString(val).c_str());
			#else
				return 0 == putenv((char*)(name + "=" + val).c_str());
			#endif
		}
		
		// 環境変数取得
		string getEnvironmentVariable(const string &name);
		
		
		/* 作業ディレクトリ */
		// 作業ディレクトリ変更
		inline bool setCurrentDirectory(const string &dir){
			#ifdef _WINDOWS
				return FALSE != SetCurrentDirectory(Encoding::utf8ToWideString(dir).c_str());
			#else
				return 0 == chdir(dir.c_str());
			#endif
		}
		
		// 作業ディレクトリ取得
		string getCurrentDirectory();
	}
	
	
	/*** 時間関連 ***/
	struct DateTime{
		u32 sec,	// 秒 [0-61] 最大2秒までのうるう秒を考慮
			min,	// 分 [0-59]
			hour,	// 時 [0-23]
			day,	// 日 [1-31]
			month,	// 月 [1-12]
			year,	// 年 [1901～]
			week;	// 曜日 [0:日 1:月 ... 6:土]
		DateTime(){}
	};
	
	// 年月日を計算
	bool getDate(DateTime *dest, u32 timer=time(nullptr));
	
	// システム時間を取得(ミリ秒単位)
	u32 getSystemTime();
}
