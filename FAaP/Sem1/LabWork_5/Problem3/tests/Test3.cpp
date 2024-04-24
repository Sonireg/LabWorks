#include "../../Tests/lib/googletest-main/googlemock/include/gmock/gmock.h"

long long test(long long **, long long, long long);

TEST(Problem3, Test1){
    auto **arr = new long long *[1];
    for (int i = 0; i < 1; i++) {
        arr[i] = new long long[1];
    }
    arr[0][0] = 2;
    EXPECT_EQ(test(arr, 1, 1), 2);
    delete[] arr[0];
    delete[] arr;
}

TEST(Problem3, Test2){
    auto **arr = new long long *[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = new long long[6];
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 1; j < 7; ++j)
            arr[i][j - 1] = j;
    }
    EXPECT_EQ(test(arr, 5, 6), 8);
    for (int i = 0; i < 5; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

TEST(Problem3, Test3){
    auto **arr = new long long *[7];
    for (int i = 0; i < 7; i++) {
        arr[i] = new long long[7];
    }
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) arr[i][j] = 1;
    }
    EXPECT_EQ(test(arr, 7, 7), 0);
    for (int i = 0; i < 7; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}