#include <iostream>
#include <cmath>
long double PI = 3.141592653589793;

long double mod(long double x) {
    return x >= 0 ? x : -x;
}

long double tsin(long double x);


long double tsin(long double x) {

    if (mod(x) > 2 * PI) {
        long double tret = x / 3;
        long double fix_cof = (x - 3 * tret) / 3;
        long double sinxtret = tsin(tret);
        return 3 * sinxtret - 4 * sinxtret * sinxtret * sinxtret;
    }

    else {
        long double sinx = 0, factorial = 1, curstep = x;
        for (int i = 1; i < 30; ++i) {
            sinx += curstep / factorial;
            curstep *= -x * x;
            factorial *= 2 * i * (2 * i + 1);
        }
        return sinx;
    }
}

int main() {
    long double x;
    std::cin >> x;
    std::cout << tsin(x);
}

