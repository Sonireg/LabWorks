#include <iostream>
#include "../Input/Input.h"
#include <windows.h>

long long factorial(long long n){
    return n == 0 ? 1 : n * factorial(n - 1);
}

long long solve_6(std::istream& input) {
    long long ans = 0;
    char str[100] = "...................................................................................................";
    std::cout << "Введите строку:\n";
    std::cin >> str;
    long long size = 0;
    while (str[size + 1] != '.') {
        ++size;
    }
    int letters[26] = {};
    for (int i = 0; i < size; ++i) {
        if (str[i] <= 'Z' && str[i] >= 'A') {
            letters[str[i] - 'A'] += 1;
        }
        else {
            letters[str[i] - 'a'] += 1;
        }
    }
    ans = factorial(size);
    for (int letter : letters) {
        ans /= factorial(letter);
    }
    std::cout << "Количество аннаграмм данной строки: "<< ans;
    return ans;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long long exit = 0;
    while(true) {
        solve_6(std::cin);
        std::cout << "\nЧтобы выйти введите 0, чтобы повторить ввод введите 1:\n";
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

