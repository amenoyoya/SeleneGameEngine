#include "core.h"

#define DIRECTINPUT_VERSION 0x0800
#include <dx9/dinput.h>

namespace Sltk{
	namespace Win32{
		// マウスカーソル位置取得
		static bool getCursorPosition(s32 *x, s32 *y){
			POINT pos;
			if(FALSE == GetCursorPos(&pos)) return false;
			*x = pos.x, *y = pos.y;
			return true;
		}
		
		// スクリーン座標をクライアント座標に変換
		static bool screenToClient(u32 hwnd, s32 *x, s32 *y){
			POINT point = {*x, *y};
			if(FALSE == ScreenToClient((HWND)hwnd, &point)) return false;
			*x = point.x, *y = point.y;
			return true;
		}
		
		static IDirectInput8W*			g_pDI = nullptr;
		static IDirectInputDevice8W*	g_jpad = nullptr;
		
		// 接続されているJoypad検索コールバック
		static BOOL CALLBACK enumJoypad(const DIDEVICEINSTANCE *pdidInstance, void *){
			if(FAILED(g_pDI->CreateDevice(
				pdidInstance->guidInstance, &g_jpad, nullptr))) return DIENUM_CONTINUE;
			return DIENUM_STOP;
		}
		
		// Joypadの十字キーの範囲設定コールバック
		static BOOL CALLBACK enumAxes(const DIDEVICEOBJECTINSTANCE *pdidoi, void *){
			DIPROPRANGE diprg;
			
			diprg.diph.dwSize       = sizeof( DIPROPRANGE );
			diprg.diph.dwHeaderSize = sizeof( DIPROPHEADER );
			diprg.diph.dwHow        = DIPH_BYID;
			diprg.diph.dwObj        = pdidoi->dwType;
			diprg.lMin              = -1000;
			diprg.lMax              =  1000;
			if(FAILED(g_jpad->SetProperty(DIPROP_RANGE , &diprg.diph))) return DIENUM_STOP;
			return DIENUM_CONTINUE;
		}
		
		bool DirectInput::acquireKeyboardStates(){
			s8 buf[256];
			
			if(FAILED(keyboard->GetDeviceState(sizeof(buf), buf))) return false;
			for(int i=0; i<256; ++i){
				// キーが押されていれば加算する(2以上加算する意味はない)
				if(buf[i] & 0x80){
					if(key[i] < 2) ++key[i];
				}else{
					key[i] = 0;
				}
			}
			return true;
		}
		
		bool DirectInput::acquireMouseStates(){
			DWORD dwItems = 8;
			DIDEVICEOBJECTDATA devObject[8];	// Receives buffered data 
			
			getCursorPosition(&mouse_state.absX, &mouse_state.absY);
			mouse_state.relX = mouse_state.absX, mouse_state.relY = mouse_state.absY;
			screenToClient((u32)hwnd, &mouse_state.relX, &mouse_state.relY);
			mouse_state.lx = 0;
			mouse_state.ly = 0;
			mouse_state.lz = 0;
			
			if(FAILED(mouse->GetDeviceData(sizeof(DIDEVICEOBJECTDATA), devObject, &dwItems, 0))){
				if(mouse->Acquire() != DI_OK) return false;
				mouse->GetDeviceData(sizeof(DIDEVICEOBJECTDATA), devObject, &dwItems, 0);
			}
			for(DWORD i=0; i < dwItems; ++i){
				switch(devObject[i].dwOfs){
				case DIMOFS_X:
					mouse_state.lx += devObject[i].dwData;
					break;
				case DIMOFS_Y:
					mouse_state.ly += devObject[i].dwData;
					break;
				case DIMOFS_Z:
					mouse_state.lx = 0;
					mouse_state.ly = 0;
					mouse_state.lz += devObject[i].dwData;
					break;
				default:
					mouse_state.button[devObject[i].dwOfs - DIMOFS_BUTTON0]
						= (0 != ((devObject[i].dwData & 0x80) >> 7));
					break;
				}
			}
			return true;
		}
		
		bool DirectInput::acquireJoypadStates(){
			DIJOYSTATE js;
			
			// Joypadが接続されていない場合は無視して動く
			if(!g_jpad) return true;
			
			if(FAILED(g_jpad->GetDeviceState(sizeof(DIJOYSTATE), &js))) return false;
			jpad_state.lx = js.lX, jpad_state.ly = js.lY;
			for(int i=0; i<32; ++i){
				// ボタンが押されていれば加算する(2以上加算する意味はない)
				if(js.rgbButtons[i] & 0x80){
					if(jpad_state.button[i] < 2) ++jpad_state.button[i];
				}else{
					jpad_state.button[i] = 0;
				}
			}
			return true;
		}
		
		bool DirectInput::open(u32 hWnd){
			close();
			hwnd = (HWND)hWnd;
			if(FAILED(DirectInput8Create(GetModuleHandle(nullptr), DIRECTINPUT_VERSION,
				IID_IDirectInput8, (void**)&g_pDI, nullptr)))
			{
				_state = FAILED;
				_message = "failed to create DirectInput8";
				return false;
			}
			
			// ----- キーボードデバイス生成 -----
			if(FAILED(g_pDI->CreateDevice(GUID_SysKeyboard, &keyboard, nullptr))) goto end;
			if(FAILED(keyboard->SetDataFormat(&c_dfDIKeyboard))) goto end;
			// 協調レベルをバックグランド・非排他アクセスに
			if(FAILED(keyboard->SetCooperativeLevel(hwnd,
				DISCL_NONEXCLUSIVE|DISCL_BACKGROUND))) goto end;
			
			// ----- マウスデバイス生成 -----
			if(FAILED(g_pDI->CreateDevice(GUID_SysMouse, &mouse, nullptr))) goto end;
			if(FAILED(mouse->SetDataFormat(&c_dfDIMouse2))) goto end;
			// 協調レベルをバックグランド・非排他アクセスに
			if(FAILED(mouse->SetCooperativeLevel(hwnd, DISCL_NONEXCLUSIVE|DISCL_BACKGROUND))) goto end;
			/* マウスデバイス設定 */
			DIPROPDWORD dimouse;
			
			dimouse.diph.dwSize = sizeof(dimouse); 
			dimouse.diph.dwHeaderSize = sizeof(dimouse.diph); 
			dimouse.diph.dwObj = 0;
			dimouse.diph.dwHow = DIPH_DEVICE;
			dimouse.dwData = DIPROPAXISMODE_REL;	// 相対値モード
			//dimouse.dwData = DIPROPAXISMODE_ABS;	// 絶対値モードの場合
			if(FAILED(mouse->SetProperty(DIPROP_AXISMODE, &dimouse.diph))) goto end;
			
			// バッファリング・データを取得するため、バッファ・サイズを設定
			dimouse.dwData = 8;
			if(FAILED(mouse->SetProperty(DIPROP_BUFFERSIZE, &dimouse.diph))) goto end;
			
			// ----- ジョイパッドデバイス生成 -----
			if(FAILED(g_pDI->EnumDevices(DI8DEVCLASS_GAMECTRL,
				enumJoypad, nullptr, DIEDFL_ATTACHEDONLY)) || !g_jpad) goto end;
			if(FAILED(g_jpad->SetDataFormat(&c_dfDIJoystick))) goto end;
			// 協調レベルをバックグランド・非排他アクセスに
			if(FAILED(g_jpad->SetCooperativeLevel(hwnd, DISCL_NONEXCLUSIVE|DISCL_BACKGROUND))) goto end;
			/* Joypadデバイス設定 */
			g_jpad->EnumObjects(enumAxes, (void*)hwnd, DIDFT_AXIS);
			
			end:
			g_pDI->Release();
			
			// データ取得開始
			clearInputStates();
			_state = ACTIVE;
			return acquire();
		}
		
		void DirectInput::close(){
			_state = NONE;
			_message.clear();
			if(keyboard){
				keyboard->Unacquire();
				keyboard->Release();
				keyboard = nullptr;
			}
			if(mouse){
				mouse->Unacquire();
				mouse->Release();
				mouse = nullptr;
			}
			if(g_jpad){
				g_jpad->Unacquire();
				g_jpad->Release();
				g_jpad = nullptr;
			}
		}
		
		bool DirectInput::acquire(){
			if(keyboard && FAILED(keyboard->Acquire())) return false;
			if(mouse && FAILED(mouse->Acquire())) return false;
			if(g_jpad && FAILED(g_jpad->Acquire())) return false;
			return true;
		}
		
		bool DirectInput::unacquire(){
			if(keyboard && FAILED(keyboard->Unacquire())) return false;
			if(mouse && FAILED(mouse->Unacquire())) return false;
			if(g_jpad && FAILED(g_jpad->Unacquire())) return false;
			return true;
		}
		
		bool DirectInput::acquireInputStates(){
			if(hwnd){
				if(GetForegroundWindow() != hwnd) return unacquire();
				else acquire();
			}
			return acquireKeyboardStates() && acquireMouseStates() && acquireJoypadStates();
		}
		
		void DirectInput::clearInputStates(){
			ZeroMemory(key, sizeof(key)), ZeroMemory(&mouse_state, sizeof(mouse_state)),
			ZeroMemory(&jpad_state, sizeof(jpad_state));
		}
		
		string DirectInput::getString(){
			string distr;
			
			while(acquireInputStates()){
				if(getKey(DIK_LSHIFT) || getKey(DIK_RSHIFT)){
					if(getKey(DIK_F) == 1){
						clearInputStates();
						break;
					}
				}
				if(getKey(DIK_BACK) == 1){
					if(distr.size() > 0){
						distr.erase(distr.end()-1);
					}
				}
				
				if(getKey(DIK_0) == 1) distr.push_back('0');
				if(getKey(DIK_1) == 1) distr.push_back('1');
				if(getKey(DIK_2) == 1) distr.push_back('2');
				if(getKey(DIK_3) == 1) distr.push_back('3');
				if(getKey(DIK_4) == 1) distr.push_back('4');
				if(getKey(DIK_5) == 1) distr.push_back('5');
				if(getKey(DIK_6) == 1) distr.push_back('6');
				if(getKey(DIK_7) == 1) distr.push_back('7');
				if(getKey(DIK_8) == 1) distr.push_back('8');
				if(getKey(DIK_9) == 1) distr.push_back('9');
				if(getKey(DIK_A) == 1) distr.push_back('a');
				if(getKey(DIK_B) == 1) distr.push_back('b');
				if(getKey(DIK_C) == 1) distr.push_back('c');
				if(getKey(DIK_D) == 1) distr.push_back('d');
				if(getKey(DIK_E) == 1) distr.push_back('e');
				if(getKey(DIK_F) == 1) distr.push_back('f');
				if(getKey(DIK_G) == 1) distr.push_back('g');
				if(getKey(DIK_H) == 1) distr.push_back('h');
				if(getKey(DIK_I) == 1) distr.push_back('i');
				if(getKey(DIK_J) == 1) distr.push_back('j');
				if(getKey(DIK_K) == 1) distr.push_back('k');
				if(getKey(DIK_L) == 1) distr.push_back('l');
				if(getKey(DIK_M) == 1) distr.push_back('m');
				if(getKey(DIK_N) == 1) distr.push_back('n');
				if(getKey(DIK_O) == 1) distr.push_back('o');
				if(getKey(DIK_P) == 1) distr.push_back('p');
				if(getKey(DIK_Q) == 1) distr.push_back('q');
				if(getKey(DIK_R) == 1) distr.push_back('r');
				if(getKey(DIK_S) == 1) distr.push_back('s');
				if(getKey(DIK_T) == 1) distr.push_back('t');
				if(getKey(DIK_U) == 1) distr.push_back('u');
				if(getKey(DIK_V) == 1) distr.push_back('v');
				if(getKey(DIK_W) == 1) distr.push_back('w');
				if(getKey(DIK_X) == 1) distr.push_back('x');
				if(getKey(DIK_Y) == 1) distr.push_back('y');
				if(getKey(DIK_Z) == 1) distr.push_back('z');
				
				System::sleep(1);
			}
			return distr;
		}
	}
}
