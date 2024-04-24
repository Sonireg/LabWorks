#include <iostream>
#include <iomanip>

int main() {
    long double first_term;
    std::cin >> first_term;
    std::cout << std::setprecision(8) << first_term * 18 / 17;
    return 0;
}
