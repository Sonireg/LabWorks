#include <iostream>
#include  <string>

bool is_01(char s) {
    return s == '1' || s == '0';
}

bool str_is_only_01(std::string str) {
    for (char &simbol : str) if(!is_01(simbol)) return false;
    return true;
}

std::string input_binary_in_direct_code(std::string announcement = "Введите корректно то, что просили:\n") {
    std::string input;
    while (true) {
        std::getline(std::cin, input);
        if (str_is_only_01(input)) return input;
        else std::cout << announcement;
    }
}

std::string input_binary_in_normal_form(std::string announcement = "Введите корректно то, что просили:\n") {
    std::string input;
    while (true) {
        std::getline(std::cin, input);
        if (str_is_only_01(input.substr(1)) && (input.at(0) == '-' || is_01(input.at(0)))) return input;
        else std::cout << announcement;
    }
}
