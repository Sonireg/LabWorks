#include <iostream>
#include "../Input/Input.h"
#include "../Problem1/lib/lib.h"
#include <windows.h>

void solve() {
    long long n;
    std::cout << "Введите одно натуральное число, размер массивов:\n";
    n = input("Упс, вы ввели что-то не так. Пожалуйста, введите одно натуральное число - размер массивов:");
    if (n > 0) {

    }
    long double *a = new long double[n];
    long double *b = new long double[n];
    for (int i = 0; i < n; ++i) {
        std::cout << "Ведите a" << i << ":\n";
        a[i] = linput("Пожалуйста, введите корректно ai:");
    }
    for (int i = 0; i < n; ++i) {
        std::cout << "Ведите b" << i << ":\n";
        b[i] = linput("Пожалуйста, введите корректно bi:");
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (decision(a[i], b[j]) != 0)
                std::cout << "Решение уравнения " << a[i] << "x + " << b[j] << " = 0, это x = " << decision(a[i], b[j]) << "\n";
            else
                std::cout << "Решения уравнения " << a[i] << "x + " << b[j] << " = 0, не существует, значит " << decision(a[i], b[j]) << "\n";
        }
    }
    delete[] a;
    delete[] b;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Задание 1, вариант 1. Выполнил задание Могилевец Денис 353505. Составить программу для решения уравнения aix + bj = 0,"
                 "\nгде ai и bj – элементы динамических массивов, i = 0, 1, ... , 7, j = 0, 1, ... , 7. Массивы A = a0, a1, ... , a7 и"
                 "\nB = b0, b1, ... , b7 ввести с клавиатуры. При ai ≠ 0 вывести на экран результат, а при ai = 0 переменной x присвоить"
                 "\nзначение 0, которое также вывести на экран. Использовать функции, размерность массивов ввести с клавиатуры, исходные"
                 "\nданные ввести с клавиатуры.\n";
    while (true) {
        solve();
        std::cout << "Если вы хотите ввести ещё контрольные значения введите что угодно и нажмите Enter,\nдля завершения программы введите exit:\n";
        char ex[4] = {',', ',', ',', ','};
        std::cin >> ex;
        std::cin.sync();
        std::cin.clear();
        if (ex[0] == 'e' && ex[1] == 'x' && ex[2] == 'i' && ex[3] == 't') {
            break;
        }
    }
}