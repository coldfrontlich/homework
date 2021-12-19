#include <iostream>

int main() {
    double n;
    std::cout << "Enter n: \n";
    std::cin >> n;
    double dots = 0.;
    for (int i = 0; i < n; i++)
    {
        double x = rand() / (1.0 * RAND_MAX), y = rand() / (1.0 * RAND_MAX);
        dots += (x * x + y * y) <= 1. ? 1. : 0.;
    }
    std::cout << (dots / n) << std::endl;
}