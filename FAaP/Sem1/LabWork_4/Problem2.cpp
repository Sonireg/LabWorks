#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505. Вариант 1\n"
                 "Необходимо ввести матрицу размером N×M и определить количество положительных элементов расположенных ниже побочной\nдиагонали";
    while (true) {
        long double Md, Nd;
        std::cout << "\nПожалуйста, введите два натуральных числа меньше 100, первое - количество строк в матрице, второе - количество столбцов в ней:\n";
        while (true) {
            if ((std::cin >> Nd).good() && (std::cin >> Md).good() && (long long) Nd == Nd && Md > 0 && (long long) Md == Md && Nd > 0 && Nd < 100 && Md < 100  && std::cin.peek() == '\n') break; //если введено ЦЕЛЫЕ ЧИСЛА выходим из цикла
            else {
                std::cin.clear(); // очищаем поток
                std::cout << "Упс, вы ввели что-то не то. Пожалуйста, введите два натуральных числа M и N количество строк и столбцов матрицы соответсвенно:\n";
                std::cin.sync(); // убираем все непрочитанные символы из входного потока
            }
        } // вводим M и N
        long long N = (long long) Nd, M = (long long) Md, ans = 0;
        long double curr, matrix[200][200];
        std::cout << "Введите матрицу размером " << N << "×" << M << ":\n";
        for (long long i = 0; i < N; ++i) {
            for (long long j = 0; j < M; ++j) {
                if ((std::cin >> curr).good() && (std::cin.peek() == '\n' || std::cin.peek() == ' ')) matrix[i][j] = curr;
                else {
                    std::cin.clear();
                    std::cout << "Упс, где-то ошибка, пожалуйста, введите корректную матрциу действительных чисел размера" <<  N << "×" << M << ":\n";
                    std::cin.sync();
                    i = 0;
                    j = 0;
                }
            }
        }
        for (long long i = 0; i < N; ++i) {
            for (long long j = 0; j < M; ++j) {
                if ((i + j > M - 1) && matrix[i][j] > 0) ++ans;
            }
        }
        std::cout << "Количество положительных элементов ниже побочной диагонали матрицы - " << ans;
        std::cout << "\nЕсли вы хотите ввести ещё контрольные значения введите что угодно и нажмите Enter,"
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