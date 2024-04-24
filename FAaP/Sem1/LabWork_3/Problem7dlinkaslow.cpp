#include <iostream>
#include <cmath>
short PI[1600] = {0, 0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7,9,5,0,2,8,8,4,1,9,7,1,6,9,3,9,9,3,7,5,1,0,5,8,2,0,9,7,4,9,4,4,5,9,2,3,0,7,8,1,6,4,0,6,2,8,6,2,0,8,9,9,8,6,2,8,0,3,4,8,2,5,3,4,2,1,1,7,0,6,7,9,8,2,1,4,8,0,8,6,5,1,3,2,8,2,3,0,6,6,4,7,0,9,3,8,4,4,6,0,9,5,5,0,5,8,2,2,3,1,7,2,5,3,5,9,4,0,8,1,2,8,4,8,1,1,1,7,4,5,0,2,8,4,1,0,2,7,0,1,9,3,8,5,2,1,1,0,5,5,5,9,6,4,4,6,2,2,9,4,8,9,5,4,9,3,0,3,8,1,9,6,4,4,2,8,8,1,0,9,7,5,6,6,5,9,3,3,4,4,6,1,2,8,4,7,5,6,4,8,2,3,3,7,8,6,7,8,3,1,6,5,2,7,1,2,0,1,9,0,9,1,4,5,6,4,8,5,6,6,9,2,3,4,6,0,3,4,8,6,1,0,4,5,4,3,2,6,6,4,8,2,1,3,3,9,3,6,0,7,2,6,0,2,4,9,1,4,1,2,7,3,7,2,4,5,8,7,0,0,6,6,0,6,3,1,5,5,8,8,1,7,4,8,8,1,5,2,0,9,2,0,9,6,2,8,2,9,2,5,4,0,9,1,7,1,5,3,6,4,3,6,7,8,9,2,5,9,0,3,6,0,0,1,1,3,3,0,5,3,0,5,4,8,8,2,0,4,6,6,5,2,1,3,8,4,1,4,6,9,5,1,9,4,1,5,1,1,6,0,9,4,3,3,0,5,7,2,7,0,3,6,5,7,5,9,5,9,1,9,5,3,0,9,2,1,8,6,1,1,7,3,8,1,9,3,2,6,1,1,7,9,3,1,0,5,1,1,8,5,4,8,0,7,4,4,6,2,3,7,9,9,6,2,7,4,9,5,6,7,3,5,1,8,8,5,7,5,2,7,2,4,8,9,1,2,2,7,9,3,8,1,8,3,0,1,1,9,4,9,1,2,9,8,3,3,6,7,3,3,6,2,4,4,0,6,5,6,6,4,3,0,8,6,0,2,1,3,9,4,9,4,6,3,9,5,2,2,4,7,3,7,1,9,0,7,0,2,1,7,9,8,6,0,9,4,3,7,0,2,7,7,0,5,3,9,2,1,7,1,7,6,2,9,3,1,7,6,7,5,2,3,8,4,6,7,4,8,1,8,4,6,7,6,6,9,4,0,5,1,3,2,0,0,0,5,6,8,1,2,7,1,4,5,2,6,3,5,6,0,8,2,7,7,8,5,7,7,1,3,4,2,7,5,7,7,8,9,6,0,9,1,7,3,6,3,7,1,7,8,7,2,1,4,6,8,4,4,0,9,0,1,2,2,4,9,5,3,4,3,0,1,4,6,5,4,9,5,8,5,3,7,1,0,5,0,7,9,2,2,7,9,6,8,9,2,5,8,9,2,3,5,4,2,0,1,9,9,5,6,1,1,2,1,2,9,0,2,1,9,6,0,8,6,4,0,3,4,4,1,8,1,5,9,8,1,3,6,2,9,7,7,4,7,7,1,3,0,9,9,6,0,5,1,8,7,0,7,2,1,1,3,4,9,9,9,9,9,9,8,3,7,2,9,7,8,0,4,9,9,5,1,0,5,9,7,3,1,7,3,2,8,1,6,0,9,6,3,1,8,5,9};

void move_left(short res[], short arr[], int pos) {
    for (int i = pos; i < 1600; ++i) {
        res[i - pos] = arr[i];
    }
    for (int i = 800 - pos; i < 1600; ++i) {
        res[i] = 0;
    }
}

void move_right(short res[], short arr[], int pos) {
    for (int i = 0; i < pos; ++i) {
        res[i] = 0;
    }
    for (int i = 1599; i >= pos; --i) {
        res[i] = arr[i - pos];
    }
}

void normalize(short arr[]) {
    for (int i = 1599; i >= 1; --i) {
        arr[i - 1] += arr[i] / 10;
        arr[i] %= 10;
    }
}

void dig_on_arr(short res[], short arr[], int dig) {
    for (int i = 0; i < 1600; ++i) {
        res[i] = arr[i] * dig;
    }
    normalize(res);
}

void summ(short sum[], short arra[], short arrb[]) {
    for (int i = 0; i < 1600; ++i) {
        sum[i] = (arra[i] + arrb[i]);
    }
    normalize(sum);
}

void minus(short minus[], short arra[], short arrb[]) {
    for (int i = 1599; i >= 1; --i) {
        if (arra[i] >= arrb[i]) {
            minus[i] = arra[i] - arrb[i];
        }
        else {
            minus[i] = arra[i] - arrb[i] + 10;
            minus[i - 1] -= 1;
        }
    }
    normalize(minus);
}

void multiply(short mult[], short arra[], short arrb[]) {
    short res[1600] = { 0 };
    for (int i = 799; i >= 0; --i) {
        for (int j = 0; j < 1600; ++j) {
            res[j] = 0;
        }
        dig_on_arr(res, arra, arrb[i]);
        move_left(res, res, (799 - i));
        summ(mult, res, mult);
    }
    for (int i = 800; i < 1600; ++i) {
        for (int j = 0; j < 1600; ++j) {
            res[j] = 0;
        }
        dig_on_arr(res, arra, arrb[i]);
        move_right(res, res, i - 799);
        summ(mult, res, mult);
    }
    normalize(mult);
}

void print(short arr[]) {
    bool was_dig = false;
    for (int i = 0; i < 800; ++i) {
        if (!was_dig) {
            if (arr[i] != 0) {
                was_dig = true;
                std::cout << arr[i];
            }
        }
        else {
            std::cout << arr[i];
        }
    }
    if (!was_dig) {
        std::cout << 0;
    }
    was_dig = false;
    int last_dig = 0;
    for (int i = 1599; i >= 800; --i) {
        if (arr[i] != 0) {
            std::cout << '.';
            was_dig = true;
            last_dig = i;
            break;
        }
    }
    for (int i = 800; i <= last_dig; ++i) {
        if (was_dig) {
            std::cout << arr[i];
        }
    }
}

long double arr_to_num(short arr[]) {
    long double ans = 0, cur_ten_pow = 1;
    for (int i = 799; i >= 0; --i) {
        ans += cur_ten_pow * arr[i];
        cur_ten_pow *= 10;
    }
    cur_ten_pow = 0.1;
    for (int i = 800; i < 1600; ++i) {
        ans += cur_ten_pow * arr[i];
        cur_ten_pow /= 10;
    }
    return ans;
}

void str_to_arr(char str[], short arr[]) {
    int dot_pos = 0, e_pos = 1600, exponent = 1, ten_pow = 1, end_of_exp = 1600, exp_sign = 1, r_e_pos = e_pos;
    for (int j = 0; j < 1600; ++j) {
        if (str[j] == '\000') {
            str[j] = '=';
            e_pos = j;
            r_e_pos = e_pos;
            end_of_exp = j;
            dot_pos = j;
            break;
        }
    }

    for (int i = 0; i < 1600; ++i) {
        if (str[i] == 'e' || str[i] == 'E') {
            e_pos = i;
            r_e_pos = e_pos;
            if (str[i + 1] == '-') {
                exp_sign = -1;
                ++e_pos;
                exponent = 0;
            }
            break;
        }
    }
    dot_pos = r_e_pos;

    for (int i = 0; i < 1600; ++i) {
        if (str[i] == '.') {
            dot_pos = i;
            break;
        }
    }

    for (int i = 0; i < dot_pos; ++i) {
        arr[799 - i] = (short)(str[dot_pos - i - 1] - '0');
    }

    for (int i = dot_pos + 1; i < r_e_pos; ++i) {
        arr[800 + i - dot_pos - 1] = (short)(str[i] - '0');
    }

    for (int i = 1599; i > e_pos; --i) {
        if (str[i] != '=') {
            end_of_exp = i;
            break;
        }
    }

    for (int i = end_of_exp; i > e_pos; --i) {
        exponent += ten_pow * ((short) (str[i] - '0'));
        ten_pow *= 10;
    }
    exponent *= exp_sign;
    if (exponent > 0) {
        move_left(arr, arr, exponent - 1);
    }
    else {
        move_right(arr, arr, -exponent);
    }
}

bool first_greater(short a[], short b[]) {
    for (int i = 0; i < 1600; ++i) {
        if (a[i] > b[i]) {
            return true;
        } else if (a[i] < b[i]) {
            return false;
        }
    }
    return false;
}

int main() {
//    print(PI);
    long double x, sinx = 0, cosx = 0, factorial = 1, curr_step, firstx;
    short x_arr[1600] = {0}, x_over_ten[1600] = {0}, x_over_ten_on_pi[1600] = {0}, ten[1600] = {0};
    ten[798] = 1;
    char x_str[1600];
    for (int i = 0; i < 1600; ++i) {
        x_str[i] = '=';
    }
    std::cin >> x_str;
    str_to_arr(x_str, x_arr);
    firstx = arr_to_num(x_arr);
    dig_on_arr(PI, PI, 2);

    while (first_greater(x_arr, ten)) {
        for (int i = 0; i < 1600; ++i) {
            if (i < 799) {
                x_over_ten[i] = x_arr[i];
            }
            else {
                x_over_ten[i] = 0;
            }
        }
        move_right(x_over_ten, x_over_ten, 1);
        for (int i = 0; i < 1600; ++i) {
            x_over_ten_on_pi[i] = 0;
        }
        multiply(x_over_ten_on_pi, x_over_ten, PI);
        minus(x_arr, x_arr, x_over_ten_on_pi);
    }
    x = arr_to_num(x_arr);

    curr_step = 1;
    for (int i = 1; i < 1000; i++) {
        cosx += curr_step / (factorial / (2 * i - 1));
        curr_step *= x;
        sinx += curr_step / factorial;
        curr_step *= -x;
        factorial *= 2 * i * (2 * i + 1);
    }
    std::cout << "x: " << firstx << "   calc x: " << x <<"\nsin: " << sinx << "    cmath sin: " << sinl(firstx) <<'\n' << "cos: " << cosx << "    cmath cos: " << cosl(firstx) << '\n';
    return 0;
}