#include <iostream>
#include <cmath>

int main() {
    const double pi = 3.14;
    double x, y, fi, p;
    std::cout << " x,y: ";
    std::cin >> x >> y;
    fi = sqrt((x*x) + (y*y));
    p = cos((2 * pow(sin(1), -1) + 3 * pi) / (10)) / cos((2* pow(sin(cos(pi * asin(y/fi))),-1) + 3 * pi) / 10);
    if (fi <= p * 5)
        std::cout << "Popadaet";
    else
        std::cout << "Ne popadaet";
}