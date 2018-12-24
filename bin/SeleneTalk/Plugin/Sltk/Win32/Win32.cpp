#define _UseToLua
#include <sltk3/ext/lua.h>
#include <sltk3/ext/win32.h>
#include "tolua/module_win32.cpp"

using namespace Sltk;

extern "C" {
	__export int luaopen_module(lua_State *L){
		tolua_libSLTK_win32_open(L);
		return 0;
	}
}
