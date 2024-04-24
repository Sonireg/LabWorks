#include <iostream>

long long norm_mod(long long x, long long m) {
    return x >= 0 ? x % m : m + x;
}

long long non_zero_mod(long long x, long long m) {
    return x % m == 0 ? m : x % m;
}

int main() {
    long long n;
    std::cin >> n;
    if (n == 2) {
        std::cout << "NO";
        return 0;
    }
    if (n % 2) {
        for (long long i = 0; i < n; ++i) {
            for (long long j = 0; j < n; ++j) {
                std::cout << norm_mod(i + j - n / 2, n) * n + non_zero_mod(i + 2 * j + 2, n) << ' ';
            }
            std::cout << '\n';
        }
    }
    else if (n % 4 == 2) {
        long long halfn = n / 2;
        for (long long i = 0; i < n; ++i) {
            for (long long j = 0; j < n; ++j) {
                if (i < halfn && j < halfn) {
                    long long curi = i, curj = j;
                    if ((curj < halfn / 2 && curi < halfn / 2) || (curi > halfn / 2 && curj < halfn / 2) || (curi == halfn / 2 && curj >= 1 && curj <= halfn / 2)) {
                        std::cout << norm_mod(curi + curj - halfn / 2, halfn) * halfn + non_zero_mod(curi + 2 * curj + 2, halfn) + 3 * halfn * halfn << ' ';
                    }
                    else {
                        std::cout << norm_mod(curi + curj - halfn / 2, halfn) * halfn + non_zero_mod(curi + 2 * curj + 2, halfn) << ' ';
                    }
                }
                else if (i >= halfn && j < halfn) {
                    long long curi = i - halfn, curj = j;
                    if ((curj < halfn / 2 && curi < halfn / 2) || (curi > halfn / 2 && curj < halfn / 2) || (curi == halfn / 2 && curj >= 1 && curj <= halfn / 2)) {
                        std::cout << norm_mod(curi + curj - halfn / 2, halfn) * halfn + non_zero_mod(curi + 2 * curj + 2, halfn)<< ' ';
                    }
                    else {
                        std::cout << norm_mod(curi + curj - halfn / 2, halfn) * halfn + non_zero_mod(curi + 2 * curj + 2, halfn) + 3 * halfn * halfn << ' ';
                    }
                }
                else if (i < halfn  && j >= halfn) {
                    long long curi = i, curj = j - halfn;
                    if (curj < halfn - halfn / 4) {
                        std::cout << norm_mod(curi + curj - halfn / 2, halfn) * halfn + non_zero_mod(curi + 2 * curj + 2, halfn) + 2 * halfn * halfn << ' ';
                    }
                    else {
                        std::cout << norm_mod(curi + curj - halfn / 2, halfn) * halfn + non_zero_mod(curi + 2 * curj + 2, halfn) + halfn * halfn << ' ';
                    }
                }
                else {
                    long long curi = i - halfn, curj = j - halfn;
                    if (curj < halfn - halfn / 4) {
                        std::cout << norm_mod(curi + curj - halfn / 2, halfn) * halfn + non_zero_mod(curi + 2 * curj + 2, halfn) + halfn * halfn << ' ';
                    }
                    else {
                        std::cout << norm_mod(curi + curj - halfn / 2, halfn) * halfn + non_zero_mod(curi + 2 * curj + 2, halfn) + 2 * halfn * halfn << ' ';
                    }
                }
            }
            std::cout << '\n';
        }
    }
    else {
        long long fourthn = n / 4;
        for (long long i = 0; i < n; ++i) {
            for (long long j = 0; j < n; ++j) {
                if ((i < fourthn && j < fourthn) || (i < fourthn && j >= 3 * fourthn) || (i >= 3 * fourthn && j < fourthn) || (i >= 3 * fourthn && j >= 3 * fourthn) || (i >= fourthn && i < 3 * fourthn && j >= fourthn && j < 3 * fourthn)) {
                    std::cout << n * n - n * i - j << ' ';
                }
                else {
                    std::cout << n * i + j + 1 << ' ';
                }
            }
            std::cout << '\n';
        }
    }
    return 0;
}