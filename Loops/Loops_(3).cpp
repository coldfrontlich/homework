//Для заданных значений n и x вычислить выражение: S = sin(x) + sin(sin(x)) + ... + sin(sin( ... (sin (x)) ... ))
#include <iostream>
#include <cmath>

int main() {
    int n;
    double x;
    std::cout << "Input n, x: " << std::endl;
    std::cin >> n >> x;
    double S = 0.;
    double m = sin(x);
    for (int i = 1; i <= n; ++i)
    {
        S += m;
        m = sin(m);
    }
    std::cout << sin(S);
}
