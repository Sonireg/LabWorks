#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505. Вариант 1"
                 "\nВ вещественной матрице N×N найти максимальный и минимальный элементы. Переставить строки, в которых они находятся. "
                 "\nЕсли они находятся в одной строке, выдать сообщение об этом.\n";
    while (true) {
        long double Nd;
        std::cout << "Введите одно натуральное число - размер матрицы (если вы введёте более одного\nудовлетворяющего числа, размером матрицы будет считаться первое):\n";
        while (true) {
            if ((std::cin >> Nd).good() && (long long) Nd == Nd && Nd > 0 && std::cin.peek() == '\n')
                break; //если введено ЦЕЛОЕ ЧИСЛО выходим из цикла
            else {
                std::cin.clear(); // очищаем поток
                std::cout << "Упс, вы ввели что-то не то. Пожалуйста, введите одно натуральное число размер матрицы:\n";
                std::cin.sync(); // убираем все непрочитанные символы из входного потока
            }
        } // вводим N
        std::cin.sync();
        auto N = (long long) Nd;
        long double** matrix = new long double*[N];
        for (int i = 0; i < N; ++i) {
            matrix[i] = new long double[N];
        } // объявлем двумерный массив в динамической памяти
        long double curr;
        if (N % 100 >= 5 && N % 100 <= 20 || (N % 10 >= 5 && N % 10 <= 9) || N % 10 == 0) {
            std::cout << "Введите матрциу размера " << N << "×" << N << " (в каждой строке должно быть "
            << N << " действительных чисел, всего должно быть " << N << " строк):\n";
        } else if (N % 10 == 1) {
            std::cout << "Введите матрциу размера " << N << "×" << N << " (в каждой строке должно быть "
            << N << " действительное число, всего должно быть " << N << " строка):\n";
        } else if (N % 10 >= 2 && N % 10 <= 4) {
            std::cout << "Введите матрциу размера " << N << "×" << N << " (в каждой строке должно быть "
            << N << " действительных числа, всего должно быть " << N << " строки):\n";
        } // выводим запрос на ввод
        for (long long i = 0; i < N; ++i) {
            for (long long j = 0; j < N; ++j) {
                if ((std::cin >> curr).good() && (std::cin.peek() == '\n' || std::cin.peek() == ' ')) matrix[i][j] = curr;
                else {
                    std::cin.clear();
                    std::cout << "Упс, где-то ошибка, пожалуйста, введите корректную матрциу действительных чисел размера"
                    <<  N << "×" << N << '\n';
                    std::cin.sync();
                    i = 0;
                    j = 0;
                }
            }
        } //инициализируем матрицу
        long double max = matrix[0][0], min = matrix[0][0];
        long long max_str = 0, min_str = 0;
        for (long long i = 0; i < N; ++i) {
            for (long long j = 0; j < N; ++j) {
                if (matrix[i][j] >= max) {
                    max = matrix[i][j];
                    max_str = i;
                }
                if (matrix[i][j] <= min) {
                    min = matrix[i][j];
                    min_str = i;
                }
            }
        }//ищем минимумы и их строки
        if (min_str == max_str) {
            std::cout << "Круто, последний минимальный и максимальный элементы находятся в одной строке!"
                         "\nЭто строка номер " << min_str + 1
                         << "\n""Но так и быть, вот вам ваша матрица:\n";
            for (long long i = 0; i < N; ++i) {
                for (long long j = 0; j < N; ++j) {
                    std::cout << matrix[i][j] << ' ';
                }
                std::cout << '\n';
            }// выводим матрицу
        }// если мин и макс в одной строке, то говорим об этом
        else {
            long double changer;
            for (long long i = 0; i < N; ++i) {
                changer = matrix[max_str][i];
                matrix[max_str][i] = matrix[min_str][i];
                matrix[min_str][i] = changer;
            }//меняем элементы местами
            std::cout << "Последний максимальный элемент находиля в строке с номером " << max_str + 1
            << ".\nПоследний минимальный в строке с номером " << min_str + 1
            << "\nНу а вот и матрица, где эти строки поменялись местами\n";
            for (long long i = 0; i < N; ++i) {
                for (long long j = 0; j < N; ++j) {
                    std::cout << matrix[i][j] << ' ';
                }
                std::cout << '\n';
            }// выводим матрицу
        }
        for (long long i = 0; i < N; ++i) {
            delete[] matrix[i];
            matrix[i] = nullptr;
        }
        delete[] matrix;
        matrix = nullptr; // удаляем двумерный массив из динамической памяти
        std::cout << "Если вы хотите ввести ещё контрольные значения введите что угодно,"
                     "\nдля завершения программы введите exit:\n";
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