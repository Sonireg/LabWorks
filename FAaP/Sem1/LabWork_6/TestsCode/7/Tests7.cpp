#include "gmock/gmock.h"

int solve_7(std::string);

TEST(task7, Test1){
    std::string test_str = "b";
    for (int i = 0; i < 99999; ++i) {
        test_str += "a";
    }
    EXPECT_EQ(solve_7(test_str), 100000);
}

TEST(task7, Test2){
    std::string test_str = "b";
    for (int i = 0; i < 99998; ++i) {
        test_str += "a";
    }
    test_str += "b";
    EXPECT_EQ(solve_7(test_str), 99999);
}

TEST(task7, Test3){
    std::string test_str = "";
    for (int i = 0; i < 100000; ++i) {
        test_str += "a";
    }
    EXPECT_EQ(solve_7(test_str), 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}