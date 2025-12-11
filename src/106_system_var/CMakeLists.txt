cmake_minimum_required(VERSION 3.20)
project(xlog)
#1 提供信息的变量 PROJECT_NAME

#2 设置静态库还是动态库
set(BUILD_SHARED_LIBS OFF)
#cmake传递变量给c++
add_definitions(-Dxlog_STATIC)默认值1
#3 描述系统的变量
message(STATUS "MSVC = ${MSVC}")

#4 控制构建过程的变量 CMAKE_COLOR_MAKEFILE 默认on

add_library(${PROJECT_NAME} STATIC xlog.cpp xlog.h)