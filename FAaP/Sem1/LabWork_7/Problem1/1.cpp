#include <iostream>
#include <string>
#include "../InputCheck/InputBinary.h"
#include <windows.h>

std::string inverse(std::string& str) {
    std::string inversed;
    for (auto &s : str) {
        inversed += s == '0' ? '1' : '0';
    }
    return inversed;
}

std::string get_inverse_code(std::string& bin_num) {
    std::string inverse_code;
    if (bin_num.at(0) == '0') return bin_num;
    else inverse_code = "1" + inverse(bin_num).substr(1);
    return inverse_code;
}

void solve1() {
    std::string input = input_binary_in_direct_code();
    std::cout << "Это число в обратном коде: " << get_inverse_code(input) << '\n';
}

void print_start_message() {
    std::cout << "Могилевец Денис 353505. Задание 1. Перевести числа из прямого кода в обратный.\n";
}

void print_wanted_input() {
    std::cout << "Введите двоичное число в прямом коде:\n";
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    print_start_message();
    while (true) {
        print_wanted_input();
        solve1();
        std::string exit_input;
        std::cout << "Если вы хотите ввести ещё контрольные значения, введите 1, иначе 0:\n";
        std::getline(std::cin, exit_input);
        if (exit_input == "0") return 0;
        else if (exit_input != "1") std::cout << "Введите 0 или 1:\n";
    }
}