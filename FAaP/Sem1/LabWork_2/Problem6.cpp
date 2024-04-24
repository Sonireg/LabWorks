#include <iostream>
#include <iomanip>

int main() {
    long double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << std::setprecision(20);
    if (c == 0) {
        std::cout << "ERROR";
    }
    else if (c >= d && a < d) {
        std::cout  << a + b / c;
    }
    else if (c < d && a >= d) {
        std::cout <<  a - b / c;
    }
    else std::cout << 0;
    return 0;
}