cmake_minimum_required(VERSION 3.20)
project("cmake_include")
message("begin include")
include("cmake/test_camke.cmake")
include("cmake/test.cmake" OPTIONAL) #optional 可选，文件不存在不报错
include("cmake/test.cmake" OPTIONAL RESULT_VARIABLE ret) #RESULT_VARIABLE 返回值存ret,不存在返回NOTFOUND
message("end include")