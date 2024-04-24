#include <iostream>
#include <string>
#include "../InputCheck/InputBinary.h"
#include <windows.h>

std::string inverse(std::string str) {
    std::string inversed;
    for (auto &s : str) {
        inversed += s == '0' ? '1' : '0';
    }
    return inversed;
}

std::string reverse_string(std::string str) {
    std::string ans;
    for (int i = str.size() - 1; i >= 0; --i) {
        ans += str.at(i);
    }
    return ans;
}

std::string add_needed(std::string& str, unsigned long long amount, char needed) {
    std::string ans(amount, needed);
    ans += str;
    return ans;
}

void make_nums_same_size(std::string& num1st, std::string& num2st, std::string& num1, std::string& num2) {
    unsigned long long size1 = num1st.size(), size2 = num2st.size();
    if (size1 > size2) {
        num2 = add_needed(num2st, size1 - size2, num2.at(0));
        num1 = num1st;
    }
    else {
        num1 = add_needed(num1st, size2 - size1, num1.at(0));
        num2 = num2st;
    }
}

std::string add(std::string num1, std::string num2) {
    bool was_perehod = false;
    std::string reversed_sum;
    unsigned long long size1 = num1.size(), size2 = num2.size();
    make_nums_same_size(num1, num2, num1, num2);
    for (int i = std::max(size1, size2) - 1; i >= 0; --i) {
        if (was_perehod) {
            if (num1.at(i) == '1' && num2.at(i) == '1') {
                reversed_sum += '1';
                was_perehod = true;
            }
            else if (num1.at(i) == '0' && num2.at(i) == '0') {
                reversed_sum += '1';
                was_perehod = false;
            }
            else {
                reversed_sum += '0';
                was_perehod = true;
            }
        }
        else {
            if (num1.at(i) == '1' && num2.at(i) == '1') {
                reversed_sum += '0';
                was_perehod = true;
            }
            else if (num1.at(i) == '0' && num2.at(i) == '0') {
                reversed_sum += '0';
                was_perehod = false;
            }
            else {
                reversed_sum += '1';
                was_perehod = false;
            }
        }
    }
    std::string sum = reverse_string(reversed_sum);
    return sum;
}

std::string normal_form_to_dop_code(std::string bin_num) {
    std::string dop_code;
    if (bin_num.at(0) == '-') {
        dop_code = "0000000" + bin_num.substr(1);
        dop_code = '1' + add(inverse(dop_code.substr(1)), "01");
    }
    else {
        dop_code = "0000000" + bin_num;
    }
    return dop_code;
}

bool all_is_zeroes(std::string str) {
    for (char& s : str) if (s != '0') return false;
    return true;
}

void print_dop_code_as_right(std::string num) {
    if (num.at(0) == '1') {
        if (all_is_zeroes(num.substr(1))) {
            std::cout << "00";
            return;
        }
        std::cout << '1' << add(inverse(num.substr(1)), "01");
    }
    else {
        bool started = false;
        for (char& bit : num) {
            if (!started && bit != '0') {
                started = true;
                std::cout << 0 << bit;
            }
            else if (started) std::cout << bit;
        }
    }
}

void solve2() {
    std::cout << "Введите первое двоичное число в естественной форме:\n";
    std::string num1_in_normal_form = input_binary_in_normal_form();
    std::cout << "Введите второе двоичное число в естественной форме:\n";
    std::string num2_in_normal_form = input_binary_in_normal_form();
    std::string num1copy, num2copy, sum;
    num1copy = normal_form_to_dop_code(num1_in_normal_form);
    num2copy = normal_form_to_dop_code(num2_in_normal_form);
    make_nums_same_size(num1copy, num2copy, num1copy, num2copy);

    sum = add(num1copy, num2copy);
    std::cout << "Сумма в прямом коде:\n";
    print_dop_code_as_right(sum);
}

void print_start_message() {
    std::cout << "Могилевец Денис 353505. Задание 2. Найти сумму двоичных чисел, заданных в естественной форме.\n"
                 "Сложение выполнить в дополнительном коде. Ответ выразить в прямом коде.\n";
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    print_start_message();
    while (true) {
        solve2();
        std::string exit_input;
        std::cout << "\nЕсли вы хотите ввести ещё контрольные значения, введите 1, иначе 0:\n";
        while (true) {
            std::getline(std::cin, exit_input);
            if (exit_input == "0") return 0;
            else if (exit_input != "1") std::cout << "Введите 0 или 1:\n";
            else break;
        }
    }
}