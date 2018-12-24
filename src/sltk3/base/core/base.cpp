#include "base.h"
#include "babel/babel.h"
#include <locale.h>
#include <fcntl.h>

#ifdef _WINDOWS
	#include <conio.h>
	#include <io.h>
	#include <mmsystem.h>
#else
	#include <termios.h>
	#include <sys/time.h>
#endif

namespace Sltk{
	bool isSameStringIgnoreCase(const string &s1, const string &s2, u32 len) {
		unsigned char *p1 = (unsigned char*)s1.c_str(), *p2 = (unsigned char*)s2.c_str();
		u32 i = 0;
		
		while (*p1 || *p2) {
			if (len != (u32)-1 && len == i) return true;
			if (toupper(*p1) != toupper(*p2)) return false;
			++p1; ++p2; ++i;
		}
		return true;
	}
	
	string replaceString(string str, const string &oldString, const string &newString){
		size_t p = str.find(oldString);
		const size_t oldStringLength = oldString.length(), newStringLength = newString.length();
		
		while(p != string::npos){
			str.replace(p, oldStringLength, newString);
			p = str.find(oldString, p + newStringLength);
		}
		return str;
	}
	
	/*** 文字列エンコーディング ***/
	namespace Encoding{
		void initialize(){
			babel::init_babel();
			setlocale(LC_ALL, "");
		}
		
		string getName(const string &target){
			return toUTF8(babel::profile_for_UI::get_base_encoding_name(babel::analyze_base_encoding(target)));
		}
		
		/* 指定文字が何バイト文字か判定(戻り値: 1～4, 0=エラー) */
		static u8 getUTF8Byte(u8 c){
			if(c <= 0x7f) return 1;
			else if(c >= 0xc2 && c <= 0xdf) return 2;
			else if(c >= 0xe0 && c <= 0xef) return 3;
			else if(c >= 0xf0 && c <= 0xf7) return 4;
			return 0;
		}
		
		s8 isUTF8(const string &target){
			u8 *p = (u8*)target.c_str();
			// BOM判定
			if(*p == 0xEF && *(p+1) == 0xBB && *(p+2) == 0xBF) return 1;
			// data size を調べる
			while(*p){
				u8 byte = getUTF8Byte(*p);
				if(byte == 0) return -1;
				p += byte;
			}
			return 0;
		}
		
		string encode(const string &target, u8 toEncoding, u8 fromEncoding){
			const char *src = target.c_str();
			u32 p = 0;
			// BOMの除去
			if(*src == '\xef' && *(src + 1) == '\xbb' && *(src + 2) == '\xbf') p = 3;
			// エンコーディング
			if(fromEncoding == UNKNOWN){
				return babel::auto_translate<string>(src + p, toEncoding);
			}else{
				return babel::manual_translate<string>(src + p, fromEncoding, toEncoding);
			}
		}
		
		string toUTF8(const wstring &target){
			return babel::manual_translate<wstring>(target, babel::base_encoding::utf16, babel::base_encoding::utf8);
		}
		
		wstring utf8ToWideString(const string &target){
			const char *src = target.c_str();
			u32 p = 0;
			// BOMの除去
			if(*src == '\xef' && *(src + 1) == '\xbb' && *(src + 2) == '\xbf') p = 3;
			return babel::manual_translate<string, wstring>(src + p, babel::base_encoding::utf8, babel::base_encoding::utf16);
		}
		
		#ifdef _WINDOWS
			string utf8ToShiftJIS(const string &target){
				const char *src = target.c_str();
				u32 p = 0;
				// BOMの除去
				if(*src == '\xef' && *(src + 1) == '\xbb' && *(src + 2) == '\xbf') p = 3;
				return babel::manual_translate<string, string>(src + p, babel::base_encoding::utf8, babel::base_encoding::sjis);
			}
		#endif
	}
	
	
	/*** コンソール制御 ***/
	namespace Console{
		#ifdef _WINDOWS
			static s16 g_curAttr = WHITE; // 現在のコンソールテキスト属性
		#endif
		
		bool setAttribute(s8 wFore, s8 wBack, bool bHigh, bool bUnderscore){
			#ifdef _WINDOWS
				return FALSE != SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					g_curAttr = (wFore | (wBack*16) | (bHigh? FOREGROUND_INTENSITY: 0)
						| (bUnderscore? COMMON_LVB_UNDERSCORE: 0)));
			#else
				static const s8 col[] = {0, 4, 2, 6, 1, 5, 3, 7};
				return 0 < printf("\033[3%dm\033[4%dm%s%s", col[wFore], col[wBack],
					bHigh? "\033[1m": "", bUnderscore? "\033[4m": "");
			#endif
		}
		
		bool setCursorPosition(s16 shXPos, s16 shYPos){
			#ifdef _WINDOWS
				COORD	coord;
				
				coord.X = shXPos;
				coord.Y = shYPos;
				return FALSE != SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			#else
				return 0 < printf("\033[%d;%dH", shXPos, shYPos);
			#endif
		}
		
		bool clear(){
			#ifdef _WINDOWS
				CONSOLE_SCREEN_BUFFER_INFO	csbi;
				u32	dwNumberOfCharsWritten;		// 書き込まれたセル数
				COORD	coord = {0, 0};
				HANDLE	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				// コンソールスクリーンバッファに関する情報を取得
				if(!GetConsoleScreenBufferInfo(hConsole, &csbi)) return false;
				// バッファ内の指定した座標から指定した数の文字セル分だけ、前景色と背景色を設定
				if(!FillConsoleOutputAttribute(hConsole, g_curAttr,
					csbi.dwSize.X * csbi.dwSize.Y, coord, &dwNumberOfCharsWritten)) return false;
				// バッファ内の指定した座標から、指定した文字を指定した数だけ書き込む
				return FALSE != FillConsoleOutputCharacter(hConsole, ' ',
						csbi.dwSize.X * csbi.dwSize.Y, coord, &dwNumberOfCharsWritten);
			#else
				return 0 < printf("\033[2J");
			#endif
		}
		
		bool isKeyPressed(){
			#ifdef _WINDOWS
				return 0 != _kbhit();
			#else
				struct termios oldt, newt;
				s32 ch, oldf;
				
				tcgetattr(STDIN_FILENO, &oldt);
				newt = oldt;
				newt.c_lflag &= ~(ICANON | ECHO);
				tcsetattr(STDIN_FILENO, TCSANOW, &newt);
				oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
				fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
				ch = getchar();
				tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
				fcntl(STDIN_FILENO, F_SETFL, oldf);
				if(ch != EOF){
					ungetc(ch, stdin);
					return true;
				}
				return false;
			#endif
		}
		
		s32 getPressedKey(){
			#ifdef _WINDOWS
				return _getch();
			#else
				struct termios oldt, newt;
				s32 ch;
				
				tcgetattr( STDIN_FILENO, &oldt );
				newt = oldt;
				newt.c_lflag &= ~( ICANON | ECHO );
				tcsetattr( STDIN_FILENO, TCSANOW, &newt );
				ch = getchar();
				tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
				return ch;
			#endif
		}
		
		
		#ifdef _WINDOWS
			/*** コンソール表示 ***/
			static BOOL WINAPI HandlerRoutine(DWORD type){ //割り込み制御
				switch(type){
				case CTRL_C_EVENT:		//Ctrl+Cを受け取った
				case CTRL_BREAK_EVENT:	//Ctrl+Breakを受け取った
				case CTRL_CLOSE_EVENT:	//コンソールを閉じた
					return TRUE;		//無効にするのでTRUEを返す
				case CTRL_LOGOFF_EVENT:
				case CTRL_SHUTDOWN_EVENT:
					return FALSE;
				}
				return FALSE;	//それ以外の時は強制終了
			}
			
			void open(){
				if(AllocConsole()){ //コンソール割り当て
					//標準出力関連付け
					*stdout = *_fdopen(_open_osfhandle((intptr_t)GetStdHandle(STD_OUTPUT_HANDLE), _O_TEXT), "w");
					setvbuf(stdout, nullptr, _IONBF, 0);
					//標準エラー出力関連付け
					*stderr = *_fdopen(_open_osfhandle((intptr_t)GetStdHandle(STD_ERROR_HANDLE), _O_TEXT), "w");
					setvbuf(stderr, nullptr, _IONBF, 0);
					//標準入力関連付け
					*stdin = *_fdopen(_open_osfhandle((intptr_t)GetStdHandle(STD_INPUT_HANDLE), _O_TEXT), "r");
					setvbuf(stdin, nullptr, _IOFBF, 256);
					//割り込みハンドラ関数追加
					SetConsoleCtrlHandler(HandlerRoutine, TRUE);
				}
			}
		#endif
	}
	
	
	/*** システム関連 ***/
	namespace System{
		// 環境変数取得
		string getEnvironmentVariable(const string &env){
			#ifdef _WINDOWS
				wstring name = Encoding::utf8ToWideString(env), buf;
				u32 size = GetEnvironmentVariable(name.c_str(), nullptr, 0);
				
				if(size == 0) return "";
				buf.resize(size);
				GetEnvironmentVariable(name.c_str(), (wchar_t*)buf.c_str(), size);
				return Encoding::toUTF8(buf);
			#else
				char *ret = getenv(env.c_str());
				return nullptr == ret? "": ret;
			#endif
		}
		
		// 作業ディレクトリ取得
		#ifdef _WINDOWS
			string getCurrentDirectory(){
				wchar_t dest[512];
				GetCurrentDirectory(512, dest);
				return Encoding::toUTF8(dest);
			}
		#else
			string getCurrentDirectory(){
				char dest[512];
				return getcwd(dest, 512);
			}
		#endif
	}
	
	
	/*** 時間関連 ***/
	bool getDate(DateTime *dest, u32 work){
		struct tm *t;
		time_t timer = (time_t)work;
		
		if(nullptr == (t = localtime(&timer))) return false;
		dest->year = t->tm_year + 1900;
		dest->month = t->tm_mon + 1;
		dest->day = t->tm_mday;
		dest->week = t->tm_wday;
		dest->hour = t->tm_hour;
		dest->min = t->tm_min;
		dest->sec = t->tm_sec;
		return true;
	}
	
	u32 getSystemTime(){
		#ifdef _WINDOWS
			return timeGetTime();
		#else
			struct timeval tv;
			gettimeofday(&tv, nullptr);
			return tv.tv_sec * 1000 + tv.tv_usec / 1000;
		#endif
	}
}
