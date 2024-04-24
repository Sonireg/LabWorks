#include <iostream>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505. Вчислить а^0-2а^1+4а^2-8а^3+...+2^(n-1)*(-1)^(n-1)a^(n-1)\n";
    while (true) {
        long double requestsd, ad;
        long long curr_pow_of_2 = 1, a, requests, summ = 0;
        std::cout << "Введите количестыо членов суммы: " << '\n';
        while (true) {
            if ((std::cin >> requestsd).good() && (long long) requestsd == requestsd && requestsd > 0 && std::cin.peek() == '\n')
                break; //если введено ЦЕЛОЕ ЧИСЛО выходим из цикла
            else {
                std::cin.clear(); // очищаем поток
                std::cout
                        << "Упс, вы ввели что-то не то. Пожалуйста, введите натуральное число - количество членов суммы: \n";
                std::cin.ignore(100000000000,  '\n'); // убираем все непрочитанные символы из входного потока
            }
        }
        std::cout << "Введите a:\n";
        while (true) {
            if ((std::cin >> ad).good() && (long long) requestsd == requestsd && requestsd > 0)
                break; //если введено ЦЕЛОЕ ЧИСЛО выходим из цикла
            else {
                std::cin.clear(); // очищаем поток
                std::cout
                        << "Упс, вы ввели что-то не то. Пожалуйста, введите натуральное число - количество членов суммы: \n";
                std::cin.sync(); // убираем все непрочитанные символы из входного потока
            }
        }
        a = (long long) ad;
        requests = (long long) requestsd;
        for (int i = 0; i < requests; i++) {
            summ += curr_pow_of_2;
            curr_pow_of_2 *= -2 * a;
        }
        std::cout << "Искомая сумма: " << summ << '\n';
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