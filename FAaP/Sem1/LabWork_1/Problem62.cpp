#include <iostream>
#include <cmath>

int main() {
    long double x, p, K, D, C;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter p: ";
    std::cin >> p;
    std::cout << "Enter K: ";
    std::cin >> K;
    std::cout << "Enter D: ";
    std::cin >> D;
    std::cout << "Enter C: ";
    std::cin >> C;
    long double A = x + sin(p);
    long double B = exp(K);
    std::cout << 1 + K * K / (2 * A * B) - B + D * C;
    return 0;
}
