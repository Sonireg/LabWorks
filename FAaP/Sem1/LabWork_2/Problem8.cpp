#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cout << "If tou want to solve ax^4 + bx^2 + c = 0 enter 1, if you\nwant to solve ax^4 + bx^3 + cx^2 + bx + a = 0 enter 2, if you want to solve x^3 + px + q = 0 enter 3" << '\n';
    std::cin >> N;
    if(N == 1) {
        long double a, b, c, D, x1, x2;
        std::cout << "Enter a: " << '\n';
        std::cin >> a;
        std::cout << "Enter b: " << '\n';
        std::cin >> b;
        std::cout << "Enter c: " << '\n';
        std::cin >> c;
        if (a == 0 && b == 0 && c == 0) {
            std::cout << "All real numbers are roots";
        }
        else {
            D = (b * b) - (4 * a * c);
            if (D < 0) {
                std::cout << "No real roots";
            }
            if (a != 0) {
                x1 = (-b + sqrtl(D)) / (2 * a);
                x2 = (-b - sqrtl(D)) / (2 * a);
                if (x1 > 0) {
                    std::cout << "First real root: " << sqrtl(x1) << '\n';
                    std::cout << "Second real root: " << -sqrtl(x1) << '\n';
                    if (x2 > 0 && fabsl(x2 - x1) >= 1E-10) {
                        std::cout << "Third real root: " << sqrtl(x2) << '\n';
                        std::cout << "Fourth real root: " << -sqrtl(x2) << '\n';
                    } else if (fabsl(x2) <= 1E-10 && fabsl(x2 - x1) >= 1E-10) {
                        std::cout << "Third real root: " << sqrtl(x2) << '\n';
                    }
                } else if (fabsl(x1) <= 1E-10) {
                    std::cout << "First real root: " << sqrtl(x1) << '\n';
                } else {
                    std::cout << "No real roots" << '\n';
                }
            } else {
                if (b * c <= 0 && b != 0) {
                    x1 = sqrtl(-c / b);
                    x2 = -sqrtl(-c / b);
                    if (x1 != x2) {
                        std::cout << "First real root: " << x1 << '\n';
                        std::cout << "Second real root: " << x2 << '\n';
                    } else {
                        std::cout << "First real root: " << x1;
                    }
                } else {
                    std::cout << "No real roots" << '\n';
                }
            }
        }
    }
    else if (N == 2) {
        long double a, b, c, D, x1, x2, ans1, ans2, ans3, ans4;
        std::cout << "Enter a: " << '\n';
        std::cin >> a;
        std::cout << "Enter b: " << '\n';
        std::cin >> b;
        std::cout << "Enter c: " << '\n';
        std::cin >> c;
        D = (b * b) - (4 * a * (c - 2 * a));
        if (a == 0 && b == 0 && c == 0) {
            std::cout << "All real numbers are roots";
        }
        else {
            if (a != 0) {
                if (D < 0) {
                    std::cout << "No real roots";
                } else {
                    x1 = (-b + sqrtl(D)) / (2 * a);
                    x2 = (-b - sqrtl(D)) / (2 * a);
                    if (x1 * x1 >= 4) {
                        ans1 = (x1 + sqrtl(x1 * x1 - 4)) / 2;
                        ans2 = (x1 - sqrtl(x1 * x1 - 4)) / 2;
                        std::cout << "First real root: " << ans1 << '\n';
                        if (fabsl(ans2 - ans1) > 1E-10) {
                            std::cout << "Second real root: " << ans2 << '\n';
                        }
                        if (x2 * x2 >= 4) {
                            ans3 = (x2 + sqrtl(x2 * x2 - 4)) / 2;
                            ans4 = (x2 - sqrtl(x2 * x2 - 4)) / 2;
                            if (fabsl(ans3 - ans1) > 1E-10 && fabsl(ans4 - ans2) > 1E-10) {
                                std::cout << "Third real root: " << ans3 << '\n';
                            }
                            if (fabsl(ans4 - ans1) > 1E-10 && fabsl(ans4 - ans2) > 1E-10 && fabsl(ans4 - ans3) > 1E-10) {
                                std::cout << "Fourth real root: " << ans4 << '\n';
                            }
                        }
                    }
                    else if (x2 * x2 >= 4) {
                        ans3 = (x2 + sqrtl(x2 * x2 - 4)) / 2;
                        ans4 = (x2 - sqrtl(x2 * x2 - 4)) / 2;
                        std::cout << "First real root: " << ans3 << '\n';
                        if (fabsl(ans3 - ans4) > 1E-10) {
                            std::cout << "Second real root: " << ans4 << '\n';
                        }
                    } else {
                        std::cout << "No real roots";
                    }

                }
            }
            else {
                std::cout << "First real root: 0" << '\n';
                D = c * c - 4 * b * b;
                if (b != 0 && D >= 0) {
                    ans2 = (-c + sqrtl(D)) / (2 * b);
                    ans3 = (-c - sqrtl(D)) / (2 * b);
                    std::cout << "Second real root: " << ans2 << '\n';
                    if (fabsl(ans2 - ans3) > 1E-10) {
                        std::cout << "Third real root: " << ans3 << '\n';
                    }
                }
            }
        }

    }
    else if (N == 3) {
        long double p, q, pi = 3.1415926535;
        std::cout << "Enter p: " << '\n';
        std::cin >> p;
        std::cout << "Enter q: " << '\n';
        std::cin >> q;
        long double Q, R, S, x1, x2, x3, phi, asign, bsign, rsign, a, b;
        Q = -p / 3;
        R = q / 2;
        S = Q * Q * Q - R * R;
        if (Q != 0) {
            if (S > 0) {
                phi = acosl(R / (Q * sqrtl(Q))) / 3;
                x1 = -2 * sqrtl(Q) * cosl(phi);
                x2 = -2 * sqrtl(Q) * cosl(phi + 2 * pi / 3);
                x3 = -2 * sqrtl(Q) * cosl(phi - 2 * pi / 3);
                std::cout << "First real root: " << x1 << '\n';
                if (fabsl(x1 - x2) > 1E-10) {
                    std::cout << "Second real root: " << x2 << '\n';
                }
                if (fabsl(x3 - x2) > 1E-10 && fabsl(x3 - x1) > 1E-10) {
                    std::cout << "Third real root: " << x3 << '\n';
                }
            }
            else if (S < 0) {
                a = -q / 2 + sqrtl(-S);
                b = -q / 2 - sqrtl(-S);
                if (a > 0) {
                    asign = 1;
                }
                else if (a < 0) {
                    asign = -1;
                }
                else {
                    asign = 0;
                }
                a *= asign;
                a =  asign * cbrtl(a);
                if (b > 0) {
                    bsign = 1;
                }
                else if (b < 0) {
                    bsign = -1;
                }
                else {
                    bsign = 0;
                }
                b *= bsign;
                b = bsign * cbrtl(b);
                std::cout << "First real root: " << a + b << '\n';
            }
            else {
                if (R > 0) {
                    rsign = 1;
                }
                else if (R < 0) {
                    rsign = -1;
                }
                else {
                    rsign = 0;
                }
                R *= rsign;
                x1 = -2 * rsign * cbrtl(R);
                x2 = rsign * cbrtl(R);
                std::cout << "First real root: " << x1 << '\n';
                if (fabsl(x1 - x2) > 1E-10) {
                    std::cout << "Second real root: " << x2 << '\n';
                }
            }
        }
        else {
            std::cout << "First real root: " << -cbrtl(q) << '\n';
        }
    }
    return 0;
}