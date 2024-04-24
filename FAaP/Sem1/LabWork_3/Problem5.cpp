#include <iostream>
#include <cmath>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505 Вариант 1. Необходимо разложить функцию Y(x) из своего варианта в ряд S(x),\nзатем с"
                 "помощью полученного ряда найти значение функции и сравнить его со значением,\n"
                 "вычисленным с помощью стандартных функций. программа должна запросить у\n"
                 "пользователя количество членов ряда (n), затем запросить у пользователя\n"
                 "количество чисел, от которых он хочет посчитать функцию, затем пользователь\n"
                 "вводит по одному числу (x от 0.1, до 1), программа считает значение функции с\n"
                 "помощью ряда и с помощью стандартных функций и выводит оба значения.\n";
    while (true) {
        long double membersd, requestsd;
        std::cout << "Пожалуйста, введите количество членов ряда:\n";
        while (true) {
            if ((std::cin >> membersd).good() && (long long) membersd == membersd && membersd > 0 && std::cin.peek() == '\n') break; //если введено ЦЕЛОЕ ЧИСЛО выходим из цикла
            else {
                std::cin.clear(); // очищаем поток
                std::cout << "Упс, вы ввели что-то не то. Пожалуйста, введите натуральное число - количество членов ряда: \n";
                std::cin.ignore(100000000000,  '\n'); // убираем все непрочитанные символы из входного потока
            }
        } // вводим members
        std::cout << "Пожалуйста введите количесвто чисел, от которых вы хотите считать синус:\n";
        while (true) {
            if ((std::cin >> requestsd).good() && (long long) requestsd == requestsd && requestsd > 0 && std::cin.peek() == '\n') break; //если введено ЦЕЛОЕ ЧИСЛО выходим из цикла
            else {
                std::cin.clear(); // очищаем поток
                std::cout << "Упс, вы ввели что-то не то. Пожалуйста, введите натуральное число - количество запрсов: \n";
                std::cin.ignore(100000000000,  '\n'); // убираем все непрочитанные символы из входного потока
            }
        } // вводим requests

        long long members = (long long) membersd, requests = (long long) requestsd;
        long double first_x, x, calculated, factorial;
        for (int i = 1; i <= requests; i++) {
            calculated = 0;
            factorial = 1.0;
            std::cout << "Введите " << i << "-ое число для вычисления синуса (число от 0.1 до 1):\n";
            if ((std::cin >> first_x).good() && first_x >= 0.1 && first_x <= 1 && std::cin.peek() == '\n') {
                x = first_x;
                std::cout << "При вычислении с помощью cmath sin("<< first_x <<") = " << sinl(x) << '\n';
                for (int j = 1; j <= members; j++) {
                    calculated += x / factorial;
                    x *= first_x * first_x;
                    factorial *= -2 * j * (2 * j + 1);
                }
                std::cout << "При вычислении с использованием ряда Тейлора с " << members << " членами sin("<< first_x <<") = " << calculated << '\n';
            }
            else {
                std::cin.clear();
                std::cout << "Упс,вы ввели что-то не то, попробуйте ещё раз\n";
                std::cin.ignore(100000000000,  '\n');
                --i;
            }
        }
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
