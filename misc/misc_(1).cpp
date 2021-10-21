#include <iostream>

int main() {
    unsigned char c = 0;
    do {
        std::cout << int(c) << ' ';
        ++c;
    } while (c > 0);
    std::cout << "\n";
}