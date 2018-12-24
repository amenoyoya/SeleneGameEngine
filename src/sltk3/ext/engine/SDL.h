#pragma once

#include "core.h"
#include "../../base/SDL.h"

namespace Sltk{
	namespace Engine{
		/* LuaにSDLライブラリ登録 */
		void registerSDLLibrary(Lua *pLua);
	}
}
