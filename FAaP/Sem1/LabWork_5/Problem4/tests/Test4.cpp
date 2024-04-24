#include "../../Tests/lib/googletest-main/googlemock/include/gmock/gmock.h"

void calculate_zeroes(long double **, long long, long long, long long&, long long*);

TEST(Problem4, Test1){
    auto **arr = new long double *[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = new long double[10];
    }
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) arr[i][j] = 1;
    }
    arr[0][0] = 0;
    arr[5][6] = 0;
    arr[9][7] = 0;
    auto *pos = new long long[200];
    long long amount_of_zeroes = 0;
    calculate_zeroes(arr, 10, 10, amount_of_zeroes, pos);
    if (amount_of_zeroes != 3 || pos[0] != 0 || pos[1] != 0 || pos[2] != 5 || pos[3] != 6 || pos[4] != 9 || pos[5] != 7) {
        FAIL();
    }
    for (int i = 0; i < 10; ++i) {
        delete[] arr[i];
    }
    delete[] pos;
    delete[] arr;
}

TEST(Problem4, Test2){
    auto **arr = new long double *[1];
    for (int i = 0; i < 1; i++) {
        arr[i] = new long double[1];
    }
    arr[0][0] = 1;
    auto *pos = new long long[2];
    long long amount_of_zeroes = 0;
    calculate_zeroes(arr, 1, 1, amount_of_zeroes, pos);
    if (amount_of_zeroes != 0) {
        FAIL();
    }
    for (int i = 0; i < 1; ++i) {
        delete[] arr[i];
    }
    delete[] pos;
    delete[] arr;
}

TEST(Problem4, Test3){
    auto **arr = new long double *[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = new long double[5];
    }
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            arr[i][j] = 0;
        }
    }
    auto *pos = new long long[100];
    long long amount_of_zeroes = 0;
    calculate_zeroes(arr, 10, 5, amount_of_zeroes, pos);
    if (amount_of_zeroes != 50) {
        FAIL();
    }
    int count = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (pos[2 * count] != i || pos[2 * count + 1] != j) {
                FAIL();
            }
            ++count;
        }
    }
    for (int i = 0; i < 10; ++i) {
        delete[] arr[i];
    }
    delete[] pos;
    delete[] arr;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

void calculate_zeroes(long double **arr, long long str, long long col, long long &counter, long long* positions) {
    for (int i = 0; i < str; ++i) {
        for (int j = 0; j < col; ++j) {
            if (arr[i][j] == 0) {
                positions[2 * counter] = i;
                positions[2 * counter + 1] = j;
                ++(counter);
            }
        }
    }
}