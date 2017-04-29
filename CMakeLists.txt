cmake_minimum_required(VERSION 3.6)
project(alorthim)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c sort/bubble_sort.h sort/bubble_sort.c common.h common.c)
add_executable(alorthim ${SOURCE_FILES})