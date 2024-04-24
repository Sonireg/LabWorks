find_library(LIB_PATH
        NAMES Problem1
        PATH_SUFFIXES lib
        PATHS ${CMAKE_CURRENT_LIST_DIR})

add_executable(Problem_1 Problem1/Problem1.cpp ../Input/Input.cpp ../Input/Input.h Problem1/lib/lib.h)
target_link_libraries(Problem_1 ${LIB_PATH})