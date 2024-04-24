#include <iostream>
//приводит к нормальному виду [0, 10] = [1, 0]
long long* norm_form(long long* arr) {
    for (int i = 39; i > 0; i--) {
        arr[i - 1] += (arr[i] / 10);
        arr[i] %= 10;
    }
    return (arr);
}
//умножает каждый элемент массива на число
long long* mass_on_dig(long long n, long long* arr) {
    for (int i = 0; i < 40; i++) {
        arr[i] *= n;
    }
    norm_form(arr);
    return(arr);
}
//поэлементно складывает два массива
long long* sum_arr(long long* arr1, long long* arr2) {
    for (int i = 0; i < 40; i++) {
        arr1[i] += arr2[i];
    }
    norm_form(arr1);
    return(arr1);
}
//сдвигает все элементы массива на n влево
long long* go_left_on_n(int n, long long* arr) {
    for (int i = n; i < 40; i++) {
        arr[i - n] = arr[i];
    }
    for (int j = 39; j > 39 - n; j--) {
        arr[j] = 0;
    }
    return(arr);
}
//причваивает массиву а массив б
long long* a_to_b(long long* arr1, long long* arr2) {
    for (int i = 0; i< 40; i++) {
        arr1[i] = arr2[i];
    }
    return(arr1);
}
int main() {
    long long N, dig_count = 0;
    std::cin >> N;
    long long first_mult[40], second_mult[40], ans_arr[40], first_mult_copy[40];
    for (int i = 0; i < 40; i++) {
        first_mult[i] = 0;
        second_mult[i] = 0;
        ans_arr[i] = 0;
        first_mult_copy[i] = 0;
    }
    if (N % 2 == 0) {
        // если N чётное делаем массив с N - 1 и N / 2
        long long Nminus = N - 1, Nhalf = N / 2;
        while (Nminus != 0) {
            second_mult[39 - dig_count] = Nminus % 10;
            dig_count++;
            Nminus /= 10;
        }
        dig_count = 0;
        while (Nhalf != 0) {
            first_mult[39 - dig_count] = Nhalf % 10;
            first_mult_copy[39 - dig_count] = first_mult[39 - dig_count];
            dig_count++;
            Nhalf /= 10;
        }
    }
    else {
        // иначе массив с N-1 / 2 и N
        long long Nminushalf = (N - 1) / 2;
        while (Nminushalf != 0) {
            second_mult[39 - dig_count] = Nminushalf % 10;
            dig_count++;
            Nminushalf /= 10;
        }
        dig_count = 0;
        while (N != 0) {
            first_mult[39 - dig_count] = N % 10;
            first_mult_copy[39 - dig_count] = first_mult[39 - dig_count];
            dig_count++;
            N /= 10;
        }
    }
    //массив на массив
    for (int i = 0; i < 40; i++) {
        a_to_b(first_mult_copy, first_mult);
        mass_on_dig(second_mult[39 - i], first_mult_copy);
        go_left_on_n(i, first_mult_copy);
        sum_arr(ans_arr, first_mult_copy);
    }
    // +1
    ans_arr[39] += 1;
    norm_form(ans_arr);
    //вывод
    bool wasdig = 0;
    for(int i = 0; i < 40; i++) {
        if (ans_arr[i] != 0) {
            wasdig = 1;
        }
        if (wasdig) {
            std::cout << ans_arr[i];
        }
    }
    return 0;
}