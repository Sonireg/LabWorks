#include <iostream>
#include <string>
#include <windows.h>

const char digits[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A',
                         'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                         'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                         'V', 'W', 'X','Y', 'Z'};

bool is_good_in_base(int base, std::string num) {
    bool was_minus = false;
    if (num.at(0) == '-' && num.size() > 1) was_minus = true;
    else if (num.at(0) == '-' && num.size() == 1) return false;
    for (int i = was_minus ? 1 : 0; i < num.size(); ++i) {
        if ((num.at(i) >= digits[base] || num.at(i) < '0') && num.at(i) != '\n' && num.at(i)) {
            return false;
        }
    }
    return true;
}

std::string get_num_in_base(int base) {
    std::string num;
    while (true) {
        std::getline(std::cin, num);
        if (is_good_in_base(base, num)) break;
        else std::cout << "Введите корректное число в желаемой системе счисления\n";
    }
    return num;
}

int get_index_of_simbol(char simbol) {
    for (int i = 0; i < 36; ++i) {
        if (digits[i] == simbol) return i;
    }
    return -1;
}

std::string get_inversed_in_base(std::string num, int base) {
    std::string ans;
    int curr_dig_index = 0;
    for (char &simbol : num) {
        curr_dig_index = get_index_of_simbol(simbol);
        ans += digits[base - curr_dig_index - 1];
    }
    return ans;
}

std::string add_first_dig(std::string num, unsigned long long amount) {
    std::string ans(amount,num.at(0));
    return ans + num;
}

void make_same_size(std::string &num1, std::string &num2) {
    if (num1.size() > num2.size()) num2 = add_first_dig(num2, num1.size() - num2.size());
    else if (num2.size() > num1.size()) num1 = add_first_dig(num1, num2.size() - num1.size());
}

void add_chars_in_base(char& result, char num1, char num2, char& perehod, int base) {
    int num1_index = get_index_of_simbol(num1), num2_index = get_index_of_simbol(num2), perehod_index = get_index_of_simbol(perehod);
    result = digits[(num1_index + num2_index + perehod_index) % base];
    perehod = digits[(num1_index + num2_index + perehod_index) / base];
}

std::string reverse_string(std::string str) {
    std::string ans;
    for (int i = str.size() - 1; i >= 0; --i) ans += str.at(i);
    return ans;
}

std::string add_in_base(std::string num1, std::string num2, int base) {
    std::string reversed_ans;
    char perehod = '0', curr_result = '0';
    make_same_size(num1, num2);
    for (int i = num1.size() - 1; i >= 0; --i) {
        add_chars_in_base(curr_result, num1.at(i), num2.at(i), perehod, base);
        reversed_ans += curr_result;
    }
    std::string ans = reverse_string(reversed_ans);
    return ans;
}

std::string get_dop_code_in_base(std::string num, int base) {
    std::string dop_code;
    if (num.at(0) != '-') dop_code = "00" + num;
    else {
        dop_code += digits[base - 1];
        dop_code += digits[base - 1];
        dop_code += add_in_base(digits[base - 1] + get_inversed_in_base(num.substr(1), base), "01", base);
    }
    return dop_code;
}

bool is_decimal_dig(char s) {
    return s >= '0' && s <= '9';
}

int get_base() {
    std::string input;
    while (true) {
        std::getline(std::cin, input);
        if (input.size() == 1 && is_decimal_dig(input.at(0)) && input.at(0) - '0' > 1) return input.at(0) - '0';
        if (input.size() == 2 && is_decimal_dig(input.at(0)) && is_decimal_dig(input.at(1))) return input.at(1) - '0' + (input.at(0) - '0') * 10;
        std::cout << "Введите то, что просили:\n";
    }
}

void print_in_base(std::string num, int base) {
    std::string output;
    if (num.at(0) == digits[base - 1]) {
        output = add_in_base(get_inversed_in_base(num, base), "01", base);
        std::cout << '-';
    }
    else output = num.substr(1);
    bool was_start = false;
    for (char &simbol : output) {
        if (was_start) std::cout << simbol;
        else if (simbol != '0') {
            std::cout << simbol;
            was_start = true;
        }
    }
    if (!was_start) std::cout << 0;
    std::cout << '\n';
}

std::string minus_in_base(std::string num1, std::string num2, int base) {
    return add_in_base(get_dop_code_in_base(num1, base), get_dop_code_in_base(num2.at(0) == '-' ? num2.substr(1) : '-' + num2, base), base);
}

void solve3(){
    std::string num1, num2;
    std::cout << "Введите основание системы счисления (в десятичной системе):\n";
    int base = get_base();
    std::cout << "Введите первое число:\n";
    num1 = get_num_in_base(base);
    std::cout << "Введите второе число:\n";
    num2 = get_num_in_base(base);
    std::cout << "Сумма:\n";
    print_in_base(add_in_base(get_dop_code_in_base(num1, base), get_dop_code_in_base(num2, base), base), base);
    std::cout << "Разность:\n";
    print_in_base(add_in_base(get_dop_code_in_base(num1, base), get_dop_code_in_base(num2.at(0) == '-' ? num2.substr(1) : '-' + num2, base), base), base);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Задание 3. Сложить и вычесть два числа в произвольной системе счисления.\n";
    while (true) {
        solve3();
        std::string exit_input;
        std::cout << "Если вы хотите ввести ещё контрольные значения, введите 1, иначе 0:\n";
        std::getline(std::cin, exit_input);
        if (exit_input == "0") return 0;
        else if (exit_input != "1") std::cout << "Введите 0 или 1:\n";
    }
}
