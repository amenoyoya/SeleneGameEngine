#pragma once

#include "zlib/zipReader.h"

// ライブラリリンク
#ifdef _MSC_VER
	#pragma comment(lib, "libzlib.lib")
#endif

#ifdef _UseSource
	#include "zlib/zipArchiver.cpp"
	#include "zlib/zipReader.cpp"
#else
	#ifdef _MSC_VER
		#pragma comment(lib, "libSLTK3_zlib.lib")
	#endif
#endif
