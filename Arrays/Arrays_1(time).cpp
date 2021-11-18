#include <iostream>

int main() {
    int s1, s2, m1, m2, h1, h2, time1, time2;
    std::cout << "enter seconds1, minutes1,hours1" << std::endl;
    std::cin >> s1 >> m1 >> h1;
    std::cout << "enter seconds2, minutes2,hours2" << std::endl;
    std::cin >> s2 >> m2 >> h2;
    time1 = h1 * 60 * 60 + m1 * 60 + s1;
    time2 = h2 * 60 * 60 + m2 * 60 + s2;
    int difference = time2 - time1;
    int difference_h = difference / 3600;
    difference %= 3600;
    int difference_m = difference / 60;
    difference %= 60;
    std::cout << difference_h << ":" << difference_m << ":" << difference << "\n";

}