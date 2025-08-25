cmake_minimum_required(VERSION 3.31)
project(CProgrammingGit)

set(CMAKE_CXX_STANDARD 14)

add_executable(QueueRunner  queue/CicularArray.c)
add_executable(DynamicArray dynamicArrayInC/DynamicArray.c)

add_executable(BigOCompile TimeComplexity/TimeComplexityOne.c)