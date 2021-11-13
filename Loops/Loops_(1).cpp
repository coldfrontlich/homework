//ƒл€ заданного значени€ n вычислить выражение: S = 1 + 1/2 + 1/3 + ... + 1/n
#include <iostream>

int main() {
    double n;
    double sum = 0;
    std::cout << "Input n: " << std::endl;
    std::cin >> n;
    for (double i = 1; i <= n; i++)
    {
        sum += 1 / i;
    }
    std::cout << sum << std::endl;
}