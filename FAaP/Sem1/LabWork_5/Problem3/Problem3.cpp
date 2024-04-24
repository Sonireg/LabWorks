#include <iostream>
#include <windows.h>
#include "../Input/Input.h"

long long min(long long a, long long b) {
    return a < b ? a : b;
}

void create_arr(long long **arr, long long *ans, long long size, long long &real_size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i][i] % 2 == 0) {
            ans[real_size] = arr[i][i];
            ++real_size;
        }
    }
}

long long mult(long long* arr, long long size) {
    long long ans = 1;
    for (int i = 0; i < size; ++i) {
        ans *= arr[i];
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
    long long ans_size = min(n,k), real_size = 0;
    auto *ans_arr = new long long[ans_size];
    create_arr(arr, ans_arr, ans_size, real_size);
    long long ans = mult(ans_arr, real_size);
    if (real_size) {
        std::cout << "Искомый массив:\n";
        for (long long i = 0; i < real_size; ++i) {
            std::cout << ans_arr[i] << ' ';
        }
        std::cout << "\nПроизведение элементов в нём:\n" << ans << '\n';
    }
    else std::cout << "На главной диагонали нет чётных элементов!\n";
    for (long long i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] ans_arr;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505. Дан двумерный динамический массив целых чисел А размерностью n × k.\n"
                 "Размерность массива ввести с клавиатуры. Значения элементов массива ввести с\n"
                 "клавиатуры. Создать динамический массив из элементов, расположенных на\n"
                 "главной диагонали матрицы и имеющих четное значение. Вычислить\n"
                 "произведение элементов динамического массива. Созданный массив и результат\n"
                 "произведения вывести на экран. Использовать функции.\n";
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