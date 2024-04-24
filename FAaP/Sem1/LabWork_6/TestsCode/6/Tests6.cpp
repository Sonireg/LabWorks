#include "gmock/gmock.h"

long long solve_6(std::istream& input);

TEST(task6, Test1){
    std::stringstream fake_input("abc");
    EXPECT_EQ(solve_6(fake_input), 6);
}

TEST(task6, Test2){
    std::stringstream fake_input("aaaaaaaaaaaaaa");
    EXPECT_EQ(solve_6(fake_input), 1);
}

TEST(task6, Test3){
    std::stringstream fake_input("abcdefghijklmn");
    EXPECT_EQ(solve_6(fake_input), 87178291200);
}

TEST(task6, Test4){
    std::stringstream fake_input("abcdefghijklma");
    EXPECT_EQ(solve_6(fake_input), 43589145600);
}

TEST(task6, Test5){
    std::stringstream fake_input("abcdefghijklaa");
    EXPECT_EQ(solve_6(fake_input), 14529715200);
}

TEST(task6, Test6){
    std::stringstream fake_input("aaaaaaabbbbbb");
    EXPECT_EQ(solve_6(fake_input), 1716);
}

TEST(task6, Test7){
    std::stringstream fake_input("aaaabbbbccccc");
    EXPECT_EQ(solve_6(fake_input), 90090);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}