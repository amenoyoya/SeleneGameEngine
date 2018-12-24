#include "core.h"
#include <map>
#include <vector>

#ifdef _DESKTOP_APP
	#define SDL_MAIN_HANDLED
#endif

#include <SDL.h>
#include <SDL_opengl.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

namespace Sltk{
	namespace SDL{
		/*** class Window ***/
		static map<u32, Window*>	windowIDs; // WindowID管理マップ
		static vector<Window*>		drawingWindows; // 現在の描画対象ウィンドウを保存しておく配列
		
		// レンダラードライバーindex取得
		static s32 getRendererDriverIndex(const string &name){
			u32 n = getRendererDriverCount();
			
			for(u32 i = 0; i < n; ++i){
				if(name == getRendererDriverName(i)) return i;
			}
			return -1;
		}
		
		bool Window::open(const string &title, s32 x, s32 y, s32 w, s32 h, u32 flag, const string &rendererName){
			bool useOpenGL = strncmp(rendererName.c_str(), "opengl", 6) == 0;
			
			close();
			if(0 == (window = (u32)SDL_CreateWindow(title.c_str(), x == -1? SDL_WINDOWPOS_CENTERED: x,
				y == -1? SDL_WINDOWPOS_CENTERED: y, w, h, flag | (useOpenGL? WINDOW_OPENGL: 0))))
			{
				_state = FAILED;
				_message = "failed to create SDL_Window";
				return false;
			}
			if(0 == (renderer = (u32)SDL_CreateRenderer((SDL_Window*)window, 
				getRendererDriverIndex(rendererName), SDL_RENDERER_ACCELERATED)))
			{
				_state = FAILED;
				_message = "failed to create SDL_Renderer";
				return false;
			}
			/* OpenGL専用処理 */
			if(useOpenGL){
				// openglコンテキスト生成
				if(0 == (context = (u32)SDL_GL_CreateContext((SDL_Window*)window))){
					_state = FAILED;
					_message = "failed to create SDL_GLContext";
					return false;
				}
				// opengl描画設定
				SDL_GL_MakeCurrent((SDL_Window*)window, (SDL_GLContext)context);
				SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1); // ダブルバッファリング有効化
				glEnableClientState(GL_VERTEX_ARRAY); // 頂点配列の有効化
				glEnableClientState(GL_COLOR_ARRAY); // カラー配列の有効化
			}
			windowIDs[getID()] = this;			// ウィンドウIDを登録
			drawingWindows.push_back(this);		// 描画対象ウィンドウに設定
			_state = ACTIVE;
			return setBlendMode(BLEND_ALPHA); // アルファブレンディング
		}
		
		void Window::close(){
			_state = NONE;
			_message.clear();
			if(context){
				SDL_GL_DeleteContext((SDL_GLContext)context);
				context = 0;
			}
			if(renderer){
				SDL_DestroyRenderer((SDL_Renderer*)renderer);
				renderer = 0;
			}
			if(window){
				windowIDs.erase(getID());
				SDL_DestroyWindow((SDL_Window*)window);
				window = 0;
			}
		}
		
		bool Window::beginScene(){ // clearScreenもついでに実行
			/*if(getDrawingWindow() != this)*/ drawingWindows.push_back(this); // 描画対象ウィンドウに設定
			if(activated == 2){ // ウィンドウがアクティブなら入力状態取得
				acquireKeyStates();
				acquireMouseStates(); // マウスホイール状態はdefaultProcedureで取得
			}
			if(context){ // OpenGL描画対象ウィンドウに設定
				if(0 != SDL_GL_MakeCurrent((SDL_Window*)window, (SDL_GLContext)context)) return false;
			}
			return clearScreen();
		}
		
		void Window::endScene(){
			/*if(getDrawingWindow() == this)*/ drawingWindows.erase(drawingWindows.end()-1); // 描画対象ウィンドウから外す
			if(context) SDL_GL_SwapWindow((SDL_Window*)window);
			else SDL_RenderPresent((SDL_Renderer*)renderer);
		}
		
		void Window::acquireKeyStates(){
			const u8 *keyState = SDL_GetKeyboardState(nullptr);
			for(u32 i = 0; i < 285; ++i){
				if(sendKey[i] > 0){ // キーエミュレーション
					key[i] = sendKey[i], sendKey[i] = 0;
				}else{ // 実際のキー押下状態取得
					if(keyState[i] == 1){
						if(key[i] < 2) ++key[i];
					}else{
						key[i] = 0;
					}
				}
				// キーリピート判定カウンタ処理
				if(key[i] == 1) keyTimer[i] = (u32)clock();
				else if(key[i] == 2 && ((u32)clock() - keyTimer[i]) > keyRepeatTime)
					key[i] = 3; // KeyRepeatTimeミリ秒以上押しっぱなしならKey[i]を3にする
			}
		}
		
		void Window::acquireMouseStates(){
			int x, y;
			u32 state = SDL_GetMouseState(&x, &y);
			// マウスフォーカスがあるならマウス位置を保存
			if (SDL_GetMouseFocus() == (SDL_Window*)window) mouseX = x, mouseY = y;
			// 左中右ボタンの状態を検出
			for(u8 i = 0; i < 3; ++i){
				if(sendMouse[i] > 0){ // マウスボタンエミュレーション
					mouse[i] = sendMouse[i], sendMouse[i] = 0;
				}else{ // 実際のマウスボタン押下状態取得
					if(state & SDL_BUTTON(i+1)){
						if(mouse[i] < 2) ++mouse[i];
					}else{
						mouse[i] = 0;
					}
				}
				// キーリピート判定カウンタ処理
				if(mouse[i] == 1) mouseTimer[i] = (u32)clock();
				else if(mouse[i] == 2 && ((u32)clock() - mouseTimer[i]) > keyRepeatTime){
					mouse[i] = 3; // KeyRepeatTimeミリ秒以上押しっぱなしならmouse[i]を3にする
				}
			}
		}
		
		void Window::warpMouse(s32 x, s32 y){
			SDL_WarpMouseInWindow((SDL_Window*)window, x, y);
		}
		
		u32 Window::getWidth() const{
			int w, h;
			SDL_GetWindowSize((SDL_Window*)window, &w, &h);
			return w;
		}
		
		u32 Window::getHeight() const{
			int w, h;
			SDL_GetWindowSize((SDL_Window*)window, &w, &h);
			return h;
		}
		
		s32 Window::getX() const{
			int x, y;
			SDL_GetWindowPosition((SDL_Window*)window, &x, &y);
			return x;
		}
		
		s32 Window::getY() const{
			int x, y;
			SDL_GetWindowPosition((SDL_Window*)window, &x, &y);
			return y;
		}
		
		u32 Window::getID() const{
			return (u32)SDL_GetWindowID((SDL_Window*)window);
		}
		
		void Window::setTitle(const string &title){
			SDL_SetWindowTitle((SDL_Window*)window, title.c_str());
		}
		
		void Window::setSize(s32 w, s32 h){
			SDL_SetWindowSize((SDL_Window*)window, w, h);
		}
		
		void Window::setPosition(s32 x, s32 y){
			SDL_SetWindowPosition((SDL_Window*)window,
				x == -1? SDL_WINDOWPOS_CENTERED: x, y == -1? SDL_WINDOWPOS_CENTERED: y);
		}
		
		bool Window::setWindowMode(bool flag){
			return 0 == SDL_SetWindowFullscreen((SDL_Window*)window, flag? 0: SDL_WINDOW_FULLSCREEN);
		}
		
		bool Window::setIcon(u32 surf, bool release){
			if(surf == 0) return false;
			SDL_SetWindowIcon((SDL_Window*)window, (SDL_Surface*)surf);
			if(release) freeImage(surf);
			return true;
		}
		/*** end class Window ***/
		
		/*** SDL_Window関連関数 ***/
		Window *getWindowFromID(u32 id){
			return windowIDs[id];
		}
		
		u32 getWindowsCount(){
			return windowIDs.size();
		}
		
		Window *getDrawingWindow(){
			if(drawingWindows.empty()) return nullptr;
			return *(drawingWindows.end()-1);
		}
		
		
		/*** class FPSManager ***/
		void FPSManager::beginScene(){
			oldTime = newTime;
			++cnt;
			if( 1000 <= getSystemTime() - fpsTimer ){
				currentFPS = cnt;
				cnt = 0;
				fpsTimer = getSystemTime();
			}
		}
		
		void FPSManager::endScene(){
			newTime = getSystemTime() << 16;
			s32 sleepTime = idealSleep - (newTime - oldTime) - err; // 休止できる時間
			if(sleepTime < 1) sleepTime = 1; // 最低でも1msは休止
			oldTime = newTime;
			System::sleep(sleepTime >> 16); // 休止
			newTime = getSystemTime() << 16;
			err = newTime - oldTime - sleepTime; // 休止時間の誤差
		}
		/*** end class FPSManager ***/
		
		
		/*** class Joystick ***/
		bool Joystick::open(u32 index){
			close();
			if(0 == (handle = (u32)SDL_JoystickOpen(index))){
				_state = FAILED;
				_message = "failed to create SDL_Joystick[" + toString(index) + "]Control";
				return false;
			}
			_state = ACTIVE;
			return true;
		}
		
		void Joystick::close(){
			_state = NONE;
			_message.clear();
			if(handle){
				SDL_JoystickClose((SDL_Joystick*)handle);
				handle = 0;
			}
		}
		
		void Joystick::acquireInputStates(){
			// -- 十字ボタン入力状態取得 -- //
			// X軸
			xAxis = SDL_JoystickGetAxis((SDL_Joystick*)handle, 0);
			if(xAxis < 0){
				if(crossButtons[JOY_LEFT] < 2) ++crossButtons[JOY_LEFT];
				crossButtons[JOY_RIGHT] = 0;
			}else if(xAxis > 0){
				if(crossButtons[JOY_RIGHT] < 2) ++crossButtons[JOY_RIGHT];
				crossButtons[JOY_LEFT] = 0;
			}else{
				crossButtons[JOY_LEFT] = crossButtons[JOY_RIGHT] = 0;
			}
			// Y軸
			yAxis = SDL_JoystickGetAxis((SDL_Joystick*)handle, 1);
			if(yAxis < 0){
				if(crossButtons[JOY_UP] < 2) ++crossButtons[JOY_UP];
				crossButtons[JOY_DOWN] = 0;
			}else if(yAxis > 0){
				if(crossButtons[JOY_DOWN] < 2) ++crossButtons[JOY_DOWN];
				crossButtons[JOY_UP] = 0;
			}else{
				crossButtons[JOY_UP] = crossButtons[JOY_DOWN] = 0;
			}
			
			// -- ボタン入力状態取得 -- //
			u32 cnt = getButtonCount();
			for(u32 i = 0; i < cnt; ++i){
				if(SDL_JoystickGetButton((SDL_Joystick*)handle, i) == 1){
					if(buttons[i] < 2) ++buttons[i];
				}else{
					buttons[i] = 0;
				}
			}
		}
		
		string Joystick::getName() const{
			return SDL_JoystickName((SDL_Joystick*)handle);
		}
		
		u32 Joystick::getAxisCount() const{
			return SDL_JoystickNumAxes((SDL_Joystick*)handle);
		}
		
		u32 Joystick::getButtonCount() const{
			return SDL_JoystickNumButtons((SDL_Joystick*)handle);
		}
		/*** end class Joystick ***/
		
		u32 getJoystickCount(){
			return SDL_NumJoysticks();
		}
		
		
		/*** class Mixer ***/
		bool Mixer::open(const void *buf, u32 size){
			close();
			if(0 == (sound = (u32)Mix_LoadWAV_RW(SDL_RWFromConstMem(buf, size), 1))){
				_state = FAILED;
				_message = "failed to create SDL_Mixer";
				return false;
			}
			_state = ACTIVE;
			return true;
		}
		
		void Mixer::close(){
			_state = NONE;
			_message.clear();
			if(sound){
				Mix_FreeChunk((Mix_Chunk*)sound);
				sound = 0;
			}
		}
		
		bool Mixer::play(s32 channel, s32 loops, s32 ticks){
			return 0 == Mix_PlayChannelTimed(channel, (Mix_Chunk*)sound, loops, ticks);
		}
		
		bool Mixer::fadeIn(s32 channel, s32 loops, u32 ms, s32 ticks){
			return 0 == Mix_FadeInChannelTimed(channel, (Mix_Chunk*)sound, loops, ms, ticks);
		}
		
		u32 Mixer::setVolume(u32 vol){
			return (u32)Mix_VolumeChunk((Mix_Chunk*)sound, (s32)vol);
		}
		
		u32 Mixer::getVolume() const{
			return (u32)Mix_VolumeChunk((Mix_Chunk*)sound, -1);
		}
		/*** end class Mixer ***/
		
		u32 allocateChannels(u32 num){
			return Mix_AllocateChannels(num);
		}
		
		
		/*** 再生中チャンネルに対する操作 ***/
		u32 setChannelVolume(s32 channel, u32 vol){
			return (u32)Mix_Volume(channel, (u32)vol);
		}
		
		u32 getChannelVolume(s32 channel){
			return (u32)Mix_Volume(channel, -1);
		}
		
		void stopChannel(s32 channel){
			Mix_HaltChannel(channel);
		}
		
		void fadeOutChannel(s32 channel, u32 ms){
			Mix_FadeOutChannel(channel, ms);
		}
		
		void pauseChannel(s32 channel){
			Mix_Pause(channel);
		}
		
		void resumeChannel(s32 channel){
			Mix_Resume(channel);
		}
		
		void expireChannel(s32 channel, u32 ms){
			Mix_ExpireChannel(channel, ms);
		}
		
		bool isChannelPlaying(s32 channel){
			return 1 == Mix_Playing(channel);
		}
		
		bool isChannelPaused(s32 channel){
			return 1 == Mix_Paused(channel);
		}
		
		void setOnChannelFinishedFunction(void (*func)(s32 channel)){
			Mix_ChannelFinished((void(*)(int))func);
		}
	}
}
