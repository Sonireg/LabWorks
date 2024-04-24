#include <iostream>

int main() {
    long long N, M;
    std::cin >> N;
    long long first_matrix[N][N], second_matrix[N][N], ans_matrix[N][N];
    for (int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            std::cin >> first_matrix[i][j];
            ans_matrix[i][j] = 0;
        }
    }
    std::cin >> M;
    for (int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            std::cin >> second_matrix[i][j];
        }
    }
    long long term;
    for (int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < N; k++) {
                term = first_matrix[i][k] * second_matrix[k][j];
                ans_matrix[i][j] += term;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            std::cout << ans_matrix[i][j];
            if (j != N - 1) {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
    return 0;
}
