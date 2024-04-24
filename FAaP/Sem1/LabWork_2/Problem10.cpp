#include <iostream>
#include <cmath>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long double x1, y1, r1, x2, y2, r2, center_distance;
    std::cout << "Enter x1: " << '\n';
    std::cin >> x1;
    std::cout << "Enter y1: " << '\n';
    std::cin >> y1;
    std::cout << "Enter r1: " << '\n';
    std::cin >> r1;
    std::cout << "Enter x2: " << '\n';
    std::cin >> x2;
    std::cout << "Enter y2: " << '\n';
    std::cin >> y2;
    std::cout << "Enter R: " << '\n';
    std::cin >> r2;
    center_distance = sqrtl((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    if (center_distance >= r1 + r2) {
        std::cout << "Ни одно условие не выполнено";
    }
    else if (center_distance < r1 + r2 && center_distance > fabsl(r1 - r2)) {
        std::cout << "Фигуры пересекаются";
    }
    else if (r1 <= r2) {
        std::cout << "Да";
    }
    else if (r2 > r1) {
        std::cout << "Да, но справедливо обратное для двух фигур";
    }
    return 0;
}