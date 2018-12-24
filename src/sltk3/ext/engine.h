#pragma once

#include "engine/core.h"

// ライブラリリンク
#ifdef _MSC_VER
	#pragma comment(lib, "libSLTK3_engine.lib")
#endif

/* Win32 API を使用する場合 */
#ifdef _UseWin32Engine
	#include "engine/win32.h"
	
	#ifdef _MSC_VER
		#pragma comment(lib, "libSLTK3_engine_win32.lib")
	#endif
#endif

/* SDLを使用する場合 */
#ifdef _UseSDLEngine
	#include "engine/SDL.h"
	
	#ifdef _MSC_VER
		#pragma comment(lib, "libSLTK3_engine_SDL.lib")
	#endif
#endif
