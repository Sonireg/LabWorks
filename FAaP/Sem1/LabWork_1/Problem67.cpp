#include <iostream>
#include <cmath>

int main() {
    long double x, p, h, K, A, B, C, D;
    std::cout << "Enter x: " << '\n';
    std::cin >> x;
    std::cout << "Enter p: " << '\n';
    std::cin >> p;
    std::cout << "Enter h: " << '\n';
    std::cin >> h;
    std::cout << "Enter K: " << '\n';
    std::cin >> K;
    std::cout << "Enter C: " << '\n';
    std::cin >> C;
    std::cout << "Enter D: " << '\n';
    std::cin >> D;
    A = x - p;
    B = logl(h);
    std::cout << (0.78 * B) + ((A * A * A) / (K * C * D));
}