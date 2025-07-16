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
add_executable(ArrayStack practice/stack/arraystack.c
        structure/student.h
        structure/student.c)
add_executable(FibonacciSeries programs/FibonacciSeries.c)
add_executable(DigitSum programs/DigitSum.c)
add_executable(LinkedList linkedlistpractice/LinkedList.c)
add_executable(StructureEX structure/Structure.c
        structure/student.h
        structure/student.c
)
add_executable(StringExercise strings/StringExcercise.c)