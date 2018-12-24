#pragma once

#include "../../base/core.h"

namespace Sltk{
	namespace Win32{
		// フォルダ選択ダイアログ
		string selectDirectory(const string &title=_U8("フォルダ選択"), u32 len=MAX_PATH,
			const string &init_dir="", u32 parent=0);
		
		// ファイル選択フラグ
		enum FileSelectFlag{
			SF_READONLY              =  0x00000001,
			SF_OVERWRITEPROMPT       =  0x00000002,
			SF_HIDEREADONLY          =  0x00000004,
			SF_NOCHANGEDIR           =  0x00000008,
			SF_SHOWHELP              =  0x00000010,
			SF_NOVALIDATE            =  0x00000100,
			SF_ALLOWMULTISELECT      =  0x00000200,
			SF_EXTENSIONDIFFERENT    =  0x00000400,
			SF_PATHMUSTEXIST         =  0x00000800,
			SF_FILEMUSTEXIST         =  0x00001000,
			SF_CREATEPROMPT          =  0x00002000,
			SF_SHAREAWARE            =  0x00004000,
			SF_NOREADONLYRETURN      =  0x00008000,
			SF_NOTESTFILECREATE      =  0x00010000,
			SF_NONETWORKBUTTON       =  0x00020000,
			SF_NOLONGNAMES           =  0x00040000,     // force no long names for 4.x modules
		};
		
		// ファイル選択ダイアログ
		string selectFile(const string &title=_U8("ファイル選択"),
			const string &filter=_U8("文書ファイル/*.txt;*.rtf/全てのファイル/*.*"),
			const string &init_dir="", u32 flag=SF_FILEMUSTEXIST, u32 parent=0);
		
		// スクリーンサイズ取得
		inline u32 getScreenWidth(){
			return GetSystemMetrics(SM_CXSCREEN);
		}
		inline u32 getScreenHeight(){
			return GetSystemMetrics(SM_CYSCREEN);;
		}
		
		/*** マウス・キー入力エミュレーション ***/
		// カーソル位置を移動
		inline bool warpCursor(s32 x, s32 y){
			INPUT input = {INPUT_MOUSE,
				x * 65535 / (getScreenWidth() - 1),
				y * 65535 / (getScreenHeight() - 1),
				0, MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_MOVE, 0, 0};
			return 0 < SendInput(1, &input, sizeof(INPUT));
		}
		
		// マウスボタン入力
		enum MouseAction{
			MOUSEACT_LEFTDOWN   = 0x0002,
			MOUSEACT_LEFTUP     = 0x0004,
			MOUSEACT_RIGHTDOWN  = 0x0008,
			MOUSEACT_RIGHTUP    = 0x0010,
			MOUSEACT_MIDDLEDOWN = 0x0020,
			MOUSEACT_MIDDLEUP   = 0x0040,
			MOUSEACT_XDOWN      = 0x0080,
			MOUSEACT_XUP        = 0x0100,
		};
		inline bool sendMouseAction(u32 event){
			INPUT input = {INPUT_MOUSE, 0, 0, 0, event, 0, 0};
			return 0 < SendInput(1, &input, sizeof(INPUT));
		}
		
		// ホイール回転
		// 回転量は120の倍数。通常は120か-120でOK
		inline bool sendMouseWheel(s32 rot){
			INPUT input = {INPUT_MOUSE, 0, 0, rot, MOUSEEVENTF_WHEEL, 0, 0};
			return 0 < SendInput(1, &input, sizeof(INPUT));
		}
		
		// キー入力
		// mode: -1=離す, 0=押して離す, 1=押しっぱなし
		bool sendKeyAction(u8 vkey, s8 mode=0);
		
		// 全角(UTF-8)・半角文字列入力
		// ファンクションキーやコントロールキーを使わないならこっちのほうが便利
		bool sendKeyString(const string &keys);
		
		
		// ボタンクリックエミュレーション
		inline void sendClickButton(u32 button){
			SendMessage((HWND)button, BM_CLICK, 0, 0);
		}
		
		// ファイルドロップエミュレーション
		bool sendDropFiles(u32 hwnd, const string &filename);
		
		
		/*** クリップボード関連 ***/
		// クリップボードにテキストをセット
		bool setClipboardText(const string &data, u32 hwnd=0);
		
		// クリップボードクリア
		inline bool clearClipboard(u32 hwnd=0){
			if(OpenClipboard((HWND)hwnd)){
				EmptyClipboard(); CloseClipboard(); return true;
			}
			return false;
		}
		
		// クリップボードのテキストを取得
		string getClipboardText(u32 hwnd=0);
	}
}
