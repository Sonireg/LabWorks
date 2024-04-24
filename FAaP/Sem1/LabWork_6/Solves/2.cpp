#include <iostream>
#include <windows.h>
#include "../Input/Input.h"

void solve_2() {
    char curr_sim = ' ';
    long long amount_of_words = 0, one_word_cost = 0;
    std::cout << "Введите текст телеграммы:\n";
    while (curr_sim != '\n') {
        curr_sim = getchar();
        if (curr_sim == ' ') {
            ++amount_of_words;
        }
    }
    ++amount_of_words;
    std::cout << "Введите стоимость одного слова:\n";
    one_word_cost = input();
    std::cout << "Цена телеграммы: " << one_word_cost * amount_of_words << "$.\n";
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long long exit = 0;
    while(true) {
        solve_2();
        std::cout << "Чтобы выйти введите 0, чтобы повторить вводвведите 1:\n";
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