//На вход подаются координаты точки на плоскости.
//Проверить, попадает ли она в кольцо, образованное пространством между границей
//внешней окружности радиуса R и внутренней окружности радиуса r.

#include <iostream>


int main() {
    double x, y;
    std::cout << "Input x,y: " << std::endl;
    std::cin >> x >> y;
    double r, R;
    std::cout << "Input r,R: " << std::endl;
    std::cin >> r >> R;
    if (sqrt((x*x) + (y*y)) <= (R*R) and sqrt((x*x) + (y*y)) >= (r*r))
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }
}

