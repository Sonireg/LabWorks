#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505. Построить магический квадрат. Порядок квадрата задаётся\nпользователем.\n";
    while (true) {
        long double Nd;
        std::cout << "Пожалуйста, введите натуральное число - размер магического квдрата \n(Бога ради, только не больше 15000, иначе моя винда умрёт):\n";
        while (true) {
            if ((std::cin >> Nd).good() && (long long) Nd == Nd && Nd > 0 && Nd < 15000 && (std::cin.peek() == '\n' || std::cin.peek() == ' ')) break; //если введено ЦЕЛОЕ ЧИСЛО выходим из цикла
            else {
                std::cin.clear(); // очищаем поток
                std::cout << "Упс, вы ввели что-то не то. Пожалуйста, введите натуральное число - размер магического квдрата\n";
                std::cin.sync(); // убираем все непрочитанные символы из входного потока
            }
        } // вводим N
        unsigned long long N = (long long) Nd, cur_x, cur_y;
        if (N != 2) {
            unsigned long long **square = nullptr;
            square = (unsigned long long **) malloc((N + 2) * sizeof(unsigned long long *));
            for (unsigned long long i = 0; i < N; ++i) {
                square[i] = (unsigned long long *) malloc(N * sizeof(unsigned long long));
            } // занял место в памяти для квадратика


            if (N % 4 == 0) {
                for (unsigned long long i = 0; i < N; ++i) {
                    for (unsigned long long j = 0; j < N; ++j) {
                        square[i][j] = (N * i) + j + 1;
                    }
                }// заполнили каким-то г
                for (unsigned long long i = 0; i < N / 4; ++i) {
                    for (unsigned long long j = 0; j < N / 4; ++j)
                        square[i][j] = (N * N + 1) - square[i][j];
                }// поменяли левый верхний
                for (unsigned long long i = 0; i < N / 4; ++i) {
                    for (unsigned long long j = 3 * (N / 4); j < N; ++j)
                        square[i][j] = (N * N + 1) - square[i][j];
                }// поменяли правый верхний
                for (unsigned long long i = 3 * N / 4; i < N; ++i) {
                    for (unsigned long long j = 0; j < N / 4; ++j)
                        square[i][j] = (N * N + 1) - square[i][j];
                }//поменяли левый нижний
                for (unsigned long long i = 3 * N / 4; i < N; ++i) {
                    for (unsigned long long j = 3 * N / 4; j < N; ++j)
                        square[i][j] = (N * N + 1) - square[i][j];
                }//поменяли правый нижний
                for (unsigned long long i = N / 4; i < 3 * N / 4; ++i) {
                    for (unsigned long long j = N / 4; j < 3 * N / 4; ++j)
                        square[i][j] = (N * N + 1) - square[i][j];
                }//поменяли центр
            }// квадрат порядка кратного 4

            else if (N % 4 == 2) {
                for (unsigned long long i = 0; i < N; ++i) {
                    for (unsigned long long j = 0; j < N; ++j) {
                        square[i][j] = 0;
                    }
                }//заполнил квадратик ноликами
                unsigned long long left_up_neighb_cord_x = N / 2 + 1, left_up_neighb_cord_y =
                        N - 1, down_neighbor_cord_x = N / 2, down_neighbor_cord_y = 1;
                cur_x = (N / 2) / 2;
                cur_y = 0;
                square[cur_y][cur_x] = 1;
                square[cur_y + N / 2][cur_x + N / 2] = 1 + N * N / 4;
                square[cur_y][cur_x + N / 2] = 1 + N * N / 2;
                square[cur_y + N / 2][cur_x] = 1 + 3 * N * N / 4;
                for (unsigned long long i = 2; i <= N * N / 4; ++i) {
                    if (cur_x != N / 2 - 1) {
                        left_up_neighb_cord_x = cur_x + 1;
                    } else {
                        left_up_neighb_cord_x = 0;
                    }
                    if (cur_y != 0) {
                        left_up_neighb_cord_y = cur_y - 1;
                    } else {
                        left_up_neighb_cord_y = N / 2 - 1;
                    }
                    down_neighbor_cord_x = cur_x;
                    if (cur_y != N / 2 - 1) {
                        down_neighbor_cord_y = cur_y + 1;
                    } else {
                        down_neighbor_cord_y = 0;
                    }
                    if (square[left_up_neighb_cord_y][left_up_neighb_cord_x] == 0) {
                        cur_x = left_up_neighb_cord_x;
                        cur_y = left_up_neighb_cord_y;
                        square[cur_y][cur_x] = i;
                        square[cur_y + N / 2][cur_x + N / 2] = i + N * N / 4;
                        square[cur_y][cur_x + N / 2] = i + N * N / 2;
                        square[cur_y + N / 2][cur_x] = i + 3 * N * N / 4;
                    } else {
                        cur_x = down_neighbor_cord_x;
                        cur_y = down_neighbor_cord_y;
                        square[cur_y][cur_x] = i;
                        square[cur_y + N / 2][cur_x + N / 2] = i + N * N / 4;
                        square[cur_y][cur_x + N / 2] = i + N * N / 2;
                        square[cur_y + N / 2][cur_x] = i + 3 * N * N / 4;
                    }
                } // заполнил секторы A, B, C, D

                unsigned long long changer;
                for (unsigned long long i = 0; i < N / 2; ++i) {
                    for (unsigned long long j = 0; j < (N / 2) / 2; ++j) {
                        if (i != (N / 2) / 2) {
                            changer = square[i][j];
                            square[i][j] = square[i + N / 2][j];
                            square[i + N / 2][j] = changer;
                        } else {
                            changer = square[i][j + 1];
                            square[i][j + 1] = square[i + N / 2][j + 1];
                            square[i + N / 2][j + 1] = changer;
                        }
                    }
                }//поменял местами штуки с пупыркой

                for (unsigned long long i = 0; i < N / 2; ++i) {
                    for (unsigned long long j = N - (N / 2) / 2 + 1; j < N; ++j) {
                        changer = square[i][j];
                        square[i][j] = square[i + N / 2][j];
                        square[i + N / 2][j] = changer;
                    }
                }// поменялиштуки без пыпурки
            }// квадрат порядка при делении на 4 дающего 2

            else {
                for (unsigned long long i = 0; i < N; ++i) {
                    for (unsigned long long j = 0; j < N; ++j) {
                        square[i][j] = 0;
                    }
                }//заполнил квадратик ноликами
                unsigned long long left_up_neighb_cord_x = N / 2 + 1, left_up_neighb_cord_y =
                        N - 1, down_neighbor_cord_x = N / 2, down_neighbor_cord_y = 1;
                cur_x = N / 2;
                cur_y = 0;
                square[cur_y][cur_x] = 1;
                for (unsigned long long i = 2; i <= N * N; ++i) {
                    if (cur_x != N - 1) {
                        left_up_neighb_cord_x = cur_x + 1;
                    } else {
                        left_up_neighb_cord_x = 0;
                    }
                    if (cur_y != 0) {
                        left_up_neighb_cord_y = cur_y - 1;
                    } else {
                        left_up_neighb_cord_y = N - 1;
                    }
                    down_neighbor_cord_x = cur_x;
                    if (cur_y != N - 1) {
                        down_neighbor_cord_y = cur_y + 1;
                    } else {
                        down_neighbor_cord_y = 0;
                    }
                    if (square[left_up_neighb_cord_y][left_up_neighb_cord_x] == 0) {
                        cur_x = left_up_neighb_cord_x;
                        cur_y = left_up_neighb_cord_y;
                        square[cur_y][cur_x] = i;
                    } else {
                        cur_x = down_neighbor_cord_x;
                        cur_y = down_neighbor_cord_y;
                        square[cur_y][cur_x] = i;
                    }
                }
            }// квадрат нечётного порядка

            std::cout << "А вот и ваш магический квадрат размером " << N << "×" << N << ":\n";

            for (long long i = 0; i < N; ++i) {
                for (long long j = 0; j < N; ++j) {
                    std::cout << std::setw((int) (1 + 2 * log10(N))) << square[i][j] << ' ';
                }
                std::cout << '\n';
            }// выводим квадратик

            for (unsigned long long i = 0; i < N; i++) {
                free(square[i]);
                square[i] = nullptr;
            }
            free(square);
            square = nullptr; //удалил массив из памяти
        }
        else {
            std::cout << "Извините, магический кадрат 2×2 не существует :(\n";
        }
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