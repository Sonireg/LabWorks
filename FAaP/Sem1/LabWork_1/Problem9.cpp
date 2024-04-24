#include <iostream>

int main() {
    long long a, b;
    std::cin >> a >> b;
    std::cout << a << " " << b << '\n';
    a ^= b;
    std::cout << a << " " << b << '\n';
    b ^= a;
    std::cout << a << " " << b << '\n';
    a ^= b;
    std::cout << a << " " << b << '\n';
    return 0;
}