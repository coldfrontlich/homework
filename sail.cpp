#include <iostream>
#include <cmath>

bool first(double x, double y) {
    return (x >= 0 and y >= 0 and y <= -2 * (x - 1));
}
bool second(double x, double y) {
    return (x <= 0 and y >= 0 and y <= 2 * (x + 1));
}
bool third(double x, double y) {
    return (x >= 0 and y <= 0 and y >= -sqrt(1 - pow((x + 1), 2)));
}
bool fourth(double x, double y) {
    return (x >= 0 and y >= 0 and y >= -sqrt(1 - pow((x - 1), 2)));
}
int main() {
    double x, y;
    std::cout << "Input x,y: " << std::endl;
    std::cin >> x >> y;
    if (first(x, y) or second(x, y) or third(x, y) or fourth(x, y)) {
        std::cout << "Popadaet" << std::endl;
    }
    else {
        std::cout << "Ne popadaet" << std::endl;
    }
}