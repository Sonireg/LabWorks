#include <iostream>
#include <cmath>
bool between(double what_between, double left, double right) {
    return (what_between >= left && what_between <= right) || (what_between <= left && what_between >= right);
}

void intersection(double& intersection_x, double& intersection_y, double k, double b, double x1, double y1, double x2, double y2) {
    double tan = (y2 - y1) / (x2 - x1);
    intersection_x = (b + tan * x1 - y1) / (tan - k);
    intersection_y = k * intersection_x + b;
}

void line_intersect_polygon(double polygon_x_vertexes[], double polygon_y_vertexes[], int vertexes, double k, double b, double& first_intersection_x, double& first_intersection_y, double& second_intersection_x, double& second_intersection_y, int& first_intersection, int& second_intersection) {
    bool was_intersection = false;
    for (int i = 0; i < vertexes; ++i) {
        int next = (i == vertexes - 1 ? 0 : i + 1);
        double intersection_x, intersection_y;
        intersection(intersection_x, intersection_y, k, b, polygon_x_vertexes[i], polygon_y_vertexes[i], polygon_x_vertexes[next], polygon_y_vertexes[next]);
        if (between(intersection_x, polygon_x_vertexes[i], polygon_x_vertexes[next]) && between(intersection_y, polygon_y_vertexes[i], polygon_y_vertexes[next])) {
            if (was_intersection) {
                second_intersection = i;
                second_intersection_x = intersection_x;
                second_intersection_y = intersection_y;
            } else {
                was_intersection = true;
                first_intersection = i + 1;
                first_intersection_x = intersection_x;
                first_intersection_y = intersection_y;
            }
        }
    }
}

double area(const double polygon_x_vertexes[], const double polygon_y_vertexes[], int vertexes) {
    double ans = 0;
    for (int i = 0; i < vertexes; ++i) {
        int next = i == vertexes - 1 ? 0 : i + 1;
        int prev = i == 0 ? vertexes - 1 : i - 1;
        ans += (polygon_x_vertexes[i] * polygon_y_vertexes[next] - polygon_x_vertexes[i] * polygon_y_vertexes[prev]);
    }
    return fabs(ans) / 2;
}

int main() {
    int T, m, n;
    std::cin >> T;

    for (int c = 0; c < T; ++c) {
        std::cin >> n;
        double first_polygon_x[n], first_polygon_y[n];
        for (int i = 0; i < n; ++i) {
            std::cin >> first_polygon_x[i];
            std::cin >> first_polygon_y[i];
        }

        std::cin >> m;
        double second_polygon_x[m], second_polygon_y[m];
        for (int i = 0; i < m; ++i) {
            std::cin >> second_polygon_x[i];
            std::cin >> second_polygon_y[i];
        }

        double k, b, fi1x, fi1y, fi2x, fi2y, si1x, si1y, si2x, si2y, minb, maxb, was_change = 0, mink, maxk;
        int fi1 = -1, fi2 = -1, si1 = -1, si2 = -1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                k = (first_polygon_y[i] - second_polygon_y[j]) / (first_polygon_x[i] - second_polygon_x[j]);
                b = first_polygon_y[i] - k * first_polygon_x[i];
                line_intersect_polygon(first_polygon_x, first_polygon_y, n, k, b, fi1x, fi1y, fi2x, fi2y, fi1, fi2);
                line_intersect_polygon(second_polygon_x, second_polygon_y, m, k, b, si1x, si1y, si2x, si2y, si1, si2);
                if (fi2 == -1 && si2 == -1) {
                    if (was_change != 0) {
                        maxb = b;
                    } else {
                        minb = b;
                        was_change = 1;
                    }
                }
            }
        }
        if(minb > maxb) std::swap(minb, maxb);

        for (int i = 0; i < n; ++i) {
            if ((first_polygon_y[i] - maxb) / first_polygon_x[i] >= maxk) maxk = (first_polygon_y[i] - maxb) / first_polygon_x[i];
            if((first_polygon_y[i] - maxb) / first_polygon_x[i] <= mink) mink = (first_polygon_y[i] - maxb) / first_polygon_x[i];
        }
        if(mink > maxk) std::swap(mink, maxk);

        bool found = 0;
        for (k = mink; k <= maxk; k += 0.00001) {
            for (b = minb; b <= maxb; b += 0.00001) {
                int first_half_size, second_half_size;
                double first_half_area, second_half_area;

                line_intersect_polygon(first_polygon_x, first_polygon_y, n, k, b, fi1x, fi1y, fi2x, fi2y, fi1, fi2);
                first_half_size = fi2 - fi1 + 3;
                double first_half_x[first_half_size], first_half_y[first_half_size];
                for (int i = 0; i < first_half_size; ++i) {
                    if (i == 0) {
                       first_half_x[i] = fi1x;
                       first_half_y[i] = fi1y;
                    }
                    else if (i == n - 1) {
                        first_half_x[i] = fi2x;
                        first_half_y[i] = fi2y;
                    }
                    else {
                        first_half_x[i] = first_polygon_x[i];
                        first_half_y[i] = first_polygon_y[i];
                    }
                }

                line_intersect_polygon(second_polygon_x, second_polygon_y, m, k, b, si1x, si1y, si2x,si2y,si1,si2);
                second_half_size = si2 - si1 + 3;
                double second_half_x[second_half_size], second_half_y[second_half_size];
                for (int i = 0; i < second_half_size; ++i) {
                    if (i == 0) {
                        second_half_x[i] = si1x;
                        second_half_y[i] = si1y;
                    }
                    else if (i == n - 1) {
                        first_half_x[i] = si2x;
                        first_half_y[i] = si2y;
                    }
                    else {
                        second_half_x[i] = second_polygon_x[i];
                        second_half_y[i] = second_polygon_y[i];
                    }
                }

                if (fabs(area(first_polygon_x, first_polygon_y, n) - area(first_half_x, first_half_y, first_half_size)) <= 0.0001 && (area(second_polygon_x, second_polygon_y, m) - area(second_half_x, second_half_y, second_half_size) <= 0.0001)) {
                    std::cout << k << ' ' << b << '\n';
                    found = 1;
                    break;
                }
            }
            if (found) break;
        }
    }
    return 0;
}