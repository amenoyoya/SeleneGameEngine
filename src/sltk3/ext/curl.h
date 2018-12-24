#pragma once

#include "curl/core.h"

// ライブラリリンク
#ifdef _MSC_VER
	#pragma comment(lib, "advapi32.lib")
	#pragma comment(lib, "libcurl_a.lib")
	#pragma comment(lib, "wldap32.lib")
	#pragma comment(lib, "ws2_32.lib")
#endif

#ifdef _UseSource
	#include "curl/core.cpp"
#else
	#ifdef _MSC_VER
		#pragma comment(lib, "libSLTK3_curl.lib")
	#endif
#endif
