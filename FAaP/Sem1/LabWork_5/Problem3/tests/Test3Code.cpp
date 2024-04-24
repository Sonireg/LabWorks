long long min(long long a, long long b) {
    return a < b ? a : b;
}

void create_arr(long long **arr, long long *ans, long long size, long long &real_size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i][i] % 2 == 0) {
            ans[real_size] = arr[i][i];
            ++(real_size);
        }
    }
}

long long mult(long long* arr, long long size) {
    long long ans = 1;
    for (int i = 0; i < size; ++i) {
        ans *= arr[i];
    }
    return ans;
}


long long test(long long int **arr, long long int str, long long int col) {
    long long real_size = 0;
    auto *ans = new long long[min(str, col)];
    create_arr(arr, ans, min(str, col), real_size);
    long long ret = mult(ans, real_size);
    delete[] ans;
    if (real_size) return ret;
    else return 0;
}
