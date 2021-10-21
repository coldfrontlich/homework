#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    double D;
    double x_1, x_2;
    std::cout << "Input a,b,c" << std::endl;
    std::cin >> a >> b >> c;
    D = (b * b) - (4 * a * c);
    if (D < 0)
    {
        std::cout << "It's not exist" << std::endl;
    }
    if (D == 0)
    {
        x_1 = ((-b) / 2. * a);
        std::cout << x_1;
    }
    if (D > 0)
    {
        x_1 = (((-b) + std::sqrt(D)) / 2. * a);
        std::cout << "x1 = " << x_1;
        std::cout << std::endl;
        x_2 = (((-b) - std::sqrt(D)) / 2. * a);
        std::cout << "x2 = " << x_2;
    }

}