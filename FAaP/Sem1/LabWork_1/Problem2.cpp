#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    long double hight;
    std::cin >> hight;
    std::cout << std::setprecision(9) << "Time of falling is: " << sqrt(2 * hight / (9.8));
    return 0;
}
