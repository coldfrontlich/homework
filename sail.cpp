#include <iostream>
#include <cmath>

bool triangles(double x, double y)
{
    return ((x >= -1) and (x <= 1) and (y >= 0) and (y <= -2 * abs(x) + 2));
}

bool third(double x, double y)
{
    return ((y <= 0) and (x >= -2) and (x <= 0) and (y >= -sqrt(1 - (x + 1) * (x + 1))));
}

bool fourth(double x, double y)
{
    return ((y <= 0) and (x <= 2) and (x >= 0) and (y >= -sqrt(1 - (x - 1) * (x - 1))));
}


int main() {
    double x, y;
    std::cout << "Input x and y: ";
    std::cin >> x >> y;
    if (third(x, y) or fourth(x, y) or triangles(x, y))
    {
        std::cout << "Popadaet" << std::endl;
    }
    else
    {
        std::cout << "Ne popadaet" << std::endl;
    }
}
