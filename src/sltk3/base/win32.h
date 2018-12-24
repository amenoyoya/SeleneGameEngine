#pragma once

#include "win32/browser.h"

#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "atl.lib")
#pragma comment(lib, "atlthunk.lib")

#ifdef _UseSource
	#include "win32/window.cpp"
	#include "win32/browser.cpp"
#else
	#pragma comment(lib, "libSLTK3_win32.lib")
#endif
