#pragma once

#include "win32/utils.h"

#ifdef _MSC_VER
	#pragma comment(lib, "advapi32.lib")
	#pragma comment(lib, "ole32.lib")
	#pragma comment(lib, "gdi32.lib")
	#pragma comment(lib, "psapi.lib")
	#pragma comment(lib, "comdlg32.lib")
#endif

#ifdef _UseSource
	#include "win32/core.cpp"
	#include "win32/utils.cpp"
#else
	#ifdef _MSC_VER
		#pragma comment(lib, "libSLTK3_win32ext.lib")
	#endif
#endif
