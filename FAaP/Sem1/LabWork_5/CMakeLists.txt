cmake_minimum_required(VERSION 3.26)
project(Laba5)

set(CMAKE_CXX_STANDARD 17)
include(${CMAKE_CURRENT_LIST_DIR}/Problem1/Problem1CMakeLists.cmake)

enable_testing()
add_subdirectory(Tests/lib/googletest-main)

include(${CMAKE_CURRENT_LIST_DIR}/Problem3/Problem3Cmake.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/Problem4/Problem4Cmake.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/Problem5/Problem5Cmake.cmake)

add_executable(Problem_2 Problem2/Problem2.cpp Input/Input.cpp Input/Input.h)
add_executable(Problem_3 Problem3/Problem3.cpp Input/Input.cpp Input/Input.h)
add_executable(Problem_4 Problem4/Problem4.cpp Input/Input.cpp Input/Input.h)
add_executable(Problem_5 Problem5/Problem5.cpp Input/Input.cpp Input/Input.h)