﻿#pragma once

/* DirectInput */

#include "types.h"

struct IDirectInput8W;
struct IDirectInputDevice8W;

namespace Sltk{
	namespace Win32{
		struct DXIMouseStatus{
			bool	button[8];
			s32		relX, relY, absX, absY, lx, ly, lz;
		};
		
		struct DXIJoypadStatus{
			s8		button[32];
			s32		lx, ly;
		};
		
		class DirectInput: public Object {
		public:
			DirectInput(): hwnd(nullptr), keyboard(nullptr), mouse(nullptr) {}
			explicit DirectInput(u32 hWnd): hwnd(nullptr), keyboard(nullptr), mouse(nullptr) {
				open(hWnd);
			}
			~DirectInput(){
				close();
			}
			
			bool open(u32 hwnd);
			void close();
			
			// 監視開始・終了
			bool acquire();
			bool unacquire();
			
			// 全キー・マウス・Joypad入力取得
			bool acquireInputStates();
			// 全キー・マウス・Joypad入力クリア
			void clearInputStates();
			
			/* 押されたキーから文字列を得る */
			string getString();
			
			// 指定キー(DIK_***)が押されているか
			const s8 &getKey(u32 id) const{return key[id];}
			
			// マウス状態を返す
			const DXIMouseStatus &getMouse() const{return mouse_state;}
			/*
			 button[0] : 左ボタンが押されているか
			 button[1] : 右ボタンが押されているか
			 rel[X,Y] : クライアント領域内でのマウス座標
			 abs[A,Y] : マウスの絶対座標
			 lx, ly : マウスの座標の移動量
			 lz : ホイールの回転量
			*/
			
			// Joypad状態を返す
			const DXIJoypadStatus &getJoypad() const{return jpad_state;}
			/*
			 button[0～31]: 0～31ボタンが押されているか(0: 押されていない, 1: 押された, 2: 押されている)
			 lx, ly: 十字キー(スティック)が入力されている方向
			*/
			
			u32 getTargetWindow() const{return (u32)hwnd;}
		private:
			HWND					hwnd;
			IDirectInputDevice8W	*keyboard, *mouse;
			
			// キーボードのメンバー変数
			s8	key[256];
			// マウスのメンバー変数
			DXIMouseStatus		mouse_state;
			// Joypadのメンバー変数
			DXIJoypadStatus		jpad_state;
			
			bool acquireKeyboardStates();
			bool acquireMouseStates();
			bool acquireJoypadStates();
		};
	}
}
