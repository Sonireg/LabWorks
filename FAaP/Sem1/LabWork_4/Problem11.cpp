#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "Выполнил задание Могилевец Денис 353505. На вход подаётся поле для игры в \"сапёр\" размером n*m символов,\n"
                 "где символ '-' означает пустое место, а символ '*' - бомбу. Требуется дополнить\n"
                 "это поле числами, как в оригинальной игре.\n";
    while (true) {
        long double Md, Nd;
        std::cout << "Пожалуйста, введите два натуральных числа меньше 1000 - размер поля, первое - количество строк в поле, второе -\nколичество столбцов в нём:\n";
        while (true) {
            if ((std::cin >> Nd).good() && (std::cin >> Md).good() && (long long) Nd == Nd && Md > 0 && (long long) Md == Md && Nd > 0 && Nd < 1000 && Md < 1000 && (std::cin.peek() == '\n' || std::cin.peek() == ' ')) break; //если введено ЦЕЛЫЕ ЧИСЛА меньше 1000 выходим из цикла
            else {
                std::cin.clear(); // очищаем поток
                std::cout << "Упс, вы ввели что-то не то. Пожалуйста, введите два натуральных числа - количество строк и столбцов поля соответсвенно:\n";
                std::cin.sync(); // убираем все непрочитанные символы из входного потока
            }
        } // вводим M и N
        long long N = (long long) Nd, M = (long long) Md;

        char** field = nullptr;
        field = (char**)malloc((N + 2) * sizeof(char*));
        for (unsigned long long i = 0; i < N + 2; ++i) {
            field[i] = (char*)malloc((M + 2) * sizeof(char));
        } // занял место в памяти для массива

        for (long long i = 0; i < N + 2; ++i) {
            for (long long j = 0; j < M + 2; ++j) {
                if (i == 0 || i == N - 1 || j == 0 || j == M - 1) field[i][j] = '-';
            }
        } //заполнил '-'-ами края

        char curr;
        std::cout << "Введите поле для игры в сапёр размером "<< N << "×" << M <<". '-' будет означать пустую клетку, а '*' будет означать бомбу:\n";
        for (long long i = 1; i < N + 1; ++i) {
            for (long long j = 1; j < M + 1; ++j) {
                if ((std::cin >> curr).good() && (curr == '-' || curr == '*')) field[i][j] = curr;
                else {
                    std::cin.clear();
                    std::cout << "Упс, где-то ошибка, пожалуйста, введите корректное поле для сапёра, где '-' - пустое поле, а '*' - бомба,\nразмер поля " <<  N << "×" << M << ":\n";
                    std::cin.sync();
                    i = 0;
                    j = 0;
                }
            }
        } //считал массив

        char neighbor_bomb;
        for (long long i = 1; i < N + 1; ++i) {
            for (long long j = 1; j < M + 1; ++j) {
                neighbor_bomb = 0;
                if (field[i][j] == '-') {
                    for (int di = -1; di <= 1; ++di) {
                        for (int dj = -1; dj <= 1; ++dj) {
                            if (field[i + di][j + dj] == '*') {
                                ++neighbor_bomb;
                            }
                        }
                    }//делаем по смещениям определение количества бомб среди соседей
                    field[i][j] = neighbor_bomb + '0';
                }

            }
        }//изменил на циферки

        for (long long i = 1; i < N + 1; ++i) {
            for (long long j = 1; j < M + 1; ++j) {
                std::cout << field[i][j] << ' ';
            }
            std::cout << '\n';
        }// выводим поле

        for (unsigned long long i = 0; i < N + 2; i++) {
            free(field[i]);
            field[i] = nullptr;
        }
        free(field);
        field = nullptr; //удалил массив из памяти

        std::cout << "Если вы хотите ввести ещё контрольные значения введите что угодно и нажмите Enter,\nдля завершения программы введите exit:\n";
        char ex[4] = {',',',',',', ','};
        std::cin >> ex;
        std::cin.sync();
        std::cin.clear();
        if (ex[0] == 'e' && ex[1] == 'x' && ex[2] == 'i' && ex[3] == 't') {
            break;
        } // выход из программы
    }
    return 0;
}