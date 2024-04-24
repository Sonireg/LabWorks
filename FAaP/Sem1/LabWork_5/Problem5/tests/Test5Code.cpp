void create_arr(long long **arr, long long str, long long col, long long *ans, long long &real_size) {
    for (int i = 0; i < str; ++i) {
        for (int j = 0; j < (col + 1) / 2; ++j) {
            if (arr[i][2 * j] % 2) {
                ans[real_size] = arr[i][2 * j];
                ++(real_size);
            }
        }
    }
}

long double average(long long *arr, long long size) {
    long double ans = 0;
    for (long long i = 0; i < size; ++i) {
        ans += 1.0 * arr[i] / size;
    }
    return ans;
}

long double test5(long long **arr, long long str, long long col) {
    long long real_size = 0;
    auto *ans = new long long[str * (col + 1)/ 2];
    create_arr(arr, str, col, ans, real_size);
    long double ret = average(ans, real_size);
    delete[] ans;
    if (real_size) return ret;
    else return ret;
}