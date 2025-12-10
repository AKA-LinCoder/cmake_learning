#CMakeLists.txt 103message 

#[[
 我是一个注释

]]
# messsage基础使用
cmake_minimum_required(VERSION 3.20)
message("Hello, World!")
project(HelloWorldProject)
message("Project Name: ${PROJECT_NAME}")
message("123" "456")
# message的不同级别
message(STATUS "This is a status message.")
# 打印代码路径和行号
message(WARNING "This is a warning message.")
# 进程继续，生成退出
message(SEND_ERROR "哈哈哈哈")
message(AUTHOR_WARNING "This is an author warning message.")
# 进程推出，生成（add_xxx）退出
# message(FATAL_ERROR "This is a fatal error message.")
# 会加个前缀，用户可能感兴趣的
message(STATUS "This is a status message22.")
#notice等于没有加
message(NOTICE "999")
#默认，加前缀不显示，用户需要的详细信息
message(VERBOSE "VERBOSE")
#stdout标准输出
#stderr 错误输出

#设置日志显示级别
#cmake -S . -B build --log-level=VERBOSE

# 标准输出重定向
# cmake -S . -B build --log-level=VERBOSE > log.txt

#标准错误输出重定向到标准输出
# cmake -S . -B build --log-level=VERBOSE > log.txt 2>&1

message("================================================================================================")
# 2.4查找库日志 一一对应
#[[
CHECK_START 开始记录将要执行检查的消息
CHECK_PASS 记录检查的成功消息
CHECK_FAIL 记录检查的失败消息
]]

message(CHECK_START "find  X1")
message(CHECK_START "find X2")

message(CHECK_PASS "Succeeded")
set(CMAKE_MESSAGE_INDENT "---")

message(CHECK_FAIL "failed.")