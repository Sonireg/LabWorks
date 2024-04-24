#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    long double P, Q, R, pi = 3.1415926535;
    std::cout << "Enter P: " << '\n';
    std::cin >> P;
    std::cout << "Enter Q: " << '\n';
    std::cin >> Q;
    std::cout << "Enter R: " << '\n';
    std::cin >> R;
    std::cout << std::setprecision(20) << sinl((pi * Q / 180)) << '\n';
    if (R - P * sinl(pi * Q / 180 / 2) <= 1E-9) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    return 0;
}
