#CMakeLists.txt cmake文件名大小写不敏感
#指定cmake的最低版本要求
cmake_minimum_required(VERSION 3.20)
#构建项目名称
project(first_cmake)

#构建执行程序
add_executable(first_camke 101first_cmake.cpp)

#[[
通过cmake命令实现程序的分布生成
预处理 obj
编译 i
汇编 s
链接
运行(动态库链接)
使用vs下的x64 Navtive Tools Command Prompt for VS 2022
cmake -S . -B build -G "NMake Malefiles"
cmake --build build --target help
cmake --build build --target 101first_cmake.obj
]]