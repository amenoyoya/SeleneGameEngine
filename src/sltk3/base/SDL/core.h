#pragma once

#include "base.h"

namespace Sltk{
	namespace SDL{
		enum WindowFlag{
			WINDOW_FULLSCREEN = 0x00000001,         /**< fullscreen window */
			WINDOW_OPENGL = 0x00000002,             /**< window usable with OpenGL context */
			WINDOW_SHOWN = 0x00000004,              /**< window is visible */
			WINDOW_HIDDEN = 0x00000008,             /**< window is not visible */
			WINDOW_BORDERLESS = 0x00000010,         /**< no window decoration */
			WINDOW_RESIZABLE = 0x00000020,          /**< window can be resized */
			WINDOW_MINIMIZED = 0x00000040,          /**< window is minimized */
			WINDOW_MAXIMIZED = 0x00000080,          /**< window is maximized */
			WINDOW_INPUT_GRABBED = 0x00000100,      /**< window has grabbed input focus */
			WINDOW_INPUT_FOCUS = 0x00000200,        /**< window has input focus */
			WINDOW_MOUSE_FOCUS = 0x00000400,        /**< window has mouse focus */
			WINDOW_FOREIGN = 0x00000800,            /**< window not created by SDL */
			WINDOW_ALLOW_HIGHDPI = 0x00002000       /**< window should be created in high-DPI mode if supported */
		};
		
		/*** SDL_Windowラッパー ***/
		/* レンダラーにOpenGLを使って2D描画を行う場合，ウィンドウ作成後set2DViewを呼び出す */
		class Window: public Object {
		public:
			/* 入力状態 */
			u32 keyRepeatTime; // キーリピート判定時間[ms]（デフォルト：0.5秒）
			// キー押下状態(0:押されていない, 1:今押された, 2:押されている, 3:キーリピート)
			u8 key[285];
			u8 sendKey[285]; // キーエミュレーション用
			// マウスボタン押下状態(0:押されていない, 1:今押された, 2:押されている, 3:キーリピート)
			u8 mouse[3];
			u8 sendMouse[3]; // マウスボタンエミュレーション用
			// マウスホイール状態
			s32 mouseWheelX, mouseWheelY;
			// マウスカーソル位置
			s32 mouseX, mouseY;
			
			/* アクティブ化状態 */
			u8 activated; // 0:非アクティブ，1:非アクティブ化された，2:アクティブ，3:アクティブ化された
			
			/* コンストラクタ */
			// コンストラクタで背景色設定
			explicit Window(const Color &bg=Color(0,0,0)): Object(), window(0), renderer(0), keyRepeatTime(500), activated(0) {
				clearKeyStates();
				clearMouseStates();
				setBackgroundColor(bg);
			}
			~Window(){
				close();
			}
			
			// x, yに-1を指定すると中央に表示
			// flag: ウィンドウフラグ．描画エンジンに"opengl"を指定した場合，WINDOW_OPENGLは自動的に付加される
			// rendererName: 使用する描画エンジン。"direct3d","opengl","opengles2","software"など
			bool open(const string &title="SDL_Window", s32 x=-1, s32 y=-1, s32 w=640, s32 h=480,
				u32 flag=0, const string &rendererName="opengl");
			void close();
			
			/* 描画開始・終了 */
			// 描画開始時に入力状態も取得
			bool beginScene();
			void endScene();
			
			/* 明示的に入力状態を取得/クリアしたい場合に使用 */
			// キーボードの全入力状態を取得・格納(key[ID])
			void acquireKeyStates();
			// キーボードの全入力状態をクリア
			void clearKeyStates(){
				for(u32 i = 0; i < 285; ++i) key[i] = sendKey[i] = 0;
			}
			// マウスの全入力状態(ホイール以外)を取得・格納(mouse[ID], mouse***)
			void acquireMouseStates();
			// マウスの全入力状態をクリア
			void clearMouseStates(){
				for(u8 i = 0; i < 3; ++i) mouse[i] = sendMouse[i] = 0;
				mouseWheelX = mouseWheelY = 0, mouseX = mouseY = 0xffff; // カーソル位置は画面範囲外に
			}
			/************************************************/
			
			// マウスカーソルを指定位置に移動
			void warpMouse(s32 x, s32 y);
			
			// 背景色取得
			const Color &getBackgroundColor() const{return bgColor;}
			// サイズ取得
			u32 getWidth() const;
			u32 getHeight() const;
			// 位置取得
			s32 getX() const;
			s32 getY() const;
			// ID取得
			u32 getID() const;
			
			// 背景色設定
			void setBackgroundColor(const Color &bg){
				bgColor = bg; bgColor.alpha = 0; // alphaは0(透明)にしておく
			}
			// タイトル設定
			void setTitle(const string &title);
			// サイズ設定
			void setSize(s32 width, s32 height);
			// 位置設定
			void setPosition(s32 x, s32 y);
			// ウィンドウモード切り替え. (true: Window, false: Fullscreen)
			bool setWindowMode(bool flag);
			
			// アイコン設定
			// surf: loadImageなどで取得
			bool setIcon(u32 surf, bool release=true);
			
			const u32 &getHandle() const{return window;}
			const u32 &getRenderer() const{return renderer;}
			const u32 &getContext() const{return context;}
		private:
			u32		window, renderer;
			u32		context; // OpenGL用コンテキスト
			Color	bgColor; // 背景色
			u32 keyTimer[285]; // キーリピート判定用
			u32 mouseTimer[3]; // マウスリピート判定用
		};
		
		// WindowIDからWindowオブジェクト取得
		Window *getWindowFromID(u32 id);
		
		// Windowオブジェクトの数を取得
		u32 getWindowsCount();
		
		// 現在の描画対象ウィンドウを取得
		Window *getDrawingWindow();
		
		// 現在の描画レンダラーを取得
		inline u32 getDrawingRenderer(){
			Window *win = getDrawingWindow(); return win? win->getRenderer(): 0;
		}
		
		
		/*** FPS制御クラス ***/
		class FPSManager: public Object {
		public:
			/* デフォルトのFPS目標値は60 */
			explicit FPSManager(s32 FPS=60): err(0), cnt(0), currentFPS(0) {
				setFPS(FPS); start();
			}
			
			/* 一定化したいFPSの目標値を設定 */
			// 負値を与えるとCPUの限界パワーで回す
			void setFPS(s32 FPS){
				fps = FPS, idealSleep = (1000 << 16) / fps;
			}
			
			/* FPS制御タイマーを開始 */
			void start(){
				fpsTimer = getSystemTime();
				newTime = fpsTimer << 16;
			}
		    
			/* FPS一定化開始・終了 */
			// beginScene～endSceneの間でメイン描画を行う
			void beginScene();
			void endScene();
			
			const u32 &getFPS() const{ return currentFPS; }
		private:
			s32 err, fps, idealSleep, oldTime, newTime;
			u32 cnt, currentFPS, fpsTimer;
		};
		
		
		/*** ジョイスティック管理クラス ***/
		class Joystick: public Object {
		public:
			s32 xAxis, yAxis; // アナログスティック(十字ボタン)の傾き状態 (-32768 to 32767)
			u8  buttons[32];  // ボタンの入力状態 (0:押されていない, 1:今押された, 2:押されている)
			u8  crossButtons[4]; // 十字ボタンの入力状態 (0:押されていない, 1:今押された, 2:押されている)
		public:
			Joystick(): Object(), handle(0) {}
			explicit Joystick(u32 index): Object(), handle(0) {
				open(index);
			}
			~Joystick(){
				close();
			}
			
			// 利用可能なジョイスティックのうちindex番目のジョイスティックをopenする
			bool open(u32 index);
			void close();
			
			// ジョイスティックの入力状態を取得・格納
			void acquireInputStates();
			
			// ジョイスティック名
			string getName() const;
			// アナログスティックの軸の数
			u32 getAxisCount() const;
			// ボタンの数
			u32 getButtonCount() const;
		private:
			u32		handle;
		};
		
		// 利用可能なジョイスティックの数を取得
		u32 getJoystickCount();
		
		
		/*** 効果音・BGM再生クラス ***/
		class Mixer: public Object {
		public:
			Mixer(): Object(), sound(0) {}
			explicit Mixer(const void *buf, u32 size): Object(), sound(0) {
				open(buf, size);
			}
			~Mixer(){
				close();
			}
			
			// 音楽データを読み込む
			bool open(const void *buf, u32 size);
			void close();
			
			// 再生
			// channel: 使用するチャンネル。-1を指定すると空いているチャンネルを自動検索
			// loops: ループ回数。-1で無限ループ。0で一回のみ再生
			// ticks: 再生する時間(ミリ秒)。-1で時間制限なし
			bool play(s32 channel, s32 loops=0, s32 ticks=-1);
			
			// フェードイン再生
			// ms: フェード時間(ミリ秒)
			bool fadeIn(s32 channel, s32 loops, u32 ms, s32 ticks=-1);
			
			// 効果音の音量(0-128) 
			u32 setVolume(u32 vol); // 以前の音量が返る
			u32 getVolume() const;
		private:
			u32 sound;
		};
		
		// チャンネル数を設定する
		u32 allocateChannels(u32 num); // 確保されたチャンネル数が返る
		
		
		/*** 再生中チャンネルに対する操作。channelに-1を指定すると全チャンネル ***/
		// 音量設定・取得
		u32 setChannelVolume(s32 channel, u32 vol);
		u32 getChannelVolume(s32 channel);
		// 停止
		void stopChannel(s32 channel);
		void fadeOutChannel(s32 channel, u32 ms);
		// 一時停止・再開
		void pauseChannel(s32 channel);
		void resumeChannel(s32 channel);
		// 指定時間後(ミリ秒)に停止
		void expireChannel(s32 channel, u32 ms);
		// 再生中・停止中チェック
		bool isChannelPlaying(s32 channel);
		bool isChannelPaused(s32 channel);
		
		// チャンネル再生終了時に実行する関数を指定
		void setOnChannelFinishedFunction(void (*func)(s32 channel));
	}
}
