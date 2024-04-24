#include <iostream>
#include "../Input/Input.h"
#include <windows.h>

void create_arr(long long **arr, long long str, long long col, long long *ans, long long &real_size) {
    for (int i = 0; i < str; ++i) {
        for (int j = 0; j < (col + 1) / 2; ++j) {
            if (arr[i][2 * j] % 2) {
                ans[real_size] = arr[i][2 * j];
                ++(real_size);
            }
        }
    }
}

long double average(long long *arr, long long size) {
    long double ans = 0;
    for (long long i = 0; i < size; ++i) {
        ans += 1.0 * arr[i] / size;
    }
    return ans;
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

    auto **arr = new long long *[n];
    for (long long i = 0; i < n; ++i) {
        arr[i] = new long long[k];
    }

    std::cout << "Введите " << n * k << " элементов массива (количество строк - " << n << " количество столбцов -  " << k << "):\n";
    for (long long i = 0; i < n; ++i) {
        for (long long j = 0; j < k; ++j) {
            arr[i][j] = sinput();
        }
    }

    long long *ansarr = new long long [n * (k + 1)/ 2];
    long long size_of_ans = 0;
    create_arr(arr, n, k, ansarr, size_of_ans);
    long double middle = average(ansarr, size_of_ans);

    if (size_of_ans) {
        std::cout << "Искомое среднее: " << middle << "\n";
    }
    else std::cout << "В чётных столбцах нет нечётных элементов!\n";

    for (long long i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] ansarr;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505. Дан двумерный динамический массив целых чисел. Значения элементов данного массива ввести с клавиатуры."
                 "\nСоздать динамический массив из элементов, расположенных в четных столбцах данного массива и имеющих нечетное значение."
                 "\nВычислить среднее арифметическое элементов динамического массива. Вывести результат на экран. Использовать функции.\n";
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
