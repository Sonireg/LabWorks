#include <iostream>

int main() {
    long long k, g;
    std::cin >> k >> g;
    long long mat[k + 2][g + 2];
    long long ans = 0, inf = -9223372036854775807;
    for(int i = 0; i < k + 2; i ++) {
        for (int j = 0; j < g + 2; j++) {
            if (i == 0 || j == 0 || i == k + 1 || j == g + 1) {
                mat[i][j] = inf;
            } else {
                std::cin >> mat[i][j];
            }
        }
    }
    for (int i = 1; i < k + 1; i++) {
        for(int j = 1; j < g + 1; j++) {
            if (mat[i][j] < mat[i + 1][j] && mat[i][j] < mat[i][j + 1] && mat[i][j] < mat[i - 1][j] && mat[i][j] < mat[i][j - 1]) {
                ans++;
            }
        }
    }
    std::cout << ans;
    return 0;
}