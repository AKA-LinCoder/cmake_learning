#CMakeLists.txt 105 message color
cmake_minimum_required(VERSION 3.20)
project(ColorfulMessages)
#[[
	\033[1;31;40m <!--1- 高 亮 显 示 31- 前 景 色 红 色 40- 背 景 色 黑 色

设置 1 高亮显示 4 使用下划线 5闪烁 7 反白显示 8 不可见

<!--1-高亮显示 31-前景色红色 40-背景色黑色-->
前景色 背景色 颜色
---------------------------------------
30 40 黑色 
31 41 红色
32 42 绿色
33 43 黃色 
34 44 蓝色
35 45 紫红色
36 46 青蓝色
37 47 白色
]]
string(ASCII 27 ESC)
set(E "${ESC}[m")
set(R "${ESC}[0;31m")
set(B "${ESC}[1;34m")
message("${R}red file ${E}normal color")
message("${B}blue file${E}normal color")