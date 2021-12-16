#include <iostream>
#include <cmath>

double mysqrt(double x, double eps = 1e-6) {
    double z_n = 1., zn = 0.;
    while (abs(z_n - zn) > eps)
    {
        zn = z_n;
        z_n = zn - (zn * zn - x) / (2 * zn);
    }
    return z_n;
}