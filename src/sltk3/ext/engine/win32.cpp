#include "win32.h"
#include "tolua/module_win32.cpp"

namespace Sltk{
	namespace Engine{
		/* Sltk::Win32::Window用コールバック関数設定メソッド */
		// setWindowProcedure(callback = (hwnd, msg, wparam, lparam)->boolean)
		static int setWindowProcedure(lua_State *L){
			Lua lua(L);
			tolua_Error tolua_err;
			if(!tolua_isusertype(lua, 1, "Sltk::Win32::Window", 0, &tolua_err)){
				tolua_error(lua, "#ferror in function 'setWindowProcedure'.", &tolua_err);
				return 0;
			}
			
			Win32::Window *self = (Win32::Window*)tolua_tousertype(lua, 1, 0);
			
			lua.setTop(2);
			s32 func = lua.store();
			
			self->procedure = [L, func](u32 hwnd, u32 msg, u32 wp, u32 lp)->bool{
				Lua lua(L);
				lua.getStoredValue(func);
				if(lua.getType(-1) == Lua::T_FUNCTION){
					lua.pushNumber(hwnd);
					lua.pushNumber(msg);
					lua.pushNumber(wp);
					lua.pushNumber(lp);
					if(!lua.call(4, 1)){
						lua.error(getMessage(&lua));
						return false;
					}
					bool ret = lua.getBoolean(-1);
					lua.setTop(0);
					return ret;
				}
				return true;
			};
			return 0;
		}
		
		/* Sltk::Win32::Browser用コールバック関数設定メソッド */
		// setBrowserFunction(mode, callback)
		// @"beforeNavigate" mode: callback(url)->boolean
		// @"documentComplete" mode: callback(url)->void
		static int setBrowserFunction(lua_State *L){
			Lua lua(L);
			tolua_Error tolua_err;
			if(!tolua_isusertype(lua, 1, "Sltk::Win32::Browser", 0, &tolua_err)
				|| !tolua_isstring(lua, 2, 0, &tolua_err))
			{
				tolua_error(lua, "#ferror in function 'setBrowserFunction'.", &tolua_err);
				return 0;
			}
			
			Win32::Browser *self = (Win32::Browser*)tolua_tousertype(lua, 1, 0);
			string mode = lua.getString(2);
			if(!self){
				tolua_error(lua, "invalid 'self' in function 'setBrowserFunction'", nullptr);
				return 0;
			}
			
			lua.setTop(3);
			s32 func = lua.store();
			
			if(mode == "beforeNavigate"){
				self->beforeNavigateFunction = [L, func](const string &url)->bool{
					Lua lua(L);
					lua.getStoredValue(func);
					if(lua.getType(-1) == Lua::T_FUNCTION){
						lua.pushString(url);
						if(!lua.call(1, 1)){
							lua.error(getMessage(&lua));
							return false;
						}
						bool ret = lua.getBoolean(-1);
						lua.setTop(0);
						return ret;
					}
					return true;
				};
			}/*else if(mode == "navigateComplete"){
				self->navigateCompleteFunction = [L, func](const string &url)->void{
					Lua lua(L);
					lua.getStoredValue(func);
					if(lua.getType(-1) == Lua::T_FUNCTION){
						lua.pushString(url);
						if(!lua.call(1, 0)) lua.error(getMessage(&lua));
					}
				};
			}*/else if(mode == "documentComplete"){
				self->documentCompleteFunction = [L, func](const string &url)->void{
					Lua lua(L);
					lua.getStoredValue(func);
					if(lua.getType(-1) == Lua::T_FUNCTION){
						lua.pushString(url);
						if(!lua.call(1, 0)) lua.error(getMessage(&lua));
					}
				};
			}else if(mode == "newWindow"){
				self->newWindowFunction = [L, func](const string &url)->bool{
					Lua lua(L);
					lua.getStoredValue(func);
					if(lua.getType(-1) == Lua::T_FUNCTION){
						lua.pushString(url);
						if(!lua.call(1, 1)){
							lua.error(getMessage(&lua));
							return false;
						}
						bool ret = lua.getBoolean(-1);
						lua.setTop(0);
						return ret;
					}
					return true;
				};
			}
			return 0;
		}
		
		/* SeleneTalk/Win32ライブラリ */
		static u8 win32_lib_code[] = {
			#include "corelib/Win32.cpp"
		};
		
		/* Win32ライブラリを登録 */
		void registerWin32Library(Lua *pLua){
			tolua_libSLTK_win32_open(*pLua);
			/* Sltk::Win32::Windowクラスメソッド追加登録 */
			pLua->getGlobal("Sltk");
			pLua->getField(-1, "Win32");
			pLua->pushCFunction(setWindowProcedure);
			pLua->setField(-2, "setWindowProcedure");
			/* Sltk::Win32::Browserクラスメソッド追加登録 */
			pLua->pushCFunction(setBrowserFunction);
			pLua->setField(-2, "setBrowserFunction");
			pLua->setTop(0);
			/* SeleneTalk/Win32ライブラリ登録 */
			pLua->doBuffer(win32_lib_code, sizeof(win32_lib_code));
		}
	}
}
