cmake_minimum_required(VERSION 3.6)
project(alorthim)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c sort/bubble_sort.h sort/bubble_sort.c common.h common.c sort/insert_sort.h sort/insert_sort.c sort/shell_sort.h sort/shell_sort.c sort/quick_sort.h sort/quick_sort.c)
add_executable(alorthim ${SOURCE_FILES})