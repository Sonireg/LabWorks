#include <iostream>

const int max_size = 200;
const int amount_of_rows = 20001;

void devide_on_pow2(int& perehod, int* number, int n) {
    int new_value_for_dig;
    for (int i = 0; i < max_size; ++i) {
        new_value_for_dig = (perehod * 10 + number[i]) / (1 << n);
        perehod = number[i] % (1 << n);
        number[i] = new_value_for_dig;
    }
}

bool is_k_bit_0(const int* number, int k) {
    int* number_copy = new int[max_size];
    for (int i = 0; i < max_size; ++i) {
        number_copy[i] = number[i];
    }

    int perehod = 0, calc_pow = 0, divisor_pow = 1;

    for (int i = 0; i < k; i += divisor_pow) {
        divisor_pow = std::min(1, k - calc_pow);
        devide_on_pow2(perehod, number_copy, divisor_pow);
    }
    int ans = number_copy[max_size - 1] % 2;

    delete[] number_copy;
    return ans == 0;
}

void copy_numbers(int* num1, int* num2) {
    for (int j = 0; j < max_size; ++j) {
        num1[j] = num2[j];
    }
}

void print_num(int* num) {
    bool was_start = false;
    for (int i = 1; i < max_size; ++i) {
        if (was_start) {
            std::cout << num[i];
        }
        else if (num[i]) {
            std::cout << num[i];
            was_start = true;
        }
    }
    if (!was_start) std::cout << 0;
}

void fill_to_pow10(int& calculated, int& old_calculated_end, int** table, int& current_pow_of_10, int& current_bindec) {
    for (int i = 0; i <= old_calculated_end; ++i) {
        if (table[i][0] && is_k_bit_0(table[i], current_pow_of_10)) {
            ++calculated;
            ++current_bindec;
            copy_numbers(table[current_bindec], table[i]);
            table[current_bindec][max_size - current_pow_of_10 - 1] = 1;
        }
        else table[i][0] = 0;
    }
    old_calculated_end = calculated;
    ++current_pow_of_10;
}

void fill_table(int** table, int needed_num) {
    int current_pow_of_10 = 1, old_calculated = 1, calculated = 1, current_bindec = 1;
    table[1][max_size - 1] = 1;
    for (int i = 0; i < amount_of_rows; ++i) {
        table[i][0] = 1;
    }
    while (calculated < needed_num) {
        fill_to_pow10(calculated, old_calculated, table, current_pow_of_10, current_bindec);
    }
}

void delete_table(int** table) {
    for (int i = 0; i < max_size; ++i) {
        delete[] table[i];
    }
    delete[] table;
}

int main() {
    int needed_num = 0;
    std::cin >> needed_num;
    int** table = new int*[amount_of_rows];
    for (int i = 0; i < amount_of_rows; ++i) {
        table[i] = new int[max_size + 1]{};
    }
    fill_table(table, needed_num);
    print_num(table[needed_num]);
    delete_table(table);
}