//
//   > Author : ZouMingzhe <zoumingzhe@qq.com>
//   > Created Time : 2020-01-11
//   > References : 
//   > https://blog.csdn.net/crazycoder8848/article/details/8292770
//   > https://blog.csdn.net/qq_33658067/article/details/79563580
//   > https://zhidao.baidu.com/question/1947885090275462708.html
//


#ifndef _Z_SIZE_LINT_H_MZ_
#define _Z_SIZE_LINT_H_MZ_


#if     defined(__GNUC__) // 对于GCC编译器，数组长度可以等于0
#define __large_size(type, size)    sizeof(type)-(size)
#define __small_size(type, size)    (size)-sizeof(type)
#elif   defined(_MSC_VER) // 对于MSC编译器，数组长度必须大于0，不能为0或负数
#define __large_size(type, size)    sizeof(type)-(size)+1
#define __small_size(type, size)    (size)-sizeof(type)+1
#endif


/*检测结构体的大小是否等于特定值*/
#define SIZE_OF_TYPE_EQUAL_TO(type, size)\
static inline char size_of_##type##_equal_to_##size()\
{\
    char    __too_large[__large_size(type, size)];\
    char    __too_small[__small_size(type, size)];\
    return  __too_large[0] + __too_small[0];\
}

#endif
