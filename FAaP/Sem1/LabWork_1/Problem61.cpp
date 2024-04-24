#include <iostream>
#include <cmath>

int main() {
    long double D, x;
    std::cout << "Enter D: ";
    std::cin >> D;
    std::cout << "Enter x: ";
    std::cin >> x;
    long double b = x + D;
    long double A = D * x / b;
    std::cout << (A * A + b * cos(x)) / (D * D * D + A + D - b);
    return 0;
}