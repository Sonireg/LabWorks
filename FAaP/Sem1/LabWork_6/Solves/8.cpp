#include <iostream>
#include <string>
#include "../Input/Input.h"
#include <windows.h>

std::string reverse(std::string &s) {
    std::string ans = "";
    int size = s.size();
    for (int i = 1 ; i < size + 1; ++i) {
        ans += s[size - i];
    }
    return ans;
}

bool can_slag(std::string &s1, std::string &s2) {
    int size1 = s1.size(), size2 = s2.size();
    if (size1 >= size2) {
        return s1.substr(size1 - size2) == reverse(s2);
    }
    else {
        return s2.substr(0, size1) == reverse(s1);
    }
}

bool canbuild(std::string s1, std::string s2) {
    std::string pref_check, suff_check;
    for (int i = 0; i <= s2.size(); ++i) {
        pref_check = s2.substr(0, i);
        if (i)
            suff_check = s2.substr(i - 1);
        else {
            suff_check = s2;
        }
        if (can_slag(pref_check, suff_check)) {
            if (pref_check.size() >= suff_check.size()) {
                if (s1.find(pref_check) != 18446744073709551615ULL) {
                    return true;
                }
            }
            else {
                if (s1.find(reverse(suff_check)) != 18446744073709551615ULL) {
                    return true;
                }
            }
        }
    }
    return false;
}

int solve_8() {
    long long q;
    std::cout << "Введите количество тестов:\n";
    q = input();
    std::cout << "Введите две строки:\n";
    std::string s1, s2;
    for (int i = 0; i < q; ++i) {
        std::cin >> s1 >> s2;
        if (canbuild(s1, s2)) {
            std::cout << "Данные две строки можно получить пользуясь алгоритмом\n";
        }
        else {
            std::cout << "Данные две строки нельзя получить пользуясь алгоритмом\n";
        }
    }
    return 0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long long exit = 0;
    while(true) {
        solve_8();
        std::cout << "\nЧтобы выйти введите 0, чтобы повторить вводвведите 1:\n";
        exit = sinput();
        getchar();
        if (exit == 0) {
            break;
        }
        else if (exit == 1) {
            continue;
        }
        else {
            std::cout << "Неверный ввод, повотрите попытку:\n";
        }
    }
    return 0;
}