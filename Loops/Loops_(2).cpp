#include <iostream>

int main() {
    int n;
    std::cout << "Input n: \n";
    std::cin >> n;
    double sum = 1.;
    int dop = 1;
    for (int i = 1; i <= n; ++i)
    {
        dop *= 2;
        sum += 1. / dop;
    }
    std::cout << sum << '\n';
}