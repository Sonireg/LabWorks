#include "gmock/gmock.h"

int solve_8(std::string&, std::string&);

TEST(task8, Test1){
    std::string test_str1 = "a", test_str2 = "a";
    for (int i = 0; i < 500; ++i){
        test_str1 += "a";
        test_str2 += "b";
    }
    EXPECT_EQ(solve_8(test_str1, test_str2), 0);
}

TEST(task8, Test2){
    std::string test_str1 = "asfasb", test_str2 = "b";
    for (int i = 0; i < 500; ++i){
        test_str1 += "a";
    }
    for (int i = 0; i < 998; ++i) {
        test_str2 += "a";
    }
    EXPECT_EQ(solve_8(test_str1, test_str2), 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
