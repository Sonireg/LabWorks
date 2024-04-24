#include <iostream>
#include <iomanip>

int main() {
    long double acceleration, time,start_velocity;
    std::cin >> acceleration >> time >> start_velocity;
    std::cout << std::setprecision(20) << (acceleration * time * time) / 2 + start_velocity * time;
    return 0;
}
