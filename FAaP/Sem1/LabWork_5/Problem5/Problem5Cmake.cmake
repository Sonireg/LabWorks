add_executable(Test_5 ../Problem5/tests/Test5.cpp ../Problem5/tests/Test5Code.cpp)

target_link_libraries(Test_5 gmock pthread)