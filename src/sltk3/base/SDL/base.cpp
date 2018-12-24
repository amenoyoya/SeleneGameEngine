#include "render.h"

#ifdef _DESKTOP_APP
	#define SDL_MAIN_HANDLED // デスクトップ環境ならSDLのmain関数は使わない
#endif

#include <SDL.h>
#include <SDL_opengl.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

namespace Sltk{
	namespace SDL{
		static bool renderTarget = false;   // テクスチャが描画対象になっているか
		static u32  renderTargetHeight = 0; // 描画対象テクスチャの高さ
		
		/*** SDLエンジン ***/
		#ifdef _DESKTOP_APP
			bool open(){
				SDL_SetMainReady();
				return SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO|SDL_INIT_JOYSTICK) == 0
					&& Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, 2, 1024) == 0 && TTF_Init() == 0;
			}
			
			void close(){
				SDL_Quit();
			}
		#endif
		
		string getMessage(){
			return SDL_GetError();
		}
		
		u32 getRendererDriverCount(){
			return SDL_GetNumRenderDrivers();
		}
		
		string getRendererDriverName(u32 index){
			SDL_RendererInfo info;
			if(0 == SDL_GetRenderDriverInfo(index, &info)) return info.name;
			return "?";
		}
		
		string getRendererName(u32 handle){
			SDL_RendererInfo info;
			if(0 == SDL_GetRendererInfo((SDL_Renderer*)handle, &info)) return info.name;
			return "?";
		}
		
		
		bool setColor(const Color &color){
			SDL_Renderer *r = (SDL_Renderer*)getDrawingRenderer();
			if(r) return 0 == SDL_SetRenderDrawColor(r, color.red, color.green, color.blue, color.alpha);
			return false;
		}
		
		bool clearScreen(){
			Window *win = getDrawingWindow();
			
			if(!win) return false;
			if(win->getContext()){ // OpenGL用スクリーンクリア
				const Color &bg = win->getBackgroundColor();
				glClearColor(bg.red / 255.0f, bg.green / 255.0f, bg.blue / 255.0f, bg.alpha / 255.0f);
				glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
				return true;
			}
			// テクスチャが描画対象なら透明色，そうでないならウィンドウの背景色でクリア
			return setColor(renderTarget? Color(0,0,0,0): win->getBackgroundColor())
				&& 0 == SDL_RenderClear((SDL_Renderer*)win->getRenderer());
		}
		
		bool setBlendMode(u8 mode){
			SDL_Renderer *r = (SDL_Renderer*)getDrawingRenderer();
			if(r) return 0 == SDL_SetRenderDrawBlendMode(r, (SDL_BlendMode)mode);
			return false;
		}
		
		
		bool defaultEventProcedure(Event *ev){
			Window *win = getWindowFromID(ev->window.windowID);
			if(win) win->mouseWheelX = 0, win->mouseWheelY = 0; // マウスホイール量をクリアしておく
			
			switch(ev->type){
			case QUIT: // 終了イベント
				return false;
			case MOUSEWHEEL: // マウスホイール量を取得
				if(win) win->mouseWheelX = ev->wheel.x, win->mouseWheelY = -ev->wheel.y;
				break;
			case WINDOWEVENT: // 各ウィンドウ毎のイベント
				if(win){ // ウィンドウ状態を「(非)アクティブ化」から「(非)アクティブ状態」に
					if(win->activated % 2 == 1) --win->activated;
				}
				switch(ev->window.event){
				case WINDOWEVENT_CLOSE:
					// 存在するウィンドウが2つ以上あるならウィンドウを閉じるだけ（終了しない）
					if(getWindowsCount() > 1){
						Window *win = getWindowFromID(ev->window.windowID);
						if(win) win->close();
					}
					break;
				case WINDOWEVENT_FOCUS_GAINED:
					if(win){
						Event event;
						
						win->activated = 3; // アクティブ化
						event.type = WINDOWEVENT;
						event.window.event = WINDOWEVENT_ENTER;
						event.window.windowID = ev->window.windowID;
						pushEvent(&event);
					}
					break;
				case WINDOWEVENT_FOCUS_LOST:
					if(win){
						Event event;
						
						win->activated = 1; // 非アクティブ化
						event.type = WINDOWEVENT;
						event.window.event = WINDOWEVENT_LEAVE;
						event.window.windowID = ev->window.windowID;
						pushEvent(&event);
					}
					break;
				}
			}
			return true;
		}
		
		bool pollEvent(Event *ev){
			return 0 != SDL_PollEvent((SDL_Event*)ev);
		}
		
		bool pollEvent(bool (*eventProc)(Event *ev)){
			Event ev;
			if(pollEvent(&ev) && eventProc && !eventProc(&ev)) return false;
			return true;
		}
		
		bool pushEvent(Event *ev){
			return 0 == SDL_PushEvent((SDL_Event*)ev);
		}
		
		void showCursor(bool visible){
			SDL_ShowCursor(visible);
		}
		
		void startTextInput(){
			SDL_StartTextInput();
		}
		
		bool isTextInputActive(){
			return SDL_TRUE == SDL_IsTextInputActive();
		}
		
		void stopTextInput(){
			SDL_StopTextInput();
		}
		
		bool setClipboardText(const string &text){
			return 0 == SDL_SetClipboardText(text.c_str());
		}
		
		string getClipboardText(){
			char *str = SDL_GetClipboardText();
			if(str){
				string ret = str;
				SDL_free(str);
				return ret;
			}
			return "";
		}
		
		bool hasClipboardText(){
			return SDL_TRUE == SDL_HasClipboardText();
		}
		
		
		void freeImage(u32 surf){
			if(surf) SDL_FreeSurface((SDL_Surface*)surf);
		}
		
		u32 loadImage(const void *data, u32 size, const Color *colorKey){
			SDL_Surface *ret = IMG_Load_RW(SDL_RWFromMem((void*)data, size), 1);
			
			if(ret && colorKey){
				SDL_SetColorKey(ret, SDL_RLEACCEL, SDL_MapRGB(ret->format,
					colorKey->red, colorKey->green, colorKey->blue));
			}
			return (u32)ret;
		}
		
		u32 createImage(const void *data, u32 w, u32 h, bool alpha){
			SDL_Surface *image = SDL_CreateRGBSurface(SDL_SWSURFACE, w, h, alpha? 32: 24,
				#if SDL_BYTEORDER == SDL_LIL_ENDIAN
					0x000000FF, 0x0000FF00, 0x00FF0000, 0xFF000000
				#else
					0xFF000000, 0x00FF0000, 0x0000FF00, 0x000000FF
				#endif
			);
			if(image){
				SDL_LockSurface(image);
				memcpy((u8*)image->pixels, (u8*)data, w * h * (alpha? 4: 3));
				SDL_UnlockSurface(image);
			}
			return (u32)image;
		}
		
		bool saveImage(u32 surface, const string &filename, u8 type, bool release){
			bool ret = false;
			
			if(surface == 0) return false;
			if(type == SAVE_BMP) ret = (0 == SDL_SaveBMP((SDL_Surface*)surface, filename.c_str()));
			else ret = (0 == IMG_SavePNG((SDL_Surface*)surface, filename.c_str()));
			if(release) freeImage(surface);
			return ret;
		}
		
		u32 getImageWidth(u32 surface){
			return surface? ((SDL_Surface*)surface)->w: 0;
		}
		
		u32 getImageHeight(u32 surface){
			return surface? ((SDL_Surface*)surface)->h: 0;
		}
		
		u32 getImagePitch(u32 surface){
			return surface? ((SDL_Surface*)surface)->pitch: 0;
		}
		
		void *getImagePixels(u32 surface){
			return surface? ((SDL_Surface*)surface)->pixels: nullptr;
		}
		
		
		bool setRenderTarget(Texture *texture){
			SDL_Renderer *r = (SDL_Renderer*)getDrawingRenderer();
			SDL_Texture *tex = texture? (SDL_Texture*)texture->getHandle(): nullptr;
			bool ret = (r? 0 == SDL_SetRenderTarget(r, tex): false);
			
			if(ret){
				if(tex){
					renderTarget = true;
					renderTargetHeight = texture->getHeight();
				}else{
					renderTarget = false;
				}
			}
			return ret;
		}
		
		inline void swap(u8 &a, u8 &b){
			u8 temp = a; a = b, b = temp;
		}
		
		bool readPixels(void *dest, u32 x, u32 y, u32 w, u32 h){
			Window *win = getDrawingWindow();
			SDL_Renderer *r = (SDL_Renderer*)getDrawingRenderer();
			
			if(!win || !r) return false;
			if(renderTarget && strncmp(getRendererName(win->getHandle()).c_str(), "opengl", 6) == 0){
				// テクスチャに対するreadPixelsでopenglの場合、上下反転
				SDL_Rect rect = {x, renderTargetHeight - (y + h), w, h};
				if(0 != SDL_RenderReadPixels(r, &rect, SDL_PIXELFORMAT_RGB24, dest, w * 3)) return false;
				// 上下反転
				u8 *bits = (u8*)dest;
				for(u32 y = 0; y < h/2; ++y){
					u32 yu = y, yb = h - y - 1;
					for(u32 x = 0 ; x < w; ++x){
						for(u8 i = 0 ; i < 3; ++i){
							u32 iu = ( x + yu * w ) * 3 + i,  ib = ( x + yb * w ) * 3 + i;
							swap(bits[iu] , bits[ib]);
						}
					}
				}
				return true;
			}else{ // 通常readPixels
				SDL_Rect rect = {x, y, w, h};
				return 0 == SDL_RenderReadPixels(r, &rect, SDL_PIXELFORMAT_RGB24, dest, w * 3);
			}
		}
		
		Color getPixel(u32 x, u32 y){
			u8 pixel[3] = {};
			readPixels(pixel, x, y, 1, 1);
			return Color(pixel[0], pixel[1], pixel[2]);
		}
		
		
		bool drawPixel(s32 x, s32 y, const Color &color){
			SDL_Renderer *r = (SDL_Renderer*)getDrawingRenderer();
			return r? setColor(color) && 0 == SDL_RenderDrawPoint(r, x, y): false;
		}
		
		bool drawLine(s32 x1, s32 y1, s32 x2, s32 y2, const Color &color){
			SDL_Renderer *r = (SDL_Renderer*)getDrawingRenderer();
			return r? setColor(color) && 0 == SDL_RenderDrawLine(r, x1, y1, x2, y2): false;
		}
		
		bool drawRectangle(s32 x, s32 y, s32 w, s32 h, const Color &color){
			SDL_Renderer *r = (SDL_Renderer*)getDrawingRenderer();
			SDL_Rect rect = {x, y, w, h};
			return r? setColor(color) && 0 == SDL_RenderDrawRect(r, &rect): false;
		}
		
		bool fillRectangle(s32 x, s32 y, s32 w, s32 h, const Color &color){
			SDL_Renderer *r = (SDL_Renderer*)getDrawingRenderer();
			SDL_Rect rect = {x, y, w, h};
			return r? setColor(color) && 0 == SDL_RenderFillRect(r, &rect): false;
		}
	}
}
