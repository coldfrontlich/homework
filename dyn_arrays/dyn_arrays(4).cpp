//Написать функцию нахождения корня из числа с помощью метода Ньютона double mysqrt(double x, double eps=1e-6);
//Вычисление осуществляется по формуле: $Z_{n+1} = Z_n - \frac{Z_n^2-x}{2 Z_n}$, $Z_0 = 1.0$.
//Вычислять пока $|Z_{n+1} - Z_{n}|>\epsilon$.
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
