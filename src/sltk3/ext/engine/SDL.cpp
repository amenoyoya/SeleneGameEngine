#include "SDL.h"
#include "tolua/module_SDL.cpp"

namespace Sltk{
	namespace Engine{
		/* Sltk::SDL::open, close for Lua */
		#ifdef _DESKTOP_APP
			inline int SDL_open(lua_State *L){
				Lua lua(L);
				lua.pushBoolean(SDL::open());
				return 1;
			}
			
			inline int SDL_close(lua_State *L){
				SDL::close();
				return 0;
			}
		#endif
		
		/* Sltk::SDL::pollEvent for Lua */
		static int pollEvent(lua_State *L){
			Lua lua(L);
			if(lua.getType(-1) != Lua::T_FUNCTION){
				lua.pushBoolean(SDL::pollEvent(SDL::defaultEventProcedure));
				return 1;
			}
			
			SDL::Event ev;
			if(SDL::pollEvent(&ev)){
				tolua_pushusertype(lua, &ev, "Sltk::SDL::Event");
				if(!lua.call(1, 1)){
					return lua.error(getMessage(&lua));
				}
				return 1;
			}
			lua.pushBoolean(true);
			return 1;
		}
		
		/*** Sltk::SDL::setOnChannelFinishedFunction for Lua ***/
		static lua_State	*_pLua;
		static s32			 _chFinFunc;
		
		static void onChannelFinished(s32 ch){
			Lua lua(_pLua);
			lua.getStoredValue(_chFinFunc);
			if(!lua.call(1, 0)) lua.error(getMessage(&lua));
		}
		
		static int setOnChannelFinishedFunction(lua_State *L){
			Lua lua(_pLua = L);
			if(lua.getType(-1) != Lua::T_FUNCTION) return 0;
			_chFinFunc = lua.store();
			SDL::setOnChannelFinishedFunction(onChannelFinished);
			return 0;
		}
		
		/*** SDL native API ***/
		#ifdef _WINDOWS
			// SDL::Window -> HWND
			static int getNativeWindowHandle(lua_State *L){
				Lua lua(L);
				tolua_Error tolua_err;
				if(!tolua_isusertype(lua, 1, "Sltk::SDL::Window", 0, &tolua_err)){
					tolua_error(lua, "#ferror in function 'getNativeWindowHandle'.", &tolua_err);
					return 0;
				}
				
				SDL::Window *win = (SDL::Window*)tolua_tousertype(lua, 1, 0);
				if(!win){
					lua.pushNumber(0);
					return 1;
				}
				lua.pushNumber(SDL::getNativeWindowHandle(win));
				return 1;
			}
			
			// IME ON/OFF 状態取得
			static int getImmOpenStatus(lua_State *L){
				Lua lua(L);
				
				if(lua.getType(1) == Lua::T_NUMBER){
					lua.pushBoolean(FALSE != ImmGetOpenStatus(ImmGetContext((HWND)lua.getInteger(1))));
				}else{
					lua.pushNil();
				}
				return 1;
			}
		#endif
		
		/* デフォルトエラーハンドラー */
		static int defErrorHandler(lua_State *L){
			string msg = lua_tostring(L, 1);
			
			SDL::close();
			#ifdef _WINDOWS
				MessageBox(nullptr, Encoding::utf8ToWideString(msg).c_str(), L"Script Error", MB_OK|MB_ICONWARNING);
			#else
				Console::setAttribute(Console::RED, Console::BLACK, true, true);
				Console::writeLine(msg);
				Console::setAttribute();
			#endif
			return 0;
		}
		
		/* SeleneTalk/SDLライブラリ */
		static u8 sdl_lib_code[] = {
			#include "corelib/SDL.cpp"
		};
		
		void registerSDLLibrary(Lua *pLua){
			tolua_libSLTK_SDL_open(*pLua);
			/* Sltk::SDLライブラリ追加登録 */
			pLua->getGlobal("Sltk");
			pLua->getField(-1, "SDL");
			pLua->pushCFunction(pollEvent);
			pLua->setField(-2, "pollEvent");
			pLua->pushCFunction(setOnChannelFinishedFunction);
			pLua->setField(-2, "setOnChannelFinishedFunction");
			#ifdef _DESKTOP_APP
				pLua->pushCFunction(SDL_open);
				pLua->setField(-2, "open");
				pLua->pushCFunction(SDL_close);
				pLua->setField(-2, "close");
			#endif
			#ifdef _WINDOWS
				pLua->pushCFunction(getNativeWindowHandle);
				pLua->setField(-2, "getNativeWindowHandle");
				pLua->pushCFunction(getImmOpenStatus);
				pLua->setField(-2, "getImmOpenStatus");
			#endif
			pLua->setTop(0);
			// デフォルトエラーハンドラー設定
			setErrorHandler(defErrorHandler);
			/* SeleneTalk/SDLライブラリ登録 */
			pLua->doBuffer(sdl_lib_code, sizeof(sdl_lib_code));
		}
	}
}
