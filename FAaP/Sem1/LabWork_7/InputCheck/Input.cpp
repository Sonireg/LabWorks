#include <iostream>
#include "Input.h"
#include <windows.h>

bool not_number(char a) {
    return !(a >= '0' && a <= '9');
}

bool is_in_num(char a) {
    return (a >= '0' && a <= '9') || a == 'e' || a == 'E' || a == '-' || a == '.' || a == '+';
}

bool is_correct_ld(char s[], int size) {
    int e = 0, min = 0, dot = 0;
    int first_minus_pos = size, dot_pos = size, second_minus_pos = size, e_pos = size, not_num = 0, plus_pos = size;
    for(int i = 0; i < size; ++i) {
        if (not_number(s[i])) {
            ++not_num;
            if (s[i] == '-' && i != 0) {
                second_minus_pos = i;
                ++min;
            }
            if (s[i] == '-' && i == 0) {
                first_minus_pos = i;
                ++min;
            }
            if (s[i] == '.') {
                dot_pos = i;
                ++dot;
            }
            if (s[i] == 'e' || s[i] == 'E') {
                e_pos = i;
                ++e;
            }
            if (s[i] == '+') {
                plus_pos = i;
            }
        }
    }
    bool good = ((e <= 1) && (dot <= 1) && (min <= 2));
    for (int i = 0; i < size; ++i) {
        if(!is_in_num(s[i])) {
            good = false;
        }
    }
    if (good && not_num <= 4 && ((first_minus_pos == 0) || (first_minus_pos == size)) &&
        (first_minus_pos == size || first_minus_pos <= dot_pos) && (dot_pos == size || dot_pos <= e_pos) &&
        (e_pos == size || e_pos <= second_minus_pos) && (second_minus_pos == size || second_minus_pos != size - 1) && size < 23 &&
        (plus_pos == e_pos + 1 || plus_pos == size)) {
        if (second_minus_pos != size && e_pos == size) {
            return false;
        }
        return true;
    }
    return false;
}

long long input(const char* announcment) {
    SetConsoleOutputCP(CP_UTF8);
    long double x;
    while (true) {
        x = linput(announcment);
        if (x > 0 && (long long) x == x && x < 9223372036854775807LL) {
            return (long long) x;
        } else {
            std::cout << announcment << '\n';
        }
    }
}

long long sinput(const char* announcment) {
    SetConsoleOutputCP(CP_UTF8);
    long double x;
    while (true) {
        x = linput(announcment);
        if ((long long) x == x && x < 9223372036854775807LL && x > -9223372036854775807LL) {
            return (long long) x;
        } else {
            std::cout << announcment << '\n';
        }
    }
}

long double linput(const char* announcment) {
    SetConsoleOutputCP(CP_UTF8);
    char s[200];
    int size = 0, dot_pos = 199, e_pos = 199, exponent = 0, first_minus_pos = 0, second_minus_pos = 0;
    long double x = 0, ten_pow = 1;
    while (true) {
        for (int i = 0; i < 200; ++i) {
            s[i] = '\r';
        }
        std::cin >> s;

        for (int i = 0; i < 200; ++i) {
            if (s[i] == '\r') {
                size = i - 1;
                break;
            }
        }

        if (!is_correct_ld(s, size)) {
            std::cout << announcment << '\n';
        } else {
            e_pos = size;
            for (int i = 0; i < size; ++i) {
                if (s[i] == 'e' || s[i] == 'E') {
                    e_pos = i;
                    break;
                }
            }

            dot_pos = e_pos;
            for (int i = 0; i < size; ++i) {
                if (s[i] == '.') {
                    dot_pos = i;
                    break;
                }
            }

            if (s[0] == '-') {
                first_minus_pos = 1;
            }
            else {
                first_minus_pos = 0;
            }

            if (s[e_pos + 1] == '-' || s[e_pos + 1] == '+') {
                second_minus_pos = e_pos + 2;
            }
            else {
                second_minus_pos = e_pos + 1;
            }

            for (int i = dot_pos - 1; i >= first_minus_pos; --i) {
                x += ten_pow * (s[i] - '0');
                ten_pow *= 10;
            }

            ten_pow = 0.1;
            for (int i = dot_pos + 1; i < e_pos; ++i) {
                x += ten_pow * (s[i] - '0');
                ten_pow /= 10;
            }

            ten_pow = 1;
            for (int i = size - 1; i >= second_minus_pos; --i) {
                exponent += ten_pow * (s[i] - '0');
                ten_pow *= 10;
            }

            for (int i = 0; i < exponent; ++i) {
                if (s[e_pos + 1] != '-') {
                    x *= 10;
                }
                else {
                    x /= 10;
                }
            }

            if (first_minus_pos) {
                x *= -1;
            }

            break;
        }
    }
    return x;
}
