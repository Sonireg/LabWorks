#include <iostream>

long long factorial(long long n){
    return n == 0 ? 1 : n * factorial(n - 1);
}

long long solve_6(std::istream& input) {
    long long ans = 0;
    char str[100] = "...................................................................................................";
    input >> str;
    long long size = 0;
    while (str[size + 1] != '.') {
        ++size;
    }
    int letters[26] = {};
    for (int i = 0; i < size; ++i) {
        if (str[i] <= 'Z' && str[i] >= 'A') {
            letters[str[i] - 'A'] += 1;
        }
        else {
            letters[str[i] - 'a'] += 1;
        }
    }
    ans = factorial(size);
    for (int letter : letters) {
        ans /= factorial(letter);
    }
    return ans;
}

