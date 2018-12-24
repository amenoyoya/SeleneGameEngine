#pragma once

#include "core.h"
#include "../../base/win32.h"

namespace Sltk{
	namespace Engine{
		/* LuaにWin32ライブラリ登録 */
		void registerWin32Library(Lua *pLua);
	}
}
