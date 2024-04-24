#include <iostream>

int main() {
    long long N, curr, amount_of_digits = 0, summ = 0, curr_dig = 1;
    long double Nd;
    while (true) {
        if ((std::cin >> Nd).good() && (long long) Nd == Nd && Nd > 0 && std::cin.peek() == '\n')
            break; //если введено ЦЕЛОЕ ЧИСЛО выходим из цикла
        else {
            std::cin.clear(); // очищаем поток
            std::cout << "Упс, вы ввели что-то не то. Пожалуйста, введите натуральное число - количество членов суммы: \n";
            std::cin.ignore(100000000000,  '\n'); // убираем все непрочитанные символы из входного потока
        }
    }
    N = (long long) Nd;
    for (int i = 1; i < N; i ++) {
        curr = i;
        summ = 0;
        amount_of_digits = 0;
        while (curr != 0) {
            amount_of_digits++;
            curr /= 10;
        }
        curr = i;
        while (curr != 0) {
            curr_dig = 1;
            for (int j = 0; j < amount_of_digits; j++) {
                curr_dig *= (curr % 10);
            }
            summ += curr_dig;
            curr /= 10;
        }
        if (i == summ) {
            std::cout << i << '\n';
        }
    }
    return 0;
}
