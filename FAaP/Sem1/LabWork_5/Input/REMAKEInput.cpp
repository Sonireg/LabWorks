#include <iostream>
#include "Input.h"
#include <windows.h>

bool not_number(char a) {
    return !(a >= '0' && a <= '9');
}

long long input(const char* announcment) {
    SetConsoleOutputCP(CP_UTF8);
    char s[200];
    long long x = 0, pow = 1;
    int pos_of_start = 199;
    bool was_fail = false;
    while (true) {
        x = 0;
        pow = 1;
        pos_of_start = 199;
        was_fail = false;
        for (int i = 0; i < 200; ++i) {
            s[i] = '*';
        }
        std::cin >> s;
        for(; pos_of_start; --pos_of_start) {
            if (s[pos_of_start] != '*') {
                break;
            }
        }
        for (int i = pos_of_start - 1; i > 0; --i) {
            if (not_number(s[i])) {
                was_fail = true;
                break;
            }
            x += (s[i] - '0') * pow;
            pow *= 10;
        }
        if(s[0] == '-') x *= -1;
        else if(!not_number(s[0])) x += pow * (s[0] - '0');
        else was_fail = true;
        was_fail = x <= 0;
        if (!was_fail) {
            break;
        }
        else {
            std::cout << announcment << '\n';
        }
    }
    return x;
}

long long sinput(const char* announcment) {
    SetConsoleOutputCP(CP_UTF8);
    char s[200];
    long long x = 0, pow = 1;
    int pos_of_start = 199;
    bool was_fail = false;
    while (true) {
        x = 0;
        pow = 1;
        pos_of_start = 199;
        was_fail = false;
        for (int i = 0; i < 200; ++i) {
            s[i] = '*';
        }
        std::cin >> s;
        for(; pos_of_start; --pos_of_start) {
            if (s[pos_of_start] != '*') {
                break;
            }
        }
        for (int i = pos_of_start - 1; i > 0; --i) {
            if (not_number(s[i])) {
                was_fail = true;
                break;
            }
            x += (s[i] - '0') * pow;
            pow *= 10;
        }
        if(s[0] == '-') x *= -1;
        else if(!not_number(s[0])) x += pow * (s[0] - '0');
        else was_fail = true;
        if (!was_fail) {
            break;
        }
        else {
            std::cout << announcment << '\n';
        }
    }
    return x;
}

long double linput(const char* announcment) {
    SetConsoleOutputCP(CP_UTF8);
    char s[200];
    long double x = 0, plus_pow = 1, minus_pow = 0.1;
    int pos_of_start = 199, pos_of_dot = 199, dots = 0;
    bool was_fail;
    while (true) {
        x = 0;
        plus_pow = 1;
        minus_pow = 0.1;
        pos_of_start = 199;
        pos_of_dot = 199;
        dots = 0;
        was_fail = false;
        for (int i = 0; i < 200; ++i) {
            s[i] = '*';
        }
        std::cin >> s;
        for(; pos_of_start; --pos_of_start) {
            if (s[pos_of_start] != '*') {
                break;
            }
        }
        pos_of_dot = pos_of_start;
        for (int i = pos_of_start - 1; i >= 0; --i) {
            if (s[i] == '.') {
                ++dots;
                pos_of_dot = i;
            }
        }
        if (dots > 1) {
            was_fail = true;
        }
        for (int i = pos_of_dot - 1; i > 0; --i) {
            if (not_number(s[i]) || was_fail) {
                was_fail = true;
                break;
            }
            x += (s[i] - '0') * plus_pow;
            plus_pow *= 10;
        }

        for (int i = pos_of_dot + 1; i < pos_of_start; ++i) {
            if (not_number(s[i]) || was_fail) {
                was_fail = true;
                break;
            }
            x += (s[i] - '0') * minus_pow;
            minus_pow /= 10;
        }

        if(s[0] == '-') x *= -1;
        else if(!not_number(s[0])) x += plus_pow * (s[0] - '0');
        else was_fail = true;

        if (!was_fail) {
            break;
        }
        else {
            std::cout << announcment << '\n';
        }
    }
    return x;
}
