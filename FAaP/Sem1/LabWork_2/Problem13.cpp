#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long long K;
    std::cin >> K;
    if (K % 100 >= 5 && K % 100 <= 20 || (K % 10 >= 5 && K % 10 <= 9) || K % 10 == 0) {
        std::cout << "Мы нашли " << K << " грибов в лесу";
    }
    else if (K % 10 == 1) {
        std::cout << "Мы нашли " << K << " гриб в лесу";
    }
    else if (K % 10 >= 2 && K % 10 <= 4) {
        std::cout << "Мы нашли " << K << " гриба в лесу";
    }
}
