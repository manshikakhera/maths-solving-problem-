#include <iostream>
#include <cmath>
#ifndef LIBRARY_H
#define LIBRARY_H

double find_angle(double a, double b) {
    return atan(fabs(a - b)) * (180.0 / M_PI);
}

double find_angle(double a, double b);

#endif


int main() {
    double angle_at_chowk;
    double slope1 = -5.0 / 1.0; // slope of ABC Road (m1 = -A1/B1)
    double slope2 = -2.0 / 3.0; // slope of XYZ Road (m2 = -A2/B2)

    angle_at_chowk = find_angle(slope1, slope2);

    std::cout << "Angle at which these roads meet at 123 Chowk: " << angle_at_chowk << std::endl;

    return 0;
}
