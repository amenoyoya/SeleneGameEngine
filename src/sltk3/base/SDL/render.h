#pragma once

/*** 描画関数群 ***/

#include "core.h"

namespace Sltk{
	namespace SDL{
		/*** Fontクラス ***/
		class Font: public Object {
		public:
			Font(): Object(), font(0) {}
			explicit Font(const string &fontname, u32 size): Object(), font(0) {
				open(fontname, size);
			}
			~Font(){
				close();
			}
			
			bool open(const string &fontname, u32 size);
			void close();
			
			void setStyle(u8 style);
			
			// SDL_Surfaceを作成
			u32 createSurface(const string &text);
			
			u32 getWidth(const string &text) const;
			u32 getHeight() const;
		private:
			u32 font;
		};
		
		
		/*** テクスチャ ***/
		class Texture: public Object {
		public:
			s32			 centerX, centerY;	// 回転中心(-1指定で サイズ/2 を中心に)
			double		 angle;				// 角度(°単位：360で一回転)
			u8			 flipMode;			// 反転モード(0: 通常、1: 水平反転、2: 垂直反転)
		public:
			Texture(): Object(), texture(0), width(0), height(0),
				angle(0.0), centerX(-1), centerY(-1), flipMode(0), pxFormat(0), pxData(nullptr) {}
			explicit Texture(u32 w, u32 h, u8 type=TEXTURE_STREAMING)
				: Object(), texture(0), width(0), height(0), angle(0.0), centerX(-1), centerY(-1), flipMode(0), pxFormat(0), pxData(nullptr)
			{
				open(w, h, type);
			}
			explicit Texture(u32 surface, bool release)
				: Object(), texture(0), angle(0.0), width(0), height(0), centerX(-1), centerY(-1), flipMode(0), pxFormat(0), pxData(nullptr)
			{
				open(surface, release);
			}
			~Texture(){
				close();
			}
			
			bool open(u32 w, u32 h, u8 type=TEXTURE_STREAMING);
			// SDL_Surfaceからテクスチャを作成
			// release: trueなら渡されたSDL_Surfaceを自動的に(Texture::close時)解放
			bool open(u32 surface, bool release);
			void close();
			
			// ブレンディング
			bool setBlendMode(u8 mode=BLEND_ALPHA);
			// 色設定
			bool setColor(u8 r, u8 g, u8 b);
			bool setColor(const Color &color);
			bool setAlpha(u8 a);
			
			// ピクセルデータ
			const u8 &getFormat() const{return pxFormat;}
			u8 *getPixels(){return pxData;}
			// getPixels()で取得・設定したピクセルデータをテクスチャに反映
			bool updatePixels();
			
			// 描画(w, hに-1を指定すると原寸大)
			bool draw(s32 x, s32 y, s32 w=-1, s32 h=-1, s32 sx=0, s32 sy=0, s32 sw=-1, s32 sh=-1);
			
			const u32 &getHandle() const{return texture;}
			const u32 &getWidth() const{return width;}
			const u32 &getHeight() const{return height;}
		private:
			u32 texture;
			u32 width, height; // サイズ
			
			/* ピクセルデータ */
			u8  pxFormat; // RGBかRGBAか(3 or 4)
			u8 *pxData;
		};
		
		
		namespace GL{
			/*** 2D/3D切り替え ***/
			void set2DView(u32 width, u32 height);
			void set3DView();
			
			/*** OpenGLプリミティブ描画 ***/
			// プリミティブ種類
			enum PrimitiveType{
				POINTS, LINES, LINE_LOOP, LINE_STRIP,
				TRIANGLES, TRIANGLE_STRIP, TRIANGLE_FAN,
				QUADS, QUAD_STRIP, POLYGON
			};
			
			// プリミティブ描画
			// type: プリミティブの種類, num: vertex, color配列のサイズを指定
			// vertices: 頂点位置(x,y)を指定, colors: RGBAを0-255で指定
			// first[=0]: 描画する頂点情報配列の開始インデックスを指定
			// count[=-1]: 描画する頂点情報配列のサイズを指定(-1の場合numと同値)
			void drawPrimitive(u8 type, s32 num, float vertices[], s32 colors[], s32 first=0, s32 count=-1);
			
			// 三角形描画
			void drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, const Color &color);
			// 三角形塗りつぶし
			void fillTriangle(float x1, float y1, float x2, float y2, float x3, float y3, const Color &color);
			
			// 円描画
			// x,y: 中心座標, radius: 半径
			void drawCircle(float x, float y, float radius, const Color &color);
			// 円塗りつぶし
			void fillCircle(float x, float y, float radius, const Color &color);
			
			// 楕円描画
			// x,y: 中心座標
			// radius_x: x方向の半径, radius_y: y方向の半径
			void drawOval(float x, float y, float radius_x, float radius_y, const Color &color);
			// 楕円塗りつぶし
			void fillOval(float x, float y, float radius_x, float radius_y, const Color &color);
		}
	}
}
