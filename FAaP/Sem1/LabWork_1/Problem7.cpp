#include <iostream>
#include <cmath>

long double PI = 3.1415926536;

long double distance(long double Xx, long double Xy, long double Yx, long double Yy) {
    return sqrtl(powl((Xx - Yx), 2) + powl((Xy - Yy), 2));
}

long double angle_from_sides(long double side_again, long double left_side, long double right_side) {
    return acosl((powl(left_side, 2) + powl(right_side, 2) - powl (side_again, 2)) / (2 * left_side * right_side));
}

long double median_to_side(long double side_to_wich, long double left_side, long double right_side) {
    return (sqrtl(2 * (powl(left_side, 2) + powl(right_side, 2)) - powl(side_to_wich, 2)) / 2);
}

long double bisector_to_side(long double side_to_wich, long double left_side, long double right_side) {
    return sqrtl(left_side * right_side - (left_side * right_side * powl(side_to_wich, 2)) / (powl(left_side + right_side, 2)));
}

long double radians_to_degrees(long double angle) {
    return angle * 180 / PI;
}

long double length_of_circle(long double radius) {
    return 2 * PI * radius;
}

long double area_of_circle(long double radius) {
    return PI * powl(radius, 2);
}

int main() {
    long double Ax, Ay, Bx, By, Cx, Cy;
    std::cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
    long double AB, BC, AC, angleABC, angleBCA, angleCAB;
    AB = distance(Ax, Ay, Bx, By);
    BC = distance(Bx, By, Cx, Cy);
    AC = distance(Ax, Ay, Cx, Cy);
    std::cout << "AB = " << AB << '\n';
    std::cout << "BC = " << BC << '\n';
    std::cout << "AC = " << AC << '\n';
    angleABC = angle_from_sides(AC, AB, BC);
    angleBCA = angle_from_sides(AB, BC, AC);
    angleCAB = angle_from_sides(BC, AB, AC);
    std::cout << "Altitude to AB = " << AC * sinl(angleCAB) << '\n';
    std::cout << "Altitude to AC = " << AB * sinl(angleCAB) << '\n';
    std::cout << "Altitude to BC = " << AB * sinl(angleABC) << '\n';
    std::cout << "Median to AB = " << median_to_side(AB, AC, BC) << '\n';
    std::cout << "Median to AC = " << median_to_side(AC, AB, BC) << '\n';
    std::cout << "Median to BC = " << median_to_side(BC, AB, AC) << '\n';
    std::cout << "Bisector to AB = " << bisector_to_side(AB, AC, BC) << '\n';
    std::cout << "Bisector to AC = " << bisector_to_side(AC, AB, BC) << '\n';
    std::cout << "Bisector to BC = " << bisector_to_side(BC, AB, AC) << '\n';
    std::cout << "Angle ABC in radians = " << angleABC << '\n';
    std::cout << "Angle BCA in radians = " << angleBCA << '\n';
    std::cout << "Angle CAB in radians = " << angleCAB << '\n';
    std::cout << "Angle ABC in degrees = " << radians_to_degrees(angleABC) << '\n';
    std::cout << "Angle BCA in degrees = " << radians_to_degrees(angleBCA) << '\n';
    std::cout << "Angle CAB in degrees = " << radians_to_degrees(angleCAB) << '\n';
    long double perimetr, Area_by_Geron, Area_by_Sinus, Area_by_Altitude;
    perimetr = AB + BC + AC;
    long double half_perimetr = perimetr / 2;
    Area_by_Geron = sqrt(half_perimetr * (half_perimetr - AB) * (half_perimetr - AC) * (half_perimetr - BC));
    Area_by_Altitude = AB * AC * sin(angleCAB) / 2;
    Area_by_Sinus = sin(angleABC) * AB * BC / 2;
    long double incircle_radius = Area_by_Geron / half_perimetr;
    long double circumcircle_radius = AC / (2 * sin(angleABC));
    std::cout << "Radius of circumcircle = " << circumcircle_radius << '\n';
    std::cout << "Radius of incircle = " << incircle_radius << '\n';
    std::cout << "Area of circumcircle = " << area_of_circle(circumcircle_radius) << '\n';
    std::cout << "Length of circumcircle = " << length_of_circle(circumcircle_radius) << '\n';
    std::cout << "Area of incircle = " << area_of_circle(incircle_radius) << '\n';
    std::cout << "Length of incircle = " << length_of_circle(incircle_radius) << '\n';
    std::cout << "Perimeter of triangle = " << perimetr << '\n';
    std::cout << "Area of triangle by Geron = " << Area_by_Geron << '\n';
    std::cout << "Area of triangle by Altitude = " << Area_by_Altitude << '\n';
    std::cout << "Area of triangle by Sinus = " << Area_by_Sinus << '\n';
    return 0;
}