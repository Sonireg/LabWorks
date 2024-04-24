#include <iostream>

int main() {
    long long X, Y;
    std::cin >> X >> Y;
    if ((X == 0 || Y == 0) && X != Y){
        std::cout << "YES";
        return 0;
    }
    else if (X == 0 && Y == 0){
        std::cout << "ERROR";
        return 0;
    }
    else if (X % Y == 0 || Y % X == 0){
        std::cout << "YES";
    }
    else if (X % Y != 0 && Y % X != 0){
        std::cout << "NO";
    }
    else {
        std::cout << "ERROR";
    }
    return 0;
}