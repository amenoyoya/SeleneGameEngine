#include "native.h"

#ifdef _WINDOWS

#include <SDL_syswm.h>

namespace Sltk{
	namespace SDL{
		u32 getNativeWindowHandle(Window *win){
			SDL_SysWMinfo wmInfo;
			
			SDL_VERSION(&wmInfo.version);
			SDL_GetWindowWMInfo((SDL_Window*)win->getHandle(), &wmInfo);
			return (u32)wmInfo.info.win.window;
		}
	}
}

#endif
