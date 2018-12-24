#define _UseToLua
#include <sltk3/ext/lua.h>
#include <sltk3/ext/dinput.h>
#include "tolua/module_dinput.cpp"

using namespace Sltk;

extern "C" {
	__export int luaopen_module(lua_State *L){
		tolua_libSLTK_dinput_open(L);
		return 0;
	}
}
