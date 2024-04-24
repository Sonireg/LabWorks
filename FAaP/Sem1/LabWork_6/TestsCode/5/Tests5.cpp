#include "gmock/gmock.h"

int solve_5(int, int, std::string&, std::string&);

TEST(task5, Test1){
    std::string test_str1 = "abb", test_str2 = "bbba";
    EXPECT_EQ(solve_5(5, 100000, test_str1, test_str2), 1);
}

TEST(task5, Test2){
    std::string test_str1 = "a", test_str2 = "a";
    EXPECT_EQ(solve_5(100, 100000, test_str1, test_str2), 46176);
}

TEST(task5, Test3){
    std::string test_str1 = "a", test_str2 = "b";
    EXPECT_EQ(solve_5(100, 100000, test_str1, test_str2), 21152);
}

TEST(task5, Test4){
    std::string test_str1 = "abbbbbb", test_str2 = "bbbb";
    EXPECT_EQ(solve_5(3, 100000, test_str1, test_str2), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}