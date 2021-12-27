//Дана окружность с целочисленным радиусом R<10^6.
//Посчитать число точек с целочисленными координатами, лежащих внутри окружности, в том числе и находящихся на границе окружности.
#include <iostream>
#include <cmath>

int main() {
    int R;
    long long count = 0;
    std::cout << "R<10^6 and R > 0: \n";
    std::cin >> R;
    if (R > pow(10, 6) or R < 0) {
        std::cout << "Uncorrect";
        return 0;
    }
    else {
        for (int y = R; y >= -R; --y)
        {
            for (int x = -R; x <= R; ++x)
            {
                if (x * x + y * y <= R * R)
                {
                    count += 1;
                }
            }
        }
        std::cout <<"Dots: " << count << std::endl;
    }

    return 0;
}
