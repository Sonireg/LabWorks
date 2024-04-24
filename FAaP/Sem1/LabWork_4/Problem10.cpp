#include <iostream>

int main()
{
    int size = 100;
    char a1[size];
    long long a_inv[size], a[size];
    for (int i = 0; i < size; i++) {
        a1[i] = '.';
        a_inv[i] = 0;
    }
    int was_dig = 0, count = 0, razr = 1;
    std::cin.getline(a1, size);
    for (int i = size - 1; i >= 0; i--) {
        if (was_dig) {
            do {
                if (a[i] == '-') {
                    break;
                }
                a_inv[count] += ((long long) (a1[i] - '0')) * razr;
                razr *= 10;
                --i;
            } while (a1[i] != ' ' && i != -1 && a1[i] != '-');
            if (i != -1 && a1[i] == '-') {
                a_inv[count] = -a_inv[count];
            }
            razr = 1;
            count++;
        }
        if (i != -1 && a1[i] != '.' && was_dig == 0) {
            was_dig = 1;
        }
    }
    for (int i = count; i >= 0; i--) {
        a[i - 1] = a_inv[count - i];
    }
    long long max = -1E+18, min = 1E+18, max_pos, min_pos, zero_counter = 0;
    for (int i = 0; i < count; i++) {
        if (a[i] >= max) {
            max = a[i];
            max_pos = i;
        }
        if (a[i] <= min) {
            min = a[i];
            min_pos = i;
        }
    }
    for (int i = 0; i < count; i++) {
        if ((i < max_pos && i > min_pos) || (i > max_pos && i < min_pos)) {
            a[i] = 0;
        }
    }
    for (int i = 0; i < count; i++) {
        if (a[i] == 0) {
            zero_counter++;
        }
    }

    for (int i = 0; i < count; i++) {
        if (zero_counter > count / 2) {
            if (a[i] != 0) {
                std::cout << a[i] << " ";
            }
        }
        else {
            std::cout << a[i] << ' ';
        }
    }
    return 0;
}