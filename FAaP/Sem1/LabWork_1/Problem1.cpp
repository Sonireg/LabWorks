#include <iostream>

int main() {
    long double x;
    std::cin >> x;
    long double help = 23 * x * x;
    long double summ1 = x * (help + 32);
    long double summ2 = 3 * help + 8;
    std::cout << summ1 + summ2 << " " << summ2 - summ1;
    return 0;
}
