cmake_minimum_required(VERSION 3.26)
project(Laba5Libs)

set(CMAKE_CXX_STANDARD 23)

add_library(Problem1 Problem1.cpp)
add_library(Problem2 SHARED Problem2.cpp)
