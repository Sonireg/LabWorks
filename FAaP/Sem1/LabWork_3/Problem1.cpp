#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Выполнил задание Могилевец Денис 353505. Необходимо вычислить сумму от i = 1 до i = 30\n(ai - bi)^2, где ai = i, bi = i^2, если i нечётное, ai = i / 2, bi = i^3 если i  чётное.\n";
    long double ans = 0;
    long long curr = 1;
    while (curr != 30) {
        if (curr % 2) {
            ans += (curr - curr * curr) * (curr - curr * curr);
        }
        else {
            ans += (curr / 2 - curr * curr * curr) * (curr / 2 - curr * curr * curr);
        }
        curr++;
    }
    std::cout << "Искомая сумма: " << ans;
    return 0;
}
