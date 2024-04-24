#include <iostream>

int main() {
    int h1, min1, h2, min2;
    std::cin >> h1 >> min1 >> h2 >> min2;
    int fulltime = (h2 - h1) * 60 - min1 + min2;
    std::cout << "Full time of solving is " << fulltime / 60 << " hours " << fulltime % 60 << " minutes";
    return 0;
}