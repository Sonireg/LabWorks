#include <iostream>
#include <windows.h>

bool is_num(char s) {
    return s >= '0' && s <= '9';
}

bool is_good_decimal(std::string number) {
    for (auto &s : number) if (!is_num(s)) return false;
    return true;
}

std::string get_decimal_number() {
    std::string number;
    while (true) {
        std::getline(std::cin, number);
        if (is_good_decimal(number)) return number;
        else std::cout << "Введите то, что просили:\n";
    }
}

int sum(int a, int b){
    if (a == 0) return b;
    if (b == 0) return a;
    return sum(a^b, (a&b)<<1);
}

void solve6() {

}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::string n;
    while (true) {
        n = get_decimal_number();
        std::cout << n << '\n';
    }
    return 0;
}
