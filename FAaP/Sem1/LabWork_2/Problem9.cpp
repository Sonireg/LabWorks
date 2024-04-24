#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cout << "If you want to use f(x) = 2x enter 1,  if you want to use f(x) = x^3 enter 2, if you want to use f(x) = x/3 enter 3" << '\n';
    std::cin >> N;
    long double a, x, z;
    switch(N) {
        case 1:
            std::cout << "Enter a: " << '\n';
            std::cin >> a;
            std::cout << "Enter x: " << '\n';
            std::cin >> x;
            std::cout << "Enter z: " << '\n';
            std::cin >> z;
            if (z < 1) {
                x = z * z;
                std::cout << "a = " << a << " f(x) = 2x, x = z^2, a * ln(1 + x^1.5) + cos^2(f(x) + 1) = " << a * logl(1 + x * sqrtl(x)) + cosl(2 * x + 1) * cosl(2 * x + 1);
            }
            else {
                x = z + 1;
                std::cout << "a = " << a << " f(x) = 2x, x = z + 1, a * ln(1 + x^1.5) + cos^2(f(x) + 1) = " << a * logl(1 + x * sqrtl(x)) + cosl(2 * x + 1) * cosl(2 * x + 1);
            }
            break;
        case 2:
            std::cout << "Enter a: " << '\n';
            std::cin >> a;
            std::cout << "Enter x: " << '\n';
            std::cin >> x;
            std::cout << "Enter z: " << '\n';
            std::cin >> z;
            if (z < 1) {
                x = z * z;
                std::cout << "a = " << a << " f(x) = x^3, x = z^2, a * ln(1 + x^1.5) + cos^2(f(x) + 1) = " << a * logl(1 + x * sqrtl(x)) + cosl(x * x * x + 1) * cosl(x * x * x + 1);
            }
            else {
                x = z + 1;
                std::cout << "a = " << a << " f(x) = x^3, x = z + 1, a * ln(1 + x^1.5) + cos^2(f(x) + 1) = " << a * logl(1 + x * sqrtl(x)) + cosl(x * x * x + 1) * cosl(x * x * x + 1);
            }
            break;
        case 3:
            std::cout << "Enter a: " << '\n';
            std::cin >> a;
            std::cout << "Enter x: " << '\n';
            std::cin >> x;
            std::cout << "Enter z: " << '\n';
            std::cin >> z;
            if (z < 1) {
                x = z * z;
                std::cout << "a = " << a << " f(x) = x / 3, x = z^2, a * ln(1 + x^1.5) + cos^2(f(x) + 1) = " << a * logl(1 + x * sqrtl(x)) + cosl(x / 3  + 1) * cosl(x / 3  + 1);
            }
            else {
                x = z + 1;
                std::cout << "a = " << a << " f(x) = x / 3, x = z + 1, a * ln(1 + x^1.5) + cos^2(f(x) + 1) = " << a * logl(1 + x * sqrtl(x)) + cosl(x / 3 + 1) * cosl(x / 3 + 1);
            }
            break;
        default:
            std::cout << "Wrong input!";
    }
    return 0;
}
