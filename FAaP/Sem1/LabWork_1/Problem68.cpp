#include <iostream>
#include <cmath>

int main() {
    long double x, d, C, K;
    std::cout << "Enter x: " << '\n';
    std::cin >> x;
    std::cout << "Enter d: " << '\n';
    std::cin >> d;
    std::cout << "Enter C: " << '\n';
    std::cin >> C;
    std::cout << "Enter K: " << '\n';
    std::cin >> K;
    long double A = logl(x);
    long double B = x + expl(d);
    long double ans = A + B - pow(C,2) / K;
    std::cout << ans;
    return 0;
}
