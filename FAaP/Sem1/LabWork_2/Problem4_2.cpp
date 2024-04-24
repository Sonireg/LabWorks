#include <iostream>

int main() {
    long double x, y;
    std::cin >> x >> y;
    bool x_greater = x > y;
    std::cout << x_greater * x + (!x_greater) * y;
    return 0;
}
