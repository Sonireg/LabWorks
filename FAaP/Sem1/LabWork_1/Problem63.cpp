#include <iostream>
#include <cmath>

int main() {
    long double x, p, n, K, D;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter p: ";
    std::cin >> p;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter K: ";
    std::cin >> K;
    std::cout << "Enter D: ";
    std::cin >> D;
    long double B = cos(x);
    long double C = p-n;
    std::cout << B * B / (K * D) + B * C * C * C;
    return 0;
}

