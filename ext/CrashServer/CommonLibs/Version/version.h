// Copyright 2014 Idol Software, Inc.
//
// This file is part of Doctor Dump SDK.
//
// Doctor Dump SDK is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef __VERSION_H
#define __VERSION_H


#ifndef VERSION_PRODUCTVERSION_HIGH
#   define VERSION_PRODUCTVERSION_HIGH            1
#endif

#ifndef VERSION_PRODUCTVERSION_LOW
#   define VERSION_PRODUCTVERSION_LOW             0
#endif

#ifndef VERSION_PRODUCTVERSION_BUILD
#   define VERSION_PRODUCTVERSION_BUILD           0
#endif

#ifndef VERSION_PRODUCTVERSION_COMPILATION
#   define VERSION_PRODUCTVERSION_COMPILATION     0
#endif

#define VERSION_ITOA2(x) #x
#define VERSION_ITOA(x)  VERSION_ITOA2(x)

#define VERSION_PRODUCTVERSION_HIGH_STR        VERSION_ITOA(VERSION_PRODUCTVERSION_HIGH)
#define VERSION_PRODUCTVERSION_LOW_STR         VERSION_ITOA(VERSION_PRODUCTVERSION_LOW)
#define VERSION_PRODUCTVERSION_BUILD_STR       VERSION_ITOA(VERSION_PRODUCTVERSION_BUILD)
#define VERSION_PRODUCTVERSION_COMPILATION_STR VERSION_ITOA(VERSION_PRODUCTVERSION_COMPILATION)
#define VERSION_PRODUCTVERSION       VERSION_PRODUCTVERSION_HIGH,VERSION_PRODUCTVERSION_LOW,VERSION_PRODUCTVERSION_BUILD,VERSION_PRODUCTVERSION_COMPILATION
#define VERSION_PRODUCTVERSION_STR   VERSION_PRODUCTVERSION_HIGH_STR "." VERSION_PRODUCTVERSION_LOW_STR "." VERSION_PRODUCTVERSION_BUILD_STR "." VERSION_PRODUCTVERSION_COMPILATION_STR


#ifndef VERSION_FILEVERSION_HIGH
#   define VERSION_FILEVERSION_HIGH               VERSION_PRODUCTVERSION_HIGH
#endif

#ifndef VERSION_FILEVERSION_LOW
#   define VERSION_FILEVERSION_LOW                VERSION_PRODUCTVERSION_LOW
#endif

#ifndef VERSION_FILEVERSION_BUILD
#   define VERSION_FILEVERSION_BUILD              VERSION_PRODUCTVERSION_BUILD
#endif

#ifndef VERSION_FILEVERSION_COMPILATION
#   define VERSION_FILEVERSION_COMPILATION        VERSION_PRODUCTVERSION_COMPILATION
#endif

#define VERSION_FILEVERSION_HIGH_STR           VERSION_ITOA(VERSION_FILEVERSION_HIGH)
#define VERSION_FILEVERSION_LOW_STR            VERSION_ITOA(VERSION_FILEVERSION_LOW)
#define VERSION_FILEVERSION_BUILD_STR          VERSION_ITOA(VERSION_FILEVERSION_BUILD)
#define VERSION_FILEVERSION_COMPILATION_STR    VERSION_ITOA(VERSION_FILEVERSION_COMPILATION)
#define VERSION_FILEVERSION          VERSION_FILEVERSION_HIGH,VERSION_FILEVERSION_LOW,VERSION_FILEVERSION_BUILD,VERSION_FILEVERSION_COMPILATION
#define VERSION_FILEVERSION_STR      VERSION_FILEVERSION_HIGH_STR "." VERSION_FILEVERSION_LOW_STR "." VERSION_FILEVERSION_BUILD_STR "." VERSION_FILEVERSION_COMPILATION_STR


#ifndef VERSION_COMPANYNAME_STR
#   define VERSION_COMPANYNAME_STR      "Idol Software"
#endif


// if pass APSTUDIO_INVOKED version resource appeats in .rc file
#if defined(RC_INVOKED) && !defined(APSTUDIO_INVOKED)
#   include "version.rc"
#endif

#endif //__VERSION_H
