#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505, Вариант 1. "
                 "\nНеобходимо ввести с клавиатуры k - количество элементов массива. Затем, в следующей строке ввести массив из k"
                 "\nдействительных чисел. Требуется преобразовать массив следующим образом: все отрицательные элементы массива перенести в"
                 "\nначало, сохранив исходное взаимное положение, как среди отрицательных, так и среди остальных элементов массива.\n";
    while (true) {
        std::cin.sync();
        long double amount_of_membersd;
        std::cout << "Введите одно натуральное число не больше 1000 - количество элементов в массиве (если вы введёте более одного"
                     "\nудовлетворяющего числа, размером массива будет считаться первое):\n";
        while (true) {
            if ((std::cin >> amount_of_membersd).good() && (int) amount_of_membersd == amount_of_membersd && amount_of_membersd < 1000 && amount_of_membersd > 0 && std::cin.peek() == '\n')
                break; //если введено ЦЕЛОЕ ЧИСЛО меньше 1000
            else {
                std::cin.clear(); // очищаем поток
                std::cout << "Упс, вы ввели что-то не то. Пожалуйста, введите одно натуральное число не больше 1000 - количество элементов в массиве:\n";
                std::cin.sync(); // убираем все непрочитанные символы из входного потока
            }
        }
        std::cin.sync();
        auto amount_of_members = (long long) amount_of_membersd;
        long double arr[2000], ans_arr[2000];
        long double curr;
        if (amount_of_members % 100 >= 5 && amount_of_members % 100 <= 20 || (amount_of_members % 10 >= 5 && amount_of_members % 10 <= 9) || amount_of_members % 10 == 0) {
            std::cout << "Введите " << amount_of_members << " элементов массива через пробел или enter:\n";
        } else if (amount_of_members % 10 == 1) {
            std::cout << "Введите " << amount_of_members << " элемент массива через пробел или enter:\n";
        } else if (amount_of_members % 10 >= 2 && amount_of_members % 10 <= 4) {
            std::cout << "Введите " << amount_of_members << " элемента массива через пробел или enter:\n";
        } // выводим запрос на ввод

        for (int i = 0; i < amount_of_members; ++i) {
            if ((std::cin >> curr).good() && (std::cin.peek() == '\n' || std::cin.peek() == ' ')) arr[i] = curr;
            else {
                std::cin.clear();
                std::cout << "Введите ещё раз элементы массива начиная с " << i << "-го (индексация начинается с нуля):\n";
                std::cin.sync();
                --i;
            }
        }
        long long counter = 0;
        for (int i = 0; i < amount_of_members; ++i) {
            if (arr[i] < 0) {
                ans_arr[counter] = arr[i];
                counter++;
            }
        } //вводим в массив-ответ сначала отрицательные элементы
        for (int i = 0; i < amount_of_members; ++i) {
            if (arr[i] >= 0) {
                ans_arr[counter] = arr[i];
                counter++;
            }
        } // а потом все остальные
        std::cout << "Ответ: \n";
        for (int i = 0; i < amount_of_members; ++i) {
            std::cout << ans_arr[i] << " ";
        } // выводим массив-ответ
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