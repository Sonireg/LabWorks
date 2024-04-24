#include <iostream>
#include <iomanip>

int main() {
    long long first_term, hundred_term;
    std::cin >> first_term >> hundred_term;
    long long difrence = (hundred_term - first_term) / 99;
    std::cout << std::setprecision(10) << difrence << '\n' << (2 * first_term + 27 * difrence) * 28 / 2;
    return 0;
}