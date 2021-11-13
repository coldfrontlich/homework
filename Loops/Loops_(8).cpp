//Вычислить сумму и произведение цифр целого числа, введенного пользователем
#include <iostream>

int main() {
    int n;
    std::cout << "Input number: " << std::endl;
    std::cin >> n;
    int sum = 0;
    int mult = 1;
    while (n > 0)
    {
        sum += n % 10;
        mult *= n % 10;
        n /= 10;
    }
    std::cout << "sum,mult = " << sum << " " << mult << std::endl;

}
