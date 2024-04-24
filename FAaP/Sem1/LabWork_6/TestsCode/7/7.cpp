#include <string>

int solve_7(std::string input) {
    int size = input.size();
    bool is_diffrent = false, input_is_palindrom = true;
    for (int i = 0; i < size; ++i) {
        if (input[i] != input[0]) {
            is_diffrent = true;
            break;
        }
    }
    for (int i = 0; i < size; ++i) {
        if (input[i] != input[size - i - 1]) {
            input_is_palindrom = false;
            break;
        }
    }
    if (!input_is_palindrom) {
        size = size;
    }
    else if (is_diffrent) {
        size -= 1;
    }
    else {
        size = 1;
    }
    return size;
}