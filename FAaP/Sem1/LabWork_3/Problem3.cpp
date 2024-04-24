#include <iostream>
#include <cmath>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long double A = 0, B = acos(-1) / 2, M = 20, x;
    x = A;
    std::cout << "Составить программу вычисления значений функции y=sin(x)-cos(x) на отрезке [A, B] в точках\nXi = A + i*H, где H=(B-A)/M, где M=20, A=0, B=pi/2.\n";
    for (int i = 0; i <= M; i++) {
        std::cout << "sin(" << x << ") - cos(" << x << ") = " << sinl(x) - cosl(x) << '\n';
        x += (B - A) / M;
    }
    return 0;
}