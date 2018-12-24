#include "window.h"

namespace Sltk{
	namespace Win32{
		/* Windowクラス用通常関数 */
		bool adjustWindow(u32 hwnd, u32 w, u32 h){
			RECT crc;
			s32 xx = 0, yy = 0;
			
			GetClientRect((HWND)hwnd, &crc);
			xx = w - crc.right;
			yy = h - crc.bottom;
			w += xx;
			h += yy;
			return FALSE != SetWindowPos((HWND)hwnd, HWND_TOP, 0, 0, w, h, SWP_NOMOVE);
		}
		
		bool moveWindowToCenter(u32 hwnd, bool show, u32 back){
			RECT stage;
			RECT window;
			
			GetClientRect((HWND)back, &stage);
			GetWindowRect((HWND)hwnd, &window);
			return FALSE != SetWindowPos((HWND)hwnd, HWND_TOP,
				(stage.right - (window.right-window.left)) / 2,
				(stage.bottom - (window.bottom-window.top)) / 2,
				(window.right-window.left), (window.bottom-window.top),
				show? SWP_SHOWWINDOW: SWP_HIDEWINDOW);
		}
		
		string getWindowName(u32 hwnd, u32 max){
			wstring buff;
			
			buff.resize(max);
			GetClassName((HWND)hwnd, (wchar_t*)buff.c_str(), max);
			return Encoding::toUTF8(buff);
		}
		
		string getWindowText(u32 hwnd){
			wstring buff;
			u32 max = SendMessage((HWND)hwnd, WM_GETTEXTLENGTH, 0, 0) + 4;
			
			buff.resize(max);
			SendMessage((HWND)hwnd, WM_GETTEXT, (WPARAM)max, (LPARAM)buff.c_str());
			return Encoding::toUTF8(buff);
		}
		
		
		/*** class Window ***/
		map<HWND, Window*> Window::_windowMap;
		
		bool Window::open(u32 parent, const string &title, s32 x, s32 y,
			u32 w, u32 h, u32 style, u32 exstyle, const string &classname, u32 id)
		{
			wstring name = Encoding::utf8ToWideString(classname == ""? "Window_"+toString(this): classname);
			LPCWSTR _name = name.c_str();
			HINSTANCE hInst = GetModuleHandle(nullptr);
			s8 reg = 0;
			
			close();
			if(-1 == (reg = registerClass(_name, hInst))){
				_state = FAILED;
				_message = "failed to register window '"+(classname == ""? "Window_"+toString(this): classname)+"'";
				return false;
			}
			if(nullptr == (hwnd = CreateWindowEx(exstyle, _name, Encoding::utf8ToWideString(title).c_str(),
				style, x, y, w, h, (HWND)parent, (HMENU)id, hInst, nullptr)))
			{
				_state = FAILED;
				_message = "failed to create window '"+(classname == ""? "Window_"+toString(this): classname)+"'";
				return false;
			}
			if(!adjustWindow((u32)hwnd, w, h)){
				_state = FAILED;
				_message = "failed to adjust window size '"+(classname == ""? "Window_"+toString(this): classname)+"'";
				return false;
			}
			if(reg == 1) _windowMap[hwnd] = this;
			_state = ACTIVE;
			return true;
		}
		
		void Window::close(){
			_state = NONE;
			_message.clear();
			if(hwnd){
				_windowMap.erase(hwnd);
				DestroyWindow(hwnd);
				hwnd = nullptr;
			}
		}
		
		LRESULT CALLBACK Window::_windowProcedure(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp){
			auto it = _windowMap.find(hwnd);
			Window *pWindow = (it == _windowMap.end()? nullptr: it->second);
			
			if(pWindow && pWindow->procedure
				&& !pWindow->procedure((u32)hwnd, (u32)msg, (u32)wp, (u32)lp)) return 0;
			switch(msg){
			case WM_DESTROY:
				if(pWindow) pWindow->close();
				if(_windowMap.empty()) PostQuitMessage(0);
				break;
			}
			return DefWindowProc(hwnd, msg, wp, lp);
		}
		
		s8 Window::registerClass(LPCWSTR name, HINSTANCE hInst){
			WNDCLASSEX wc;
			
			if(!GetClassInfoEx(hInst, name, &wc)){
				ZeroMemory(&wc, sizeof(wc));
				wc.cbSize = sizeof(wc);
				wc.style = CS_HREDRAW|CS_VREDRAW;
				wc.cbWndExtra = 0;
				wc.lpfnWndProc = _windowProcedure;
				wc.hInstance = hInst;
				wc.hIcon = wc.hIconSm = (HICON)LoadIcon(hInst, MAKEINTRESOURCE(100));
				wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
				wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
				wc.lpszClassName = name;
				return RegisterClassEx(&wc)? 1: -1;
			}
			return 0;
		}
		
		
		/* ウィンドウプロシージャ実行 */
		bool pollWindowMessage(){
			MSG msg;
			bool result = 0 < GetMessage(&msg, nullptr, 0, 0);
			
			if(result){
				/* Browser用 */
				if(msg.message >= WM_KEYFIRST && msg.message <= WM_KEYLAST // キーボードイベント
					&& getWindowName((u32)msg.hwnd) == "Internet Explorer_Server") // IEコンポーネントなら
				{
					// 親親親親ウィンドウでイベント処理
					SendMessage(GetParent(GetParent(GetParent(GetParent(msg.hwnd)))), msg.message, msg.wParam, msg.lParam);
				}else if(msg.message == WM_DROPFILES // ファイルドロップイベント
					&& getWindowName((u32)msg.hwnd) == "AtlAxWin80") // IEコンポーネントなら
				{
					// 親ウィンドウでイベント処理
					SendMessage(GetParent(msg.hwnd), msg.message, msg.wParam, msg.lParam);
				}
				/* 通常処理 */
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
			return result;
		}
	}
}
