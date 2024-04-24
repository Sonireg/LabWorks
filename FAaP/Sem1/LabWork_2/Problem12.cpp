#include <iostream>

int main() {
    long double a, b, c, x, y;
    std::cin >> a >> b >> c >> x >> y;
    if (a > 0 && b > 0 && c > 0 && x > 0 && y > 0) {
        if ((x > a && y > b) || (x > a && y > c) || (x > b && y > c) || (y > a && x > b) || (y > a && x > c) || (y > b && x > c)) {
            std::cout << "YES";
        }
        else {
            std::cout << "NO";
        }
    }
    else {
        std::cout << "Incorrect input";
    }
    return 0;
}