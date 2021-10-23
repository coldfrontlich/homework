//На вход подаются координаты точки на плоскости.
//Проверить, попадает ли она в кольцо, образованное пространством между границей
//внешней окружности радиуса R и внутренней окружности радиуса r.

#include <iostream>
#include <cmath>

int main() {
    double x, y;
    std::cout << "Input x,y: " << std::endl;
    std::cin >> x >> y;
    double r, R;
    std::cout << "Input r,R: " << std::endl;
    std::cin >> r >> R;
    if (sqrt(pow(x,2) + pow(y,2)) <= pow(R,2) and sqrt(pow(x, 2) + pow(y, 2)) >= pow(r, 2))
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }
}

