// Отрезок A=[a,b] непрерывно отображается на отрезок B=[c,d].
//Дана точка x из отрезка A, найти соответствующий ей образ y из отрезка B.
#include <iostream>

int main() {
    double a, b, c, d;
    std::cout << "Input a,b,c,d: " << std::endl;
    std::cin >> a >> b >> c >> d;
    double x;
    std::cout << "Input dot x: " << std::endl;
    std::cin >> x;
    double y;
    y = c + (x - a) * ((d - c) / (b - a));
    std::cout << y << std::endl;
}