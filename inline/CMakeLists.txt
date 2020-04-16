#
#    > Author : ZouMingzhe <zoumingzhe@qq.com>
#    > Created Time : 2019-12-25
#    > References : 
#



# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.6)

# 项目信息
project (inline)

# 添加目录下的所有头文件
include_directories("./include")
# 添加目录下的所有源文件并保存到DIR_SOURCES
aux_source_directory(./source DIR_SOURCES)

# 添加子目录
# add_subdirectory(./source/xxx)

# 指定生成目标
add_executable (inline ${DIR_SOURCES})
