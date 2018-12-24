#pragma once

#include "dinput/core.h"

#ifdef _MSC_VER
	#pragma comment(lib, "dinput8.lib")
	#pragma comment(lib, "dxguid.lib")
#endif

#ifdef _UseSource
	#include "dinput/core.cpp"
#else
	#ifdef _MSC_VER
		#pragma comment(lib, "libSLTK3_dinput.lib")
	#endif
#endif
