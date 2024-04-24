#include <iostream>

int main() {
    long double X, Y, Z;
    std::cin >> X >> Y >> Z;
    if (Z - X < Y && Y - Z < X && X - Y < Z){
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}