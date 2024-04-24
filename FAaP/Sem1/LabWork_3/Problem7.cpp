#include <iostream>
#include <windows.h>
#include <cmath>

long double mod(long double x) {
    return x >= 0 ? x : -x;
}

long double min(long double x , long double y) {
    if (x < y) {
        return x;
    }
    else {
        return y;
    }
}



int main() {
    SetConsoleOutputCP(CP_UTF8);
        std::cout << "Выполнил задание Могилевец Денис 353505 Вариант 1. Из величин, определяемых выражениями a = sinx, b = cosx, c = ln|x|\nпри"
               " заданном х, определить и вывести на экран дисплея минимальное значение.\n"
               "Использование стандартных математических методов запрещено.\n";
    while (true) {
        long double x, sinx = 0, cosx = 0, lnx = -10000000000, factorial = 1, curr_step, ln2 = 0.6931471805599;
        const long double PI2 = 6.28318530717958647692;
        std::cout << "Пожалуйста, введите одно действительное число:\n";
        while (true) {
            std::cin >> x;
            if (std::cin.peek() == '\n' && x != 0) break;
            else {
                std::cin.clear(); // очищаем поток
                std::cout << "Упс, вы ввели что-то не то. Пожалуйста, введите одно действительное число x (не ноль): \n";
                std::cin.ignore(100000000000,  '\n'); // убираем все непрочитанные символы из входного потока
            }
        }
        long long lncnt = 0;
        long double firstx = x;
        x = mod(x);
        if (x != 0) {
            lnx = 0;
            if (x > 1) {
                while (mod(x) > 1) {
                    x /= 2;
                    ++lncnt;
                }
            } else {
                while (mod(x) < 1) {
                    x *= 2;
                    ++lncnt;
                }
            }
        }
        curr_step = x - 1;
        for (long long i = 1; i < 1000000; i++) {
            lnx += curr_step / i;
            curr_step *= -(x - 1);
        }
        if (mod(firstx) > 1) lnx += lncnt * ln2;
        else lnx -= lncnt * ln2;
        curr_step = 1;
        x = firstx;


        for (int i = 1; i < 1000; i++) {
            cosx += curr_step / (factorial / (2 * i - 1));
            curr_step *= x;
            sinx += curr_step / factorial;
            curr_step *= -x;
            factorial *= 2 * i * (2 * i + 1);
        }
        long double minimum = min(min(lnx, cosx), sinx);
        if (mod(minimum - lnx) < 1E-5) {
            if (lnx != 0) std::cout << "Минимум это ln(" << firstx << ") = " << lnx << '\n';
            else std::cout << "Минимум это ln(" << firstx << ") = " << 0 << '\n';
        }
        else if (mod(minimum - sinx) < 1E-5) {
            std::cout << "Минимум это sin(" << firstx << ") = " << sinx << '\n';
        }
        else {
            std::cout << "Минимум это cos(" << firstx << ") = " << cosx << '\n';
        }
        std::cout << "x: " << x << "\nsin: " << sinx << " cmath sin: " << sinl(firstx) <<'\n' << "cos: " << cosx << " cmath cos: " << cosl(firstx) << '\n' << "ln: " << lnx << '\n';
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