#include "../../Tests/lib/googletest-main/googlemock/include/gmock/gmock.h"

long double test5(long long **, long long, long long);

TEST(Problem5, Test1){
    auto **arr = new long long *[1];
    for (int i = 0; i < 1; i++) {
        arr[i] = new long long[1];
    }
    arr[0][0] = 2;
    long double ans = test5(arr, 1, 1);
    delete[] arr[0];
    delete[] arr;
    EXPECT_EQ(ans, 0);
}

TEST(Problem5, Test2){
    auto **arr = new long long *[4];
    for (int i = 0; i < 4; i++) {
        arr[i] = new long long[6];
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j)
            arr[i][j] = j + 1;
    }
    long double ans = test5(arr, 4, 6);
    for (int i = 0; i < 4; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    if ((ans - 3) > 0.00001 || (ans - 3) < -0.00001) {
        FAIL();
    }

}

TEST(Problem5, Test3){
    auto **arr = new long long *[3];
    for (int i = 0; i < 3; i++) {
        arr[i] = new long long[3];
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) arr[i][j] = 1;
    }
    arr[2][2] = 3;
    long double ans = test5(arr, 3, 3);
    for (int i = 0; i < 3; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    if ((ans - 1.33333) > 0.00001 || (ans - 1.33333) < -0.00001) {
        FAIL();
    }

}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}