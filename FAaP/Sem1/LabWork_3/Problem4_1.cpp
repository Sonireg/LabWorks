#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505. Вычислить сумму чётных чисел на промежутке от 1\nдо числа введённого пользователем.\n";
    while (true) {
        long double Nd;
        long long N, ans = 0;
        std::cout << "Пожалуйста, введите одно натуральное число до которого необходимо считать сумму чётных:\n";
        while (true) {
            if ((std::cin >> Nd).good() && (long long) Nd == Nd && Nd > 0 && std::cin.peek() == '\n')
                break; //если введено ЦЕЛОЕ ЧИСЛО выходим из цикла
            else {
                std::cin.clear(); // очищаем поток
                std::cout << "Упс, вы ввели что-то не то. Пожалуйста, введите одно натуральное число\nдо которого необходимо считать сумму чётных:\n";
                std::cin.ignore(100000000000,  '\n'); // убираем все непрочитанные символы из входного потока
            }
        }
        N = (long long) Nd;
        for (int i = 0; i <= N; i++) {
            if (i % 2 == 0) {
                ans += i;
            }
        }
        std::cout << "Искомая сумма: " << ans << '\n';
        std::cout << "Если вы хотите ввести ещё контрольные значения введите что угодно и нажмите Enter,\nдля завершения программы введите exit:\n";
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