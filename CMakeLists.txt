cmake_minimum_required(VERSION 3.31)
project(CProgrammingGit)

set(CMAKE_CXX_STANDARD 14)

add_executable(CProgrammingGit
        array/printArray.cpp
        array/printnewarray.cpp
        array/reversearray.cpp
        array/sumofarray.cpp
        pointers/pointers1.cpp
        programs/asciivalue.cpp
        programs/linearsearch.cpp
        searching/linearsearch.cpp
        singlylinkedlist/cpplinkedlist.cpp
        singlylinkedlist/singlylinkedlist.cpp
        stack/newstack.cpp
)
add_executable(ArrayStack practice/stack/arraystack.c)
add_executable(FibonacciSeries programs/FibonacciSeries.c)