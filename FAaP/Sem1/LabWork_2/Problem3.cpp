#include <iostream>

int main() {
    long long X, Y;
    long double A, B, C, K;
    std::cin >> X >> Y >> A >> B >> C >> K;
    if (X < Y) X = 0;
    else if (X > Y)  Y = 0;
    else {
        X = 0;
        Y = 0;
    }
    if ((A > B && B > C) || (A > C && C > B)) A -= K;
    else if ((B > A && A > C) || (B > C && C > A)) B -= K;
    else if ((C > A && A > B) || (C > B && B > A)) C -= K;
    std::cout << X << " " << Y << '\n' << A << " " << B << " " << C;
    return 0;
}
