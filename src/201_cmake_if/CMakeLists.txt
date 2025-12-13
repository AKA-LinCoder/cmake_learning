#CMakeLists.txt 201cmake_if
cmake_minimum_required(VERSION 3.20)
project(cmake_if)
#[[
 1,ON ,YES TRUE Y 或者非0数字（包括浮点数）都为true
]]

if(ON)

	message("ON is true")

elseif(1)

	message("elseif is true")

endif()

if(0)
	message("0 is true?")
else()
	message("0 is false")
endif()

if()
	message("empty is true?")
else()
	message("empty is false")
endif()

#未定义变量为flase
if(VAR_NOT_DEF)
	message("undefined variable is true?")
else()
	message("undefined variable is false")
endif()
set(VAR1_TRUE TRUE)
if(VAR1_TRUE)
	message("VAR1_TRUE is true")
endif()
#如果定义的本身自带的变量字符串则为true,字符串值不是常量值都是false
if("TRUE")
	message( " string TRUE is true")
else()
	message("TRUE is false")

endif()
if("FALSE dsadas")
	message( " string FALSE dsadas is true")
else()
	message("FALSE dsadas is false")
endif()

if(NOT "0")
	message( " not string 0  is true")
else()
	message(" not string 0 is false")
endif()

if(TRUE AND (OFF OR ON))
	message( " TRUE AND (OFF OR ON) is true")
else()
	message(" TRUE AND (OFF OR ON) is false")
endif()

set(VAR_DEF OFF)

if( DEFINED MORI)
	message( " MORI is defined")
else()
	message(" MORI is not defined")
endif()
if( DEFINED VAR_DEF)
	message( " VAR_DEF is defined")
else()
	message(" VAR_DEF is not defined")
endif()

set(VAR1 123)
if(VAR1 STREQUAL "123")
	message( " VAR1 STREQUAL 123 is true")
elseif(VAR1 EQUAL 123)
	message(" VAR1 EQUAL 123 is false")
else()
	message(" VAR1 is not 123")
endif()
#[[
^表示开头
$表示结尾
]]
if("abcs1234" MATCHES "[a-z]+")
	message( " abcs1234 MATCHES [a-z]+ is true")
else()
	message(" abcs1234 MATCHES [a-z]+ is false")
endif()