#
#    > Author : ZouMingzhe <zoumingzhe@qq.com>
#    > Created Time : 2020-01-11
#    > References : 
#    > https://blog.csdn.net/crazycoder8848/article/details/8292770
#    > https://blog.csdn.net/qq_33658067/article/details/79563580
#
#ifndef _Z_SIZE_LINT_H_MZ_
#define _Z_SIZE_LINT_H_MZ_

/*检测结构体的大小是否等于特定值*/
#define SIZE_OF_TYPE_EQUAL_TO(type, size)\
static inline char size_of_##type##_equal_to_##size()\
{\
    char    __too_large[sizeof(type)-size+1];\
    char    __too_small[size-sizeof(type)+1];\
    return  __too_large[0] + __too_small[0];\
}

#endif
