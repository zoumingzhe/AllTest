/****************************************************************************
*                                                                           *
* arch.h -- Basic Definitions for All Platform                              *
*                                                                           *
* Author : ZouMingzhe <zoumingzhe@qq.com>                                   *
*                                                                           *
****************************************************************************/


#ifndef _Z_ARCH_MZ_
#define _Z_ARCH_MZ_


// define type
/* stdint.h是C99中引进的一个标准C库的头文件，定义了几种扩展的整数类型和宏。*/
#include <stdint.h>
typedef int8_t              I8;
typedef int16_t             I16;
typedef int32_t             I32;
typedef int64_t             I64;

typedef uint8_t             UI8;
typedef uint16_t            UI16;
typedef uint32_t            UI32;
typedef uint64_t            UI64;

typedef signed char         CHAR;
typedef signed char*        PCHAR;
typedef unsigned char       UCHAR;
// end define type


// define platform
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32) \
 || defined(_WIN64) || defined(__WIN64__) || defined(WIN64)
#define __WIN__
//#include <minwindef.h>
#elif defined(__linux__)
#define __LINUX__
//#include <mintypdef_linux.h>
#elif defined(_MACOS_)
#define __MAC__
//#include <mintypdef_linux.h>
#else
	unknown
#endif
// end define platform


#endif
