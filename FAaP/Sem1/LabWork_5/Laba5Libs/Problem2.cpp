#include <cmath>

extern "C" __declspec(dllexport) bool there_is_an_element(const long double *const arr, long long size) {
    if (size == 1) return sinl(*arr) > 0;
    else return (there_is_an_element(arr, size / 2) || there_is_an_element(arr + (size / 2), size - (size / 2)));
}