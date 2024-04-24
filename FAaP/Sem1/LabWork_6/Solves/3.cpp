#include <iostream>
#include "../Input/Input.h"
#include <windows.h>
void create_arr(char*** &arr, int strings, int columns) {
    arr = new char**[strings];
    for (int i = 0; i < strings; ++i) {
        arr[i] = new char*[columns];
        for (int j = 0; j < columns; ++j) {
            arr[i][j] = new char[100];
        }
    }
}

void print_arr(char*** arr, int strings, int columns) {
    long long cnt = 0;
    for (int i = 0; i < strings; ++i) {
        for (int j = 0; j < columns; ++j) {
            cnt = 0;
            while (arr[i][j][cnt] != '\n') {
                std::cout << arr[i][j][cnt];
                ++cnt;
            }
            std::cout << "    ";
        }
        std::cout << '\n';
    }
}

void revers_str(char* where, const char* str, int size) {
    for (int i = size - 1; i >= 0; --i) {
        where[size - i - 1] = str[i];
    }
}

long long sum_of_simbols(const char* str, long long size) {
    long long ans = 0;
    for (int i = 0; i < size; ++i) {
        ans += str[i];
    }
    return ans;
}

void del_arr(char*** &arr, int strings, int columns) {
    for (int i = 0; i < strings; ++i) {
        for (int j = 0; j < columns; ++j) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
        arr[i] = nullptr;
    }
    delete[] arr;
    arr = nullptr;
}

void solve_3() {
    long long strings = 101, columns = 101, curr_word_size = 0, curr_second_matrix_pos = 0;
    char* curr_word = new char[100], *adding_word = new char[100];
    char ***first_matrix, ***second_matrix;
    std::cout << "Введите количество строк в матрице (не больше 100):\n";
    while (strings > 100) {
        strings = input();
        if (strings > 100) {
            std::cout << "Пожалуйста, введите число поменьше:\n";
        }
    }
    std::cout << "Введите количество столбцоы в матрице (не больше 100):\n";
    while (columns > 100) {
        columns = input();
        if (columns > 100) {
            std::cout << "Пожалуйста, введите число поменьше:\n";
        }
    }

    create_arr(first_matrix, strings, columns);
    create_arr(second_matrix, strings, columns);

    for (int i = 0; i < strings; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << "Введите строку стоящую в строке с номером " << i << " и столбце с номером " << j << " (не больше 100 символов):\n";
            if (i == 0 && j == 0) {
                getchar();
            }
            for (int k = 0; k < 100; ++k) {
                first_matrix[i][j][k] = (char)getchar();
                if (first_matrix[i][j][k] == ' ' || first_matrix[i][j][k] == '\n') {
                    if (sum_of_simbols(curr_word, curr_word_size) % 2) {
                        for (int l = 0; l < curr_word_size; ++l) {
                            adding_word[l] = curr_word[l];
                        }
                        for (int l = curr_second_matrix_pos; l < curr_second_matrix_pos + curr_word_size; ++l) {
                            second_matrix[i][j][l] = adding_word[l - curr_second_matrix_pos];
                        }
                        curr_second_matrix_pos += curr_word_size;
                        second_matrix[i][j][curr_second_matrix_pos] = ' ';
                        ++curr_second_matrix_pos;
                        curr_word_size = 0;
                    }
                    else {
                        revers_str(adding_word, curr_word, curr_word_size);
                        for (int l = curr_second_matrix_pos; l < curr_second_matrix_pos + curr_word_size; ++l) {
                            second_matrix[i][j][l] = adding_word[l - curr_second_matrix_pos];
                        }
                        curr_second_matrix_pos += curr_word_size;
                        second_matrix[i][j][curr_second_matrix_pos] = ' ';
                        ++curr_second_matrix_pos;
                        curr_word_size = 0;
                    }
                }
                else {
                    curr_word[curr_word_size] = first_matrix[i][j][k];
                    ++curr_word_size;
                }
                if (first_matrix[i][j][k] == '\n') {
                    second_matrix[i][j][curr_second_matrix_pos] = '\n';
                    curr_second_matrix_pos = 0;
                    break;
                }
            }
        }
    }
    std::cout << "Первая матрица:\n";
    print_arr(first_matrix, strings, columns);
    std::cout << "Вторая матрица:\n";
    print_arr(second_matrix, strings, columns);
    del_arr(first_matrix, strings, columns);
    del_arr(second_matrix, strings, columns);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long long exit = 0;
    while(true) {
        solve_3();
        std::cout << "Чтобы выйти введите 0, чтобы повторить вводвведите 1:\n";
        exit = sinput();
        getchar();
        if (exit == 0) {
            break;
        }
        else if (exit == 1) {
            continue;
        }
        else {
            std::cout << "Неверный ввод, повотрите попытку:\n";
        }
    }
    return 0;
}