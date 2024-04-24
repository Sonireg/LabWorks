#include <iostream>
#include "../Input/Input.h"
#include <windows.h>
#include <string>

long long step(int osn, int pow, int mod) {
    if (pow == 0) {
        return 1;
    }
    if (pow % 2 == 0) {
        return (step(osn, pow / 2, mod) * step(osn, pow / 2, mod)) % mod;
    }
    else {
        return (osn * step(osn, pow - 1, mod)) % mod;
    }
}

bool first_is_pref_of_second(std::string s1, std::string s2) {
    if (s1.size() <= s2.size() && s2.substr(0, s1.size()) == s1) {
        return true;
    }
    return false;
}

bool first_is_suff_of_second(std::string s1, std::string s2) {
    if (s1.size() <= s2.size() && s2.substr(s2.size() - s1.size()) == s1) {
        return true;
    }
    else {
        return false;
    }
}

bool can_connect_first_with_second(std::string s1, std::string s2, int need_to_connect) {
    if (s1.size() >= need_to_connect && s2.size() >= need_to_connect) {
        if ((s1.substr(s1.size() - need_to_connect) == s2.substr(0, need_to_connect) ||
             s2.substr(s2.size() - need_to_connect) == s1.substr(0, need_to_connect))) {
            return true;
        }
    }
    return false;
}

void solve_5() {
    std::string s1, s2;
    int t, L, m, ans;
    std::cout << "Введите количество тестов:\n";
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        ans = 0;
        std::cout << "Введите L, m, первую и вторую строки:\n";
        std::cin >> L >> m >> s1 >> s2;
        unsigned int size1 = s1.size(), size2 = s2.size();
        if (size1 + size2 <= L) {
            ans += 2 * step(26, L - size1 - size2, m);
            if (((first_is_suff_of_second(s1, s2) && first_is_pref_of_second(s1, s2)) || (first_is_suff_of_second(s2, s1) && first_is_pref_of_second(s2, s1))) && L > 2 * std::max(size1, size2)) {
                ans -= step(26, L - std::max(size1, size2), m);
            }
            ans %= m;
        }
        else {
            if (can_connect_first_with_second(s1, s2, size1 + size2 - L)) {
                ans = 1;
            }
            else {
                ans = 0;
            }
        }
        std::cout << "Количество подходящих строк: " << ans << '\n';
    }

}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long long exit = 0;
    while(true) {
        solve_5();
        std::cout << "\nЧтобы выйти введите 0, чтобы повторить ввод введите 1:\n";
        exit = sinput();
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