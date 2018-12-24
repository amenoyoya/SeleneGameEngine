#pragma once

#include "SDL/render.h"
#include "SDL/native.h"

// ライブラリリンク
#ifdef _MSC_VER
	#ifdef _NoDefaultLibrary
		#pragma comment(linker, "/NODEFAULTLIB:libcmt.lib")
		#pragma comment(linker, "/NODEFAULTLIB:libcmtd.lib")
	#endif
	
	#pragma comment(lib, "SDL2.lib")
	#pragma comment(lib, "SDL2main.lib")
	
	#pragma comment(lib, "SDL2_image.lib")
	#pragma comment(lib, "libjpeg.lib")
	#pragma comment(lib, "libpng.lib")
	
	#pragma comment(lib, "SDL2_mixer.lib")
	#pragma comment(lib, "mikmod.lib")
	#pragma comment(lib, "libogg.lib")
	#pragma comment(lib, "libvorbis.lib")
	#pragma comment(lib, "libvorbisidec.lib")
	
	#pragma comment(lib, "SDL2_ttf.lib")
	#pragma comment(lib, "freetype.lib")
	
	#pragma comment(lib, "libzlib.lib")
	#pragma comment(lib, "shell32.lib")
	#pragma comment(lib, "gdi32.lib")
	#pragma comment(lib, "imm32.lib")
	#pragma comment(lib, "ole32.lib")
	#pragma comment(lib, "oleaut32.lib")
	#pragma comment(lib, "version.lib")
	#pragma comment(lib, "winmm.lib")
	#pragma comment(lib, "opengl32.lib")
#endif

#ifdef _UseSource
	#include "SDL/base.cpp"
	#include "SDL/core.cpp"
	#include "SDL/render.cpp"
#else
	#ifdef _MSC_VER
		#pragma comment(lib, "libSLTK3_SDL.lib")
	#endif
#endif
