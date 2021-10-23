//Задача 4. Вычислить сумму 1+x+x^2+x^3+... в заданной точке до тех пор, пока значение очередного слагаемого
//по модулю больше заданного eps.
//Сравнить результат с 1/(1-x). x подается в диапазоне (-1,1).
#include <iostream>
#include <cmath>

int main() {
    double x, eps;
    std::cout << "Input x(-1,1), eps: " << std::endl;
    std::cin >> x >> eps;
    if ((x >= -1) and (x <= 1))
    {
        int n = 0;
        double k = pow(x, n);
        double sum = k;
        while (k > eps)
        {
            n++;
            k = pow(x, n);
            sum += k;
        }
        std::cout << "sum: " << sum << "\n";
        if (sum > 1 / (1 - x))
        {
            std::cout << "sum > 1 / (1-x)\n";
        }
        else if (sum == 1 / (1 - x)) {
            std::cout << "sum == 1 / (1-x)\n";
        }
        else
            std::cout << "sum < 1/(1-x)\n";
    }
    else
    {
        std::cout << "Error\n";
    }
}