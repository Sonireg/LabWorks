#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "Выполнил задание Могилевец Денис 353505. Дан трёхмерный динамический массив размером n^3 целых\n"
                 "неотрицательных чисел. Необходимо определить диагональ с наибольшей\n"
                 "суммой чисел. Для обхода диагоналей нельзя использовать вложенные циклы.\n";
    while (true) {
        std::cin.sync();
        long double Nd, curr;
        std::cout << "Пожалуйста, введите натуральное число - размер массива \n"
                     "(Бога ради, только не больше 1000, иначе моя винда умрёт):\n";
        while (true) {
            if ((std::cin >> Nd).good() && (long long) Nd == Nd && Nd > 0 && Nd < 1000 && (std::cin.peek() == '\n' || std::cin.peek() == ' ')) break; //если введено ЦЕЛОЕ ЧИСЛО выходим из цикла
            else {
                std::cin.clear(); // очищаем поток
                std::cout << "Упс, вы ввели что-то не то. Пожалуйста, введите натуральное число - размер магического квдрата\n";
                std::cin.sync(); // убираем все непрочитанные символы из входного потока
            }
        } // вводим N
        unsigned long long N = (long long) Nd, diagonals_sum[4];
        for (unsigned long long & i : diagonals_sum) {
            i = 0;
        }

        unsigned long long*** cube = nullptr;
        cube = (unsigned long long***) malloc(N * sizeof(unsigned long long**));
        for (unsigned long long i = 0; i < N; ++i) {
            cube[i] = (unsigned long long**) malloc(N * sizeof(unsigned long long**));
            for (unsigned long long j = 0; j < N; ++j) {
                cube[i][j] = (unsigned long long*) malloc(N * sizeof(unsigned long long**));
            }
        }//обЪявили кубик

        std::cout << "Пожалуйста, введите трёхмерный массив размером " << N << "×" << N << "×" << N << ".\n Правила ввода: сначала вводится первая строк первого слоя, слева направо,\nпотом вторая строка первого слоя и т.д. до " << N << "-ой строки. \nЗатем аналогично воодится второй, третий и т.д. слои.\n Все числа должны быть натуральными:\n";
        for (unsigned long long i = 0; i < N; ++i) {
            for (unsigned long long j = 0; j < N; ++j) {
                for (unsigned long long k = 0; k < N; ++k) {
                    if ((std::cin >> curr).good() && curr == (unsigned long long) curr && curr > 0 && (std::cin.peek() == '\n' || std::cin.peek() == ' ')) cube[i][j][k] = (unsigned long long) curr;
                    else {
                        std::cin.clear();
                        std::cout << "Упс, где-то ошибка, пожалуйста, введите корректный куб положительных целых чисел:\n";
                        std::cin.sync();
                        i = 0;
                        j = 0;
                        k = 0;
                    }
                }
            }
        }// ввели кубик

        unsigned long long i = 0, j = 0;
        while (i < N) {
            diagonals_sum[0] += cube[i][i][i];
            diagonals_sum[1] += cube[N - i - 1][i][i];
            diagonals_sum[2] += cube[i][N - i - 1][i];
            diagonals_sum[3] += cube[i][i][N - i - 1];
            ++i;
        }// нашли сумму на всех диагоналях

        unsigned long long max = diagonals_sum[0], ans = 0;
        for (i = 0; i < 4; ++i) {
            if (diagonals_sum[i] > max) {
                ans = i;
                max = diagonals_sum[i];
            }
        }// нашли максимальную

        if (ans == 0) {
            std::cout << "Диагональ с максимальной суммой начинается с элемента с индексами " << 0 << " " << 0 << " "
                      << 0 << " и заканчивается элементом с индексами " << N << " " << N << " " << N << ".\nСумма = "
                      << diagonals_sum[ans] << '\n';
        }
        else if (ans == 1) {
            std::cout << "Диагональ с максимальной суммой начинается с элемента с индексами " << 0 << " " << N << " "
                      << N << " и заканчивается элементом с индексами " << N << " " << 0 << " " << 0 << ".\nСумма = "
                      << diagonals_sum[ans] << '\n';
        }
        else if (ans == 3) {
            std::cout << "Диагональ с максимальной суммой начинается с элемента с индексами " << N << " " << 0 << " "
                      << N << " и заканчивается элементом с индексами " << 0 << " " << N << " " << 0 << ".\nСумма = "
                      << diagonals_sum[ans] << '\n';
        }
        else {
            std::cout << "Диагональ с максимальной суммой начинается с элемента с индексами " << N << " " << N << " "
                      << 0 << " и заканчивается элементом с индексами " << 0 << " " << 0 << " " << N << ".\nСумма = "
                      << diagonals_sum[ans] << '\n';
        }// выводим ответ

        for (i = 0; i < N; ++i) {
            for (j = 0; j < N; ++j) {
                free(cube[i][j]);
                cube[i][j] = nullptr;
            }
            free(cube[i]);
            cube[i] = nullptr;
        }
        free(cube);
        cube = nullptr; //удаляем кубик

        std::cout << "\nЕсли вы хотите ввести ещё контрольные значения введите что угодно и нажмите Enter,\nдля завершения программы введите exit и нажмите Enter:\n";
        char ex[4] = {',',',',',', ','};
        std::cin >> ex;
        std::cin.sync();
        std::cin.clear();
        if (ex[0] == 'e' && ex[1] == 'x' && ex[2] == 'i' && ex[3] == 't') {
            break;
        }
    }
    return 0;
}