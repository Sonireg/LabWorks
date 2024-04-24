#include <iostream>
#include <cmath>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505 Вариант 1. Необходимо приближенно найти корень уравнения f(x) = 0 для функции из"
                 "своего варианта. Корень нужно найти по следующему алгоритму: перебираем\n"
                 "значения от начала до конца интервала с некоторым шагом и ищем значение\n"
                 "функции, минимальное по модулю. Аргумент, при котором оно достигается,\n"
                 "считаем корнем уравнения. Программа должна запросить у пользователя, на\n"
                 "сколько частей разделить область поиска корня, вычислить шаг, с которым нужно\n"
                 "проходить значения, пройти в цикле нужные значения, найти корень и вывести его.\n";
    while (true) {
        long double step, curr_x = 0, min_abs = 100, curr_y, root = 0;
        std::cout
                << "Пожалуйста, введите одно натуральное число - на сколько частей разбить интервал для поиска корня: \n";
        while (true) {
            if ((std::cin >> step).good() && (long long) step == step && std::cin.peek() == '\n')
                break; //если введено ЦЕЛОЕ ЧИСЛО выходим из цикла
            else {
                std::cin.clear(); // очищаем поток
                std::cout
                        << "Упс, вы ввели что-то не то. Пожалуйста, введите одно натуральное число - на сколько частей разбить\nинтервал для поиска корня: \n";
                std::cin.ignore(100000000000,  '\n'); // убираем все непрочитанные символы из входного потока
            }
        }
        for (int i = 0; i < step; i++) {
            curr_y = sinl(curr_x) + cosl(curr_x) - 2 * atanl(curr_x);
            if (curr_y > 0) {
                if (curr_y < min_abs) {
                    min_abs = curr_y;
                    root = curr_x;
                }
            } else {
                if (-curr_y > 0) {
                    if (-curr_y < min_abs) {
                        min_abs = -curr_y;
                        root = curr_x;
                    }
                }
            }
            curr_x += 1 / step;
        }
        std::cout << root << '\n';
        std::cout << "Если вы хотите ввести ещё контрольные значения введите что угодно и нажмите Enter,\nдля завершения программы введите exit:\n";
        char ex[4] = {',', ',', ',', ','};
        std::cin >> ex;
        std::cin.sync();
        std::cin.clear();
        if (ex[0] == 'e' && ex[1] == 'x' && ex[2] == 'i' && ex[3] == 't') {
            break;
        }
    }
    return 0;
}