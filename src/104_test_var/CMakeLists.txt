#CMakeLists.txt 104 test_var
cmake_minimum_required(VERSION 3.20)
project(TestVarProject)
set(VAR1 "test var value")
message("The value of VAR1 is: ${VAR1}")
message("dasdas=" ${VAR1})
unset(VAR1)
message("The value of VAR1 after unset is: ${VAR1}")