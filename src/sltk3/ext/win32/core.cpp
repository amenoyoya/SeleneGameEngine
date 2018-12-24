#include "core.h"

#include <commdlg.h>	// GetOpenFileNameなど
#include <shlobj.h>		// SHGetFolderPathなど
//#include <sddl.h>		// ConvertSidToStringSid
//#include <shellapi.h>	// ShellExecute

namespace Sltk{
	namespace Win32{
		/* フォルダ選択ダイアログ */
		static int CALLBACK getOpenDirectoryProc(HWND hWnd,UINT msg,LPARAM,LPARAM data){
			if(msg == BFFM_INITIALIZED) SendMessage(hWnd, BFFM_SETSELECTION, (WPARAM)true, data);
			return 0;
		}
		
		string selectDirectory(const string &title, u32 len, const string &init_dir, u32 parent){
			wstring ret;
			BROWSEINFO binfo;
			LPITEMIDLIST item = nullptr;
			
			ret.resize(len + 1);
			ZeroMemory(&binfo, sizeof(binfo));
			binfo.hwndOwner = (HWND)parent;
			binfo.pidlRoot = nullptr;
			binfo.pszDisplayName = (wchar_t*)ret.c_str();
			binfo.lpszTitle = Encoding::utf8ToWideString(title).c_str();
			binfo.ulFlags = BIF_RETURNONLYFSDIRS;
			binfo.lpfn = &getOpenDirectoryProc;
			binfo.lParam = (LPARAM)Encoding::utf8ToWideString(init_dir).c_str();
			binfo.iImage = 0;
			
			if(nullptr == (item = SHBrowseForFolder(&binfo))) return "";
			SHGetPathFromIDList(item, (wchar_t*)ret.c_str());
			CoTaskMemFree(item);
			return Path::complete(Encoding::toUTF8(ret));
		}
		
		// ファイル選択ダイアログ
		string selectFile(const string &title_, const string &filter_, const string &init_dir, u32 flag, u32 parent){
			OPENFILENAME ofn;
			string cdir = System::getCurrentDirectory();	// カレントディレクトリを取得しておく
			wstring title = Encoding::utf8ToWideString(title_), file, filter = Encoding::utf8ToWideString(filter_);
			
			ZeroMemory(&ofn,sizeof(ofn));
			file.resize(512);
			
			for(u32 i = 0; i < filter.size(); ++i) if(filter[i] == '/') filter[i] = 0;
			for(s32 i = 0; i < 2; ++i) filter.push_back(0);
			
			ofn.lStructSize = sizeof(OPENFILENAME);
			ofn.hwndOwner = (HWND)parent;
			ofn.lpstrTitle = title.c_str();
			ofn.lpstrFilter = filter.c_str();
			ofn.lpstrFile = (wchar_t*)file.c_str();
			ofn.nMaxFile = 1024;
			ofn.lpstrInitialDir = Encoding::utf8ToWideString(init_dir).c_str();
			ofn.Flags = flag;
			GetOpenFileName(&ofn);
			
			// カレントディレクトリが変わっているので元に戻す
			System::setCurrentDirectory(cdir);
			return Encoding::toUTF8(file);
		}
		
		
		// キー入力をエミュレーション
		bool sendKeyAction(u8 vkey, s8 mode){
			if(mode == 0){
				INPUT input[2];
				
				input[0].type = input[1].type = INPUT_KEYBOARD;
				input[0].ki.wVk = input[1].ki.wVk = vkey;
				input[0].ki.wScan = input[1].ki.wScan = MapVirtualKey(vkey, 0);
				input[0].ki.dwFlags = KEYEVENTF_EXTENDEDKEY;
				input[1].ki.dwFlags = KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP;
				input[0].ki.time = input[1].ki.time = 0;
				input[0].ki.dwExtraInfo = input[1].ki.dwExtraInfo = GetMessageExtraInfo();
				return 0 < SendInput(2, input, sizeof(INPUT));
			}else{
				INPUT input;
				
				input.type = INPUT_KEYBOARD;
				input.ki.wVk = vkey;
				input.ki.wScan = MapVirtualKey(input.ki.wVk, 0);
				input.ki.dwFlags = KEYEVENTF_EXTENDEDKEY | (mode < 0? KEYEVENTF_KEYUP: 0);
				input.ki.time = 0;
				input.ki.dwExtraInfo = GetMessageExtraInfo();
				return 0 < SendInput(1, &input, sizeof(INPUT));
			}
		}
		
		// 全角・半角文字列入力エミュレーション
		bool sendKeyString(const string &keys){
			wstring str = Encoding::utf8ToWideString(keys);
			
			for(wchar_t *p = (wchar_t*)str.c_str(); *p; ++p){
				INPUT input[2];
				
				input[0].type = input[1].type = INPUT_KEYBOARD;
				input[0].ki.wVk = input[1].ki.wVk = 0;
				input[0].ki.wScan = input[1].ki.wScan = *p;
				input[0].ki.time = input[1].ki.time = 0;
				input[0].ki.dwExtraInfo = input[1].ki.dwExtraInfo = GetMessageExtraInfo();
				input[0].ki.dwFlags = KEYEVENTF_UNICODE;
				input[1].ki.dwFlags = KEYEVENTF_UNICODE | KEYEVENTF_KEYUP;
				if(0 == SendInput(2, input, sizeof(INPUT))) return false;
			}
			return true;
		}
		
		// ファイルドロップエミュレーション
		bool sendDropFiles(u32 hwnd, const string &filename){
			HGLOBAL hGlobal = nullptr;
			string file = Encoding::utf8ToShiftJIS(filename);
			if(nullptr == (hGlobal = GlobalAlloc(GHND, sizeof(DROPFILES) + file.size() + 2))) return false;
			
			DROPFILES * df = static_cast<DROPFILES *>(GlobalLock(hGlobal));
			df->pFiles = sizeof(DROPFILES);
			strcpy(reinterpret_cast<char*>(df + 1), file.c_str());
			GlobalUnlock(hGlobal);
			if(!PostMessage((HWND)hwnd, WM_DROPFILES, (WPARAM)hGlobal, 0)){
				GlobalFree(hGlobal);
				return false;
			}
			GlobalFree(hGlobal);
			return true;
		}
		
		
		/*** クリップボード関連 ***/
		// クリップボードにテキストをセット
		bool setClipboardText(const string &data, u32 hwnd){
			wstring		 text = Encoding::utf8ToWideString(data);
			HGLOBAL		 hMem;
			wchar_t		*lpBuff;
			DWORD		 dwSize = text.size() * sizeof(wchar_t) + 4;
			
			// クリップボードにデータを設定
			if(nullptr == (hMem = GlobalAlloc((GHND|GMEM_SHARE), dwSize))) return false;
			if(nullptr == (lpBuff = (wchar_t*)GlobalLock(hMem))){
				GlobalFree(hMem);
				return false;
			}
			wcscpy(lpBuff, text.c_str());
			GlobalUnlock(hMem);
			if(OpenClipboard((HWND)hwnd)){
				EmptyClipboard();
				SetClipboardData(CF_UNICODETEXT, hMem); // データを設定
				CloseClipboard();
				return true;
			}
			GlobalFree(hMem); // クリップボードが開けないとき解放
			return false;
		}
		
		// クリップボードのテキストを取得
		string getClipboardText(u32 hwnd){
			HGLOBAL		 hMem;
			wchar_t		*lpBuff;
			string		 ret;
			
			// クリップボードのデータを取得
			if(!OpenClipboard((HWND)hwnd)) return ret;
			if(nullptr != (hMem = GetClipboardData(CF_UNICODETEXT))
				&& nullptr != (lpBuff = (wchar_t*)GlobalLock(hMem)))
			{
				ret = Encoding::toUTF8(lpBuff);
				GlobalUnlock(hMem);
			}
			CloseClipboard();
			return ret;
		}
	}
}
