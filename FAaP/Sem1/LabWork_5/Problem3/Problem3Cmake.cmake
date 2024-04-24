add_executable(Test_3 ../Problem3/tests/Test3.cpp ../Problem3/tests/Test3Code.cpp)

target_link_libraries(Test_3 gmock pthread)