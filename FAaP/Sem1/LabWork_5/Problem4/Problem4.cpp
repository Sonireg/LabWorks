#include <iostream>
#include "../Input/Input.h"
#include <windows.h>

void calculate_zeroes(long double **arr, long long str, long long col, long long &counter, long long* positions) {
    for (int i = 0; i < str; ++i) {
        for (int j = 0; j < col; ++j) {
            if (arr[i][j] == 0) {
                positions[2 * counter] = i;
                positions[2 * counter + 1] = j;
                ++counter;
            }
        }
    }
}

void solve() {
    long long n, k;
    std::cout << "Введите количество строк в массиве:\n";
    n = input("Упс, вы ввели что-то не то. Пожалуйставведите одно натуральное число - количество строк в массиве (<= 100):");
    while (n > 100) {
        std::cout << "Введите число не больше 100, количество строк в массиве:\n";
        n = input("Упс, вы ввели что-то не то. Пожалуйставведите одно натуральное число - количество строк в массиве (<= 100):");
    }
    std::cout << "Введите количество столбцов в массиве:\n";
    k = input("Упс, вы ввели что-то не то. Пожалуйставведите одно натуральное число - количество столбцов в массиве (<= 100):");
    while (k > 100) {
        std::cout << "Введите число не больше 100, количество столбцов в массиве:\n";
        k = input("Упс, вы ввели что-то не то. Пожалуйставведите одно натуральное число - количество столбцов в массиве (<= 100):");
    }

    auto **arr = new long double *[n];
    for (long long i = 0; i < n; ++i) {
        arr[i] = new long double[k];
    }

    std::cout << "Введите " << n * k << " элементов массива (количество строк - " << n << " количество столбцов -  " << k << "):\n";
    for (long long i = 0; i < n; ++i) {
        for (long long j = 0; j < k; ++j) {
            arr[i][j] = linput();
        }
    }

    long long *positions = new long long[2 * n * k];
    long long amount_of_zeros = 0;
    calculate_zeroes(arr, n, k, amount_of_zeros, positions);

    if (amount_of_zeros) {
        std::cout << "Количество нулей в массиве: " << amount_of_zeros << '\n';
        std::cout << "Позиции нулей:\n";
        for (long long i = 0; i < amount_of_zeros; ++i) {
            std::cout << positions[2 * i] << ", " << positions[2 * i + 1] << '\n';
        }
    }
    else std::cout << "В массиве нет нулей!\n";
    std::cout << "Элементы массива в обратном порядке:\n";
    for (long long i = n - 1; i >= 0; --i) {
        for (long long j = k - 1; j >= 0; --j) {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << "\n";
    }
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] positions;
}


int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505. Создать двумерный динамический массив вещественных чисел. Определить,\n"
                 "встречаются ли среди них элементы с нулевым значением. Если встречаются такие элементы, то определить их индексы\n"
                 "и общее количество. Переставить элементы этого массива в обратном порядке и вывести на экран.\n"
                 "Использовать функции.\n";
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