#include <iostream>

int main() {
    long double a, b, c;
    int N;
    std::cout << "Enter a: " << '\n';
    std::cin >> a;
    std::cout << "Enter b: " << '\n';
    std::cin >> b;
    std::cout << "Enter c: " << '\n';
    std::cin >> c;
    std::cout << "Enter N: " << '\n';
    std::cin >> N;
    switch(N) {
        case 2:
            std::cout << b * c - a * a;
            break;
        case 56:
            std::cout << b * c;
            break;
        case 7:
            std::cout << a * a + c;
            break;
        case 3:
            std::cout << a - b * c;
            break;
        default:
            std::cout << (a + b) * (a + b) * (a + b);
            break;
    }
    return 0;
}