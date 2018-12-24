#define _UseToLua
#include <sltk3/ext/lua.h>
#include <sltk3/ext/curl.h>
#include "tolua/module_Curl.cpp"

using namespace Sltk;

/* Curl用コールバック関数定義 */
static int setCurlFunction(lua_State *L){
	Lua lua(L);
	tolua_Error tolua_err;
	if(!tolua_isusertype(lua, 1, "Sltk::Curl", 0, &tolua_err)
		|| !tolua_isstring(lua, 2, 0, &tolua_err))
	{
		tolua_error(lua, "#ferror in function 'setCurlFunction'.", &tolua_err);
		return 0;
	}
	
	Curl *self = (Curl*)tolua_tousertype(lua, 1, 0);
	string mode = lua.getString(2);
	if(!self){
		tolua_error(lua, "invalid 'self' in function 'setCurlFunction'", nullptr);
		return 0;
	}
	
	lua.setTop(3);
	s32 func = lua.store();
	
	if(mode == "get"){
		self->getFunction = [L, func](void *data, u32 size, u32 byte)->u32{
			Lua lua(L);
			lua.getStoredValue(func);
			if(lua.getType(-1) == Lua::T_FUNCTION){
				tolua_pushuserdata(lua, data);
				tolua_pushnumber(lua, size);
				tolua_pushnumber(lua, byte);
				if(!lua.call(3, 1)){
					lua.error(getMessage(&lua));
					return 0;
				}
				size_t ret = lua.getInteger(-1);
				lua.setTop(0);
				return ret;
			}
			return size * byte;
		};
	}else if(mode == "post"){
		self->postFunction = [L, func](void *data, u32 size, u32 byte)->u32{
			Lua lua(L);
			lua.getStoredValue(func);
			if(lua.getType(-1) == Lua::T_FUNCTION){
				tolua_pushuserdata(lua, data);
				tolua_pushnumber(lua, size);
				tolua_pushnumber(lua, byte);
				if(!lua.call(3, 1)){
					lua.error(getMessage(&lua));
					return 0;
				}
				size_t ret = lua.getInteger(-1);
				lua.setTop(0);
				return ret;
			}
			return size * byte;
		};
	}else if(mode == "progress"){
		self->progressFunction = [L, func](double dlTotal, double dlNow, double ulTotal, double ulNow)->s32{
			Lua lua(L);
			lua.getStoredValue(func);
			if(lua.getType(-1) == Lua::T_FUNCTION){
				tolua_pushnumber(lua, dlTotal);
				tolua_pushnumber(lua, dlNow);
				tolua_pushnumber(lua, ulTotal);
				tolua_pushnumber(lua, ulNow);
				if(!lua.call(4, 1)){
					lua.error(getMessage(&lua));
					return 0;
				}
				int ret = lua.getInteger(-1);
				lua.setTop(0);
				return ret;
			}
			return 0;
		};
	}else if(mode == "debug"){
		self->debugFunction = [L, func](u32 type, void *data, u32 size)->s32{
			Lua lua(L);
			lua.getStoredValue(func);
			if(lua.getType(-1) == Lua::T_FUNCTION){
				tolua_pushnumber(lua, type);
				tolua_pushuserdata(lua, data);
				tolua_pushnumber(lua, size);
				if(!lua.call(3, 1)){
					lua.error(getMessage(&lua));
					return 0;
				}
				int ret = lua.getInteger(-1);
				lua.setTop(0);
				return ret;
			}
			return 0;
		};
	}
	return 0;
}

static u8 curl_lib_code[] = {
	#include "lua/Curl.cpp"
};

extern "C" {
	__export int luaopen_module(lua_State *L){
		Lua lua(L);
		
		tolua_libSLTK_curl_open(L);
		lua.getGlobal("Sltk");
		lua.pushCFunction(setCurlFunction);
		lua.setField(-2, "setCurlFunction");
		lua.setTop(0);
		lua.doBuffer(curl_lib_code, sizeof(curl_lib_code));
		return 0;
	}
}
