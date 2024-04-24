#include <iostream>
#include <string>
#include "../Input/Input.h"
#include <windows.h>

int solve_7() {
    std::string input;
    std::cout << "Введите строку:\n";
    std::cin >> input;
    int size = input.size();
    bool is_diffrent = false, input_is_palindrom = true;
    for (int i = 0; i < size; ++i) {
        if (input[i] != input[0]) {
            is_diffrent = true;
            break;
        }
    }
    for (int i = 0; i < size; ++i) {
        if (input[i] != input[size - i - 1]) {
            input_is_palindrom = false;
            break;
        }
    }
    std::cout << "Длина максимальной непалиндромной подстроки: ";
    if (!input_is_palindrom) {
        std::cout << size;
    }
    else if (is_diffrent) {
        std::cout << size - 1;
    }
    else {
        std::cout << 1;
    }
    return 0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long long exit = 0;
    while(true) {
        solve_7();
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