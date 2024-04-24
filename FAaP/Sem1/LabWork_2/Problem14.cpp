#include <iostream>
#include <cmath>

long double min(long double a, long double b) {
    if (a <= b) {
        return a;
    }
    else {
        return b;
    }
}

long double max(long double a, long double b) {
    if (a >= b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    long double W, H, x1, y1, x2, y2, w, h;
    std::cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
    if (W < x2 - x1 + w && H < y2 - y1 + h) {
        std::cout << "-1";
        return 0;
    } else {
        if (w < min(x1, x2) || w < (W - max(x1, x2)) || h < min(y1, y2) || h < (H - max(y1, y2)))
            std::cout << 0;
        else {
            long double z = w - W + max(x1, x2);
            if (z <= min(x1, x2));
            else z = 1E+100;
            long double c = w - min(x1, x2);
            if (c <= W - max(x1, x2));
            else c = 1E+100;
            long double v = h - H + max(y1, y2);
            if (v <= std::min(y1, y2));
            else v = 1E+100;
            long double b = h - min(y1, y2);
            if (b <= H - max(y1, y2));
            else b = 1E+100;
            std::cout << min(min(fabsl(z), fabsl(c)), min(fabsl(v), fabsl(b)));
        }
        return 0;
    }
}