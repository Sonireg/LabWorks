#include <iostream>

int main() {
    long double x, y;
    std::cin >> x >> y;
    x >= y ? std::cout << x : std::cout << y;
    return 0;
}