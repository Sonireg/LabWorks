#include <iostream>
#include "../Input/Input.h"
#include <windows.h>

void solve() {
    auto (*there_is_an_element)(const long double *const, long long) = (bool (*)(const long double *const, long long)) GetProcAddress(LoadLibrary(("../Problem2/lib/libProblem2.dll")), "there_is_an_element");
    long long n;
    std::cout << "Введите количество элементов в массиве:\n";
    n = input("Упс, вы ввели что-то не так. Пожалуйста, введите одно натуральное число - размер массива:");
    long double *arr = new long double [n];
    for (int i = 0; i < n; ++i) {
        std::cout << "Введите a" << i <<":\n";
        arr[i] = linput("Пожалуйста, введите корректное аi:");
    }
    if (there_is_an_element(arr, n)) std::cout << "Есть элемент, синус которого строго больше 0\n";
    else std::cout << "Нет элемента, синус которого строго больше нуля\n";
    delete[] arr;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис группа 353505. Для массива с заданным числом элементов определить, есть ли в нём такой"
                 "\nэлемент, синус которого строго больше 0. Количество элементов массива вводится с клавиатуры. Элементы массива вводятся с"
                 "клавиатуры. Условие проверять рекурсивно для каждой половины массива.\n";
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
    return 0;
}