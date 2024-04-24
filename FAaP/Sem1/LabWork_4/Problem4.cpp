#include <iostream>
#include <cmath>

int main() {
    long long a;
    std::cin >> a;
    auto sqra = (long long) sqrtl(a - 1);
    auto prevsquare = sqra * sqra;
    if (a <= (sqra + prevsquare)) {
        std::cout << a - prevsquare - 1 << ' ' << sqra;
    }
    else {
        std::cout << sqra << ' ' << (sqra + 1) * (sqra + 1) - a;
    }
    return 0;
}







