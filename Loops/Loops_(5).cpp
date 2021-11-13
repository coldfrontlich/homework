//Вычислить и вывести на экран в виде таблицы значения функции, заданной с помощью ряда
//f(x) = x - (x^3)/3! + (x^5)/5! - (x^7)/7! + ...
//на интервале от x1 до x2 с шагом dx с точностью eps. x1, x2, dx, eps вводятся пользователем.
//Отдельным столбцом вывести значение функции sin(x) в тех же точках.
#include <iostream>

int main() {
    double x1, x2, dx, eps;
    std::cout << "x1: x2: dx: eps: " << std::endl;
    std::cin >> x1 >> x2 >> dx >> eps;
    std::cout << "x\tf(x)\t\tsin(x)\n";
    for ( ; x1 <= x2; x1 += dx)
    {
        std::cout << x1 << "\t";
        double curr = x1;
        double sum = 0;
        int cnt = 1;
        while (std::abs(curr) >= eps) {
            sum += curr;
            cnt += 2;
            curr = -curr * x1 * x1 / (cnt * (cnt - 1));
        }
        std::cout << sum << "\t" << sin(x1) << "\n";
    }
}