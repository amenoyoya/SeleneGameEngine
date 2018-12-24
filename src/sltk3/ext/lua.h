#pragma once

#include "lua/core.h"

// tolua++使用設定
#ifdef _UseToLua
	#include <tolua++.h>
	#ifdef _MSC_VER
		#pragma comment(lib, "tolua++.lib")
	#endif
#endif

// ライブラリリンク
#ifdef _MSC_VER
	#pragma comment(lib, "lua51.lib")
#endif

#ifdef _UseSource
	#include "lua/core.cpp"
#else
	#ifdef _MSC_VER
		#pragma comment(lib, "libSLTK3_lua.lib")
	#endif
#endif
