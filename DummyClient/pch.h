#pragma once
#define WIN32_LEAN_AND_MEAN// Exclude rarely-used stuff from Windows headers

#ifdef _DEBUG
#pragma comment(lib, "Debug\\ServerCore.lib")
#else
#pragma comment(lib, "Release\\ServerCore.lib")
#endif

#include "CorePch.h"
