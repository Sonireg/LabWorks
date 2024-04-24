#include <iostream>
#include <iomanip>
#include <cmath>

long double min(long double a, long double b) {
    if (a <= b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    long double k, x, y;
    std::cin >> k >> x >> y;
    std::cout << std::setprecision(22);
    if (fabsl(x) < fabsl(k) && fabsl(y) < fabsl(k) && fabsl(k - x) < fabsl(k) && fabsl(k - y) < fabsl(k)) {
        std::cout << min(min(fabsl(x), fabsl(k - x)), min(fabsl(y), fabsl(k - y)));
    }
    else if (fabsl(x) < fabsl(k) && fabsl(k - x) < fabsl(k)) {
        std::cout << min(fabsl(y), fabsl(y - k));
    }
    else if (fabsl(y) < fabsl(k) && fabsl(k - y) < fabsl(k)) {
        std::cout << min(std::abs(x), fabsl(x - k));
    }
    else {
        std::cout << min(min(sqrtl((x - k) * (x - k)+(y - k) * (y - k)), sqrtl(x * x + y * y)), min(sqrtl((x - k) * (x - k) + y * y), sqrtl((y - k) * (y - k) + x * x)));
    }
    return 0;
}