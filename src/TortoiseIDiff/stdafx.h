﻿// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#define WIN32_LEAN_AND_MEAN     // Exclude rarely-used stuff from Windows headers

#include <SDKDDKVer.h>

#define NOMINMAX
#include <algorithm>
using std::max;
using std::min;

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

// turns off MFC's hiding of some common and often safely ignored warning messages
#define _AFX_ALL_WARNINGS

#pragma warning(push)
#pragma warning(disable : 4459)
#include <afx.h>
#pragma warning(pop)
#include <ShlObj.h>
#include <Shlwapi.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <comdef.h>

#include "MyMemDC.h"

#include <atlbase.h>
#include <map>
#include <unordered_map>

#include "git2.h"
#include "SmartLibgit2Ref.h"

#include "scope_exit_noexcept.h"

using AutoLocker = CComCritSecLock<CComAutoCriticalSection>;

#ifdef _WIN64
#   define APP_X64_STRING   "x64"
#else
#   define APP_X64_STRING ""
#endif

#define REGSTRING_DARKTHEME L"Software\\TortoiseGit\\IDiffDarkTheme"
