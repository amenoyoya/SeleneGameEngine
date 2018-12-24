#pragma once

#include "types.h"

namespace Sltk{
	namespace SDL{
		#ifdef _DESKTOP_APP
			/* SDL開始・終了処理 */
			bool open();
			void close();
		#endif
		
		// SDLエラーメッセージ取得
		string getMessage();
		
		// レンダラードライバー数
		u32 getRendererDriverCount();
		
		// レンダラードライバー名
		string getRendererDriverName(u32 index);
		string getRendererName(u32 handle); // レンダラーハンドルから取得
		
		// 現在の描画対象スクリーンの描画色を設定
		bool setColor(const Color &color);
		
		// 現在の描画対象スクリーンをクリア
		bool clearScreen();
		
		// ブレンドモード変更
		bool setBlendMode(u8 mode=BLEND_ALPHA);
		
		
		/*** イベント処理 ***/
		// デフォルトイベントプロシージャ
		// ×ボタンでの終了処理、マウスホイール処理など
		bool defaultEventProcedure(Event *ev);
		
		// whileループで使用。ウィンドウイベント処理
		bool pollEvent(Event *ev);
		bool pollEvent(bool (*eventProc)(Event *ev) = defaultEventProcedure);
		
		// イベントを発生させる
		bool pushEvent(Event *ev);
		
		/* マウスカーソル可視設定 */
		void showCursor(bool visible=true);
		
		
		/** TextInput関連 **/
		void startTextInput();
		bool isTextInputActive();
		void stopTextInput();
		
		
		/*** クリップボード関連 ***/
		bool setClipboardText(const string &text);
		string getClipboardText();
		bool hasClipboardText();
		
		
		/*** 画像関連 ***/
		// SDL_Surface解放
		void freeImage(u32 surf);
		
		// 画像ファイル(データ)からSDL_Surface作成
		// colorKey: 指定された場合、その色を透過色とする(BMPを透過したいときなど)
		u32 loadImage(const void *data, u32 size, const Color *colorKey=nullptr);
		
		// RGBデータからSDL_Surface作成
		// alpha: trueならRGBAデータを使用
		u32 createImage(const void *data, u32 w, u32 h, bool alpha=false);
		
		// SDL_Surfaceを画像として保存
		// release: trueなら渡されたSDL_Surfaceを自動的に解放
		bool saveImage(u32 surface, const string &filename, u8 type=SAVE_BMP, bool release=true);
		
		
		/* SDL_Surfaceの情報を取得 */
		// 幅
		u32 getImageWidth(u32 surface);
		// 高さ
		u32 getImageHeight(u32 surface);
		// ピクセルデータ1行分のバイト数
		u32 getImagePitch(u32 surface);
		// ピクセルデータ
		void *getImagePixels(u32 surface);
		
		
		// "TEXTURE_TARGET"タイプで生成したテクスチャを描画対象にする
		// nullptrを指定すると裏画面が描画対象
		class Texture;
		bool setRenderTarget(Texture *texture=nullptr);
		
		// 描画対象スクリーンのピクセル(RGB)取得
		// destは w * h * 3 のサイズが必要
		bool readPixels(void *dest, u32 x, u32 y, u32 w, u32 h);
		Color getPixel(u32 x, u32 y);
		
		
		/*** 図形描画 ***/
		// 点描画
		bool drawPixel(s32 x, s32 y, const Color &color);
		// 線描画
		bool drawLine(s32 x1, s32 y1, s32 x2, s32 y2, const Color &color);
		// 矩形描画
		bool drawRectangle(s32 x, s32 y, s32 w, s32 h, const Color &color);
		// 矩形塗りつぶし
		bool fillRectangle(s32 x, s32 y, s32 w, s32 h, const Color &color);
	}
}
