#include <iostream>

long long max(long long a, long long b){
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    long long rows, collumns, inf = -9223372036854775807;
    std::cin >> rows >> collumns;
    long long table[rows + 1][collumns + 1];
    for (int i = 0; i < rows + 1; i++){
        for (int j = 0; j < collumns + 1; j++) {
            if (j == 0 || i == 0) {
                table[i][j] = inf;
            }
            else {
                std::cin >> table[i][j];
                if (table[i][j] < table[i - 1][j] || table[i][j] < table[i][j - 1]){
                    table[i][j] = max(table[i - 1][j], table[i][j - 1]);
                }
            }
        }
    }
    for (int i = 1; i < rows + 1; i++) {
        for(int j = 1; j < collumns + 1; j++) {
            std::cout << table[i][j] << " ";
        }
        std::cout << '\n';
    }
    return 0;
}