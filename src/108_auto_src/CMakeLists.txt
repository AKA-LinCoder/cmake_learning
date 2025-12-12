#CMakeLists.txt 108
cmake_minimum_required(VERSION 3.20)
project("auto_src_h")
#[[
108
-----CMakeLists.txt
	 main.cpp
-----src
		xlog.cpp
		xthread.cc
		xtest.c
-----include
		xlog.h
		xthread.hpp
]]

set(INCLUDE_PATH "./include")
#头文件加载路径
include_directories(${INCLUDE_PATH})

#读取所有头文件,打开sln时可以看到头文件
file(GLOB H_FILE "${INCLUDE_PATH}/*.h*")
file(GLOB HPP_FILE "${INCLUDE_PATH}/*.hpp")

#自动导入当前目录下的所有源码
aux_source_directory("." M_SRC)
aux_source_directory("./src" SRC)
add_executable(${PROJECT_NAME} ${M_SRC} ${SRC} ${H_FILE})
#add_executable(${PROJECT_NAME} main.cpp)