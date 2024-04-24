#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long double summ = 0, halfs = 0.5, thirds = (1.0/3), d;
    std::cout << "Выполнил задание Могилевец Денис 353505. Необходимо вычислить сумму ряда с точностью\nдо 10^-3, общий член ряда dn = 1/2^n + 1/3^n.\n";
    do {
        d = halfs + thirds;
        halfs /= 2;
        thirds /= 3;
        summ += d;
    } while (d > 0.001);
    std::cout << "Искомая сумма: " << summ;
    return 0;
}

