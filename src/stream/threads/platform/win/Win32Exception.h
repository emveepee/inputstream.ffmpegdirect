/*
 *  Copyright (C) 2005-2020 Team Kodi
 *  https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSE.md for more information.
 */

#pragma once

#include <windows.h>

class win32_exception
{
public:
    typedef const void* Address; // OK on Win32 platform

    static void set_version(std::string version) { mVersion = version; };
    static bool write_minidump(EXCEPTION_POINTERS* pEp);
    static bool write_stacktrace(EXCEPTION_POINTERS* pEp);
    static bool ShouldHook();
private:
    static std::string mVersion;
};
