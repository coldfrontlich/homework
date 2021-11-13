//Перевести заданное пользователем число (целое, положительнео) в 2-ю систему счисления и вывести на экран.
#include <iostream>

int main() {
    int n;
    std::cout << "Input number: " << std::endl;
    std::cin >> n;
    int deg = 1;
    int temp_n = n;
    while ((temp_n /= 2) != 0)
    {
        deg *= 2;
    }
    int ost = n;
    while (deg)
    {
        if (ost - deg >= 0)
        {
            std::cout << '1';
        }
        else
        {
            std::cout << '0';
        }
        if (ost - deg >= 0)
        {
            ost -= deg;
        }
        deg /= 2;
    }
}
