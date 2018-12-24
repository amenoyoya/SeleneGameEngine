#pragma once

/*** SDL native API ***/

#include "core.h"

#ifdef _WINDOWS

namespace Sltk{
	namespace SDL{
		// SDL::Window -> HWND
		u32 getNativeWindowHandle(Window *win);
	}
}

#endif
