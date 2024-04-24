#include <iostream>

int main() {
    int size = 70000;
    char N[size];
    for (char &i: N) {
        i = '0';
    }
    std::cin.getline(N, size);
    if (N[0] == '-') {
        for (int i = 1; i < size; i++) {
            N[i - 1] = N[i];
        }
    }
    int need_pos, new_dig[10], was_dig = 0, diff_dig = 0, curr_dig, start, positions[size], need_num;
    std::cin >> need_pos;
    for (int &x: new_dig) {
        x = 0;
    }
    for (int &x: positions) {
        x = -1;
    }
    for (int i = 1; i <= size; i++) {
        if (was_dig) {
            curr_dig = N[size - i] - '0';
            if (new_dig[curr_dig] == 0) {
                diff_dig++;
                new_dig[curr_dig] = 1;
            }
        }
        if (N[size - i] != '0' && !was_dig) {
            start = i;
            was_dig = 1;
        }
    }
    std::cout << diff_dig << '\n';
    for (int i = size - start; i >= 0; i--) {
        if (N[i] == N[need_pos - 1]) {
            std::cout << size - start - 1 - i << ' ';
        }
    }
    return 0;
}