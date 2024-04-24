#include <iostream>
#include <chrono>

int main() {
    auto start_time = std::chrono::high_resolution_clock::now();
    long double n = 1e5;
    for (int i = 0; i < n; i++) {
        std::cout << 1;
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

    std::cout << "\nTime taken by code: " << duration.count() << " microseconds " << "TIME FOR ONE: " << duration.count() / n << std::endl;

    return 0;
}