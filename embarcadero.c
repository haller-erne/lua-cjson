#include "lua.h"

// CJSON used code from https://github.com/LuaDist-testing/lua-cjson
// License is MIT

// try to link the correct LUA library
#if LUA_VERSION_NUM == 501
#pragma link "lua5.1.lib"
#else
# error Unknown LUA version!
#endif


