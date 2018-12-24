#pragma once

// ライブラリリンク
#ifdef _MSC_VER
	#pragma warning(disable:4005)
	#pragma comment(lib, "user32.lib")
	#pragma comment(lib, "shell32.lib")
	#pragma comment(lib, "shlwapi.lib")
	#pragma comment(lib, "winmm.lib")
#endif

#include "core/filesystem.h"

#ifdef _UseSource
	#include "core/base.cpp"
	#include "core/core.cpp"
	#include "core/filesystem.cpp"
#else
	#ifdef _MSC_VER
		#pragma comment(lib, "libSLTK3_core.lib")
	#endif
#endif


/*** アプリケーションMain関数マクロ ***/
#define __main() \
int SLTK_main(int, wchar_t**);\
int wmain(int argc, wchar_t **argv){\
	Sltk::Encoding::initialize();\
	return SLTK_main(argc, argv);\
}\
int SLTK_main(int argc, wchar_t **argv)


#define __WinMain() \
int SLTK_main(HINSTANCE, HINSTANCE, LPWSTR , int);\
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdLine){\
	Sltk::Encoding::initialize();\
	return SLTK_main(hInstance, hPrevInstance, lpCmdLine, nCmdLine);\
}\
int SLTK_main(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdLine)
