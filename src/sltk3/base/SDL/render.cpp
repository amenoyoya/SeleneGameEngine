#include "render.h"

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
		/*** class Font ***/
		bool Font::open(const string &fontname, u32 size){
			close();
			if(0 == (font = (u32)TTF_OpenFont(fontname.c_str(), size))){
				_state = FAILED;
				_message = "failed to create SDL_Font '" + fontname + "'";
				return false;
			}
			_state = ACTIVE;
			return true;
		}
		
		void Font::close(){
			_state = NONE;
			_message.clear();
			if(font){
				TTF_CloseFont((TTF_Font*)font);
				font = 0;
			}
		}
		
		void Font::setStyle(u8 style){
			TTF_SetFontStyle((TTF_Font*)font, style);
		}
		
		u32 Font::createSurface(const string &text){
			SDL_Color col = {255, 255, 255, 255};
			return (u32)TTF_RenderUTF8_Blended((TTF_Font*)font, text.c_str(), col);
		}
		
		u32 Font::getWidth(const string &text) const{
			int w = 0, h = 0;
			
			TTF_SizeUTF8((TTF_Font*)font, text.c_str(), &w, &h);
			return w;
		}
		
		u32 Font::getHeight() const{
			return TTF_FontHeight((TTF_Font*)font);
		}
		/*** end class Font ***/
		
		
		/*** class Texture ***/
		bool Texture::open(u32 w, u32 h, u8 type){
			SDL_Renderer *r = (SDL_Renderer*)getDrawingRenderer();
			if(!r){
				_state = FAILED;
				_message = "failed to create SDL_Texture: Renderer not exist";
				return false;
			}
			close();
			if(0 == (texture = (u32)SDL_CreateTexture(r, SDL_PIXELFORMAT_ARGB8888, type, width = w, height = h))
				&& setBlendMode(BLEND_ALPHA))
			{
				_state = FAILED;
				_message = "failed to create SDL_Texture";
				return false;
			}
			_state = ACTIVE;
			return setBlendMode(BLEND_ALPHA);
		}
		
		bool Texture::open(u32 surface, bool release){
			SDL_Renderer *r = (SDL_Renderer*)getDrawingRenderer();
			SDL_Surface *surf = (SDL_Surface*)surface;
			SDL_RendererInfo info;
			const SDL_PixelFormat *fmt;
			bool needAlpha = false;
			u32 format =0;
			
			if(!r){
				_state = FAILED;
				_message = "failed to create SDL_Texture: Renderer not exist";
				return false;
			}
			if(!surf){
				_state = FAILED;
				_message = "failed to create SDL_Texture: SDL_Surface is NULL";
				return false;
			}
			close();
			
			SDL_GetRendererInfo(r, &info);
			/* See what the best texture format is */
			fmt = surf->format;
			if(fmt->Amask || SDL_GetColorKey(surf, nullptr) == 0) needAlpha = true;
			format = info.texture_formats[0];
			for(u32 i = 0; i < info.num_texture_formats; ++i) {
				if(!SDL_ISPIXELFORMAT_FOURCC(info.texture_formats[i]) &&
					SDL_ISPIXELFORMAT_ALPHA(info.texture_formats[i]) == needAlpha)
				{
					format = info.texture_formats[i];
					break;
				}
			}
			if(0 == (texture = (u32)SDL_CreateTexture(r, format,
				SDL_TEXTUREACCESS_STATIC, width = surf->w, height = surf->h)))
			{
				_state = FAILED;
				_message = "failed to create SDL_Texture";
				return false;
			}
			if(format == surf->format->format){
				if(SDL_MUSTLOCK(surf)){
					SDL_LockSurface(surf);
					SDL_UpdateTexture((SDL_Texture*)texture, nullptr, surf->pixels, surf->pitch);
					SDL_UnlockSurface(surf);
				}else{
					SDL_UpdateTexture((SDL_Texture*)texture, nullptr, surf->pixels, surf->pitch);
				}
				// オリジナルピクセルデータを保持
				pxFormat = surf->format->BytesPerPixel;
				pxData = (u8*)malloc(surf->pitch * surf->h);
				memcpy(pxData, surf->pixels, surf->pitch * surf->h);
			}else{
				SDL_PixelFormat *dst_fmt = SDL_AllocFormat(format);
				SDL_Surface *temp = SDL_ConvertSurface(surf, dst_fmt, 0);
				/* Set up a destination surface for the texture update */
				SDL_FreeFormat(dst_fmt);
				if(temp){
					SDL_UpdateTexture((SDL_Texture*)texture, nullptr, temp->pixels, temp->pitch);
					// オリジナルピクセルデータを保持
					pxFormat = temp->format->BytesPerPixel;
					pxData = (u8*)malloc(temp->pitch * temp->h);
					memcpy(pxData, temp->pixels, temp->pitch * temp->h);
					SDL_FreeSurface(temp);
				}else{
					close();
					_state = FAILED;
					_message = "failed to create SDL_Texture: failed to convert SDL_Surface";
					return false;
				}
			}
			/* カラーキーなどの処理 */
			u8 R, G, B, A;
			SDL_BlendMode blendMode;
			
			SDL_GetSurfaceColorMod(surf, &R, &G, &B);
			setColor(R, G, B);
			SDL_GetSurfaceAlphaMod(surf, &A);
			setAlpha(A);
			if(SDL_GetColorKey(surf, nullptr) == 0){
				/* We converted to a texture with alpha format */
				setBlendMode(BLEND_ALPHA);
			}else{
				SDL_GetSurfaceBlendMode(surf, &blendMode);
				setBlendMode((u8)blendMode);
			}
			
			if(release) SDL::freeImage(surface);
			_state = ACTIVE;
			return setBlendMode(BLEND_ALPHA);
		}
		
		void Texture::close(){
			_state = NONE;
			_message.clear();
			if(pxData){
				free(pxData);
				pxData = nullptr;
			}
			if(texture){
				SDL_DestroyTexture((SDL_Texture*)texture);
				texture = 0;
			}
		}
		
		bool Texture::setBlendMode(u8 mode){
			return 0 == SDL_SetTextureBlendMode((SDL_Texture*)texture, (SDL_BlendMode)mode);
		}
		
		bool Texture::setColor(u8 r, u8 g, u8 b){
			return 0 == SDL_SetTextureColorMod((SDL_Texture*)texture, r, g, b);
		}
		
		bool Texture::setColor(const Color &color){
			return setColor(color.red, color.green, color.blue) && setAlpha(color.alpha);
		}
		
		bool Texture::setAlpha(u8 a){
			return 0 == SDL_SetTextureAlphaMod((SDL_Texture*)texture, a);
		}
		
		bool Texture::updatePixels(){
			return pxData? 0 == SDL_UpdateTexture((SDL_Texture*)texture, nullptr, pxData, width * pxFormat): false;
		}
		
		bool Texture::draw(s32 x, s32 y, s32 w, s32 h, s32 sx, s32 sy, s32 sw, s32 sh){
			if(w == -1) w = width;
			if(h == -1) h = height;
			
			SDL_Renderer *r = (SDL_Renderer*)getDrawingRenderer();
			SDL_Rect src = {sx, sy, sw == -1? width: sw, sh == -1? height: sh}, dest = {x, y, w, h};
			SDL_Point center = {centerX == -1? w/2: centerX, centerY == -1? h/2: centerY};
			return r? (0 == SDL_RenderCopyEx(r, (SDL_Texture*)texture, &src, &dest,
				angle, &center, (SDL_RendererFlip)flipMode)): false;
		}
		/*** end class Texture ***/
		
		
		namespace GL{
			/* 2D/3D切り替え */
			void set2DView(u32 width, u32 height) {
				glMatrixMode(GL_PROJECTION); // 射影変換行列設定
				glPushMatrix(); // 現在の射影変換行列を保存
				glOrtho(0, width, height, 0, -1, 1); // 正射影変換設定
				glMatrixMode(GL_MODELVIEW);// モデルビュー変換行列設定
				glPushMatrix(); // 現在のモデルビュー行列を保存
				glLoadIdentity(); // 単位行列を設定
			}
			void set3DView() {
				glMatrixMode(GL_PROJECTION); // 射影変換行列設定
				glPopMatrix(); // 射影変換行列を復元
				glMatrixMode(GL_MODELVIEW); // モデルビュー変換行列設定
				glPopMatrix(); // モデルビュー行列を復元
				glLoadIdentity(); // 単位行列を設定
			}
			
			/* プリミティブ描画 */
			void drawPrimitive(u8 type, s32 num, float vertices[], s32 colors[], s32 first, s32 count){
				glVertexPointer(2, GL_FLOAT, 0, vertices); // 頂点[x,y]配列のメモリアドレスの指定
				glColorPointer(4, GL_UNSIGNED_BYTE, 0, colors); // カラー[RGBA]配列のメモリアドレスの指定
				glDrawArrays(type, first, count == -1? num: count);
			}
			
			// 三角形描画
			void drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, const Color &color){
				float vertices[] = {
					x1, y1,
					x2, y2,
					x3, y3,
				};
				u8 colors[] = {
					color.red, color.green, color.blue, color.alpha,
					color.red, color.green, color.blue, color.alpha,
					color.red, color.green, color.blue, color.alpha,
				};
				drawPrimitive(LINES, 3, vertices, (s32*)colors);
			}
			
			// 三角形塗りつぶし
			void fillTriangle(float x1, float y1, float x2, float y2, float x3, float y3, const Color &color){
				float vertices[] = {
					x1, y1,
					x2, y2,
					x3, y3,
				};
				u8 colors[] = {
					color.red, color.green, color.blue, color.alpha,
					color.red, color.green, color.blue, color.alpha,
					color.red, color.green, color.blue, color.alpha,
				};
				drawPrimitive(TRIANGLES, 3, vertices, (s32*)colors);
			}
			
			// 円描画
			void drawCircle(float x, float y, float radius, const Color &color){
				for(float th1 = 0.0f; th1 <= 360.0f; th1 = th1 + 1.0f){
					float th2 = th1 + 10.0f;
					float th1_rad = th1 / 180.0f * 3.1415926f;
					float th2_rad = th2 / 180.0f * 3.1415926f;
					float vertices[] = {
						x + radius * cos(th1_rad), y + radius * sin(th1_rad),
						x + radius * cos(th2_rad), y + radius * sin(th2_rad),
					};
					u8 colors[] = {
						color.red, color.green, color.blue, color.alpha,
						color.red, color.green, color.blue, color.alpha,
					};
					drawPrimitive(LINES, 2, vertices, (s32*)colors);
				}
			}
			
			// 円塗りつぶし
			void fillCircle(float x, float y, float radius, const Color &color){
				for(float th1 = 0.0f; th1 <= 360.0f; th1 = th1 + 1.0f){
					float th2 = th1 + 10.0f;
					float th1_rad = th1 / 180.0f * 3.1415926f;
					float th2_rad = th2 / 180.0f * 3.1415926f;
					float vertices[] = {
						x, y,
						x + radius * cos(th1_rad), y + radius * sin(th1_rad),
						x + radius * cos(th2_rad), y + radius * sin(th2_rad),
					};
					u8 colors[] = {
						color.red, color.green, color.blue, color.alpha,
						color.red, color.green, color.blue, color.alpha,
						color.red, color.green, color.blue, color.alpha,
					};
					drawPrimitive(TRIANGLES, 3, vertices, (s32*)colors);
				}
			}
			
			// 楕円描画
			void drawOval(float x, float y, float radius_x, float radius_y, const Color &color){
				for(float th1 = 0.0f; th1 <= 360.0f; th1 = th1 + 1.0f){
					float th2 = th1 + 10.0f;
					float th1_rad = th1 / 180.0f * 3.1415926f;
					float th2_rad = th2 / 180.0f * 3.1415926f;
					float vertices[] = {
						x + radius_x * cos(th1_rad), y + radius_y * sin(th1_rad),
						x + radius_x * cos(th2_rad), y + radius_y * sin(th2_rad),
					};
					u8 colors[] = {
						color.red, color.green, color.blue, color.alpha,
						color.red, color.green, color.blue, color.alpha,
					};
					drawPrimitive(LINES, 2, vertices, (s32*)colors);
				}
			}
			
			// 楕円塗りつぶし
			void fillOval(float x, float y, float radius_x, float radius_y, const Color &color){
				for(float th1 = 0.0f; th1 <= 360.0f; th1 = th1 + 1.0f){
					float th2 = th1 + 10.0f;
					float th1_rad = th1 / 180.0f * 3.1415926f;
					float th2_rad = th2 / 180.0f * 3.1415926f;
					float vertices[] = {
						x, y,
						x + radius_x * cos(th1_rad), y + radius_y * sin(th1_rad),
						x + radius_x * cos(th2_rad), y + radius_y * sin(th2_rad),
					};
					u8 colors[] = {
						color.red, color.green, color.blue, color.alpha,
						color.red, color.green, color.blue, color.alpha,
						color.red, color.green, color.blue, color.alpha,
					};
					drawPrimitive(TRIANGLES, 3, vertices, (s32*)colors);
				}
			}
		}
	}
}
