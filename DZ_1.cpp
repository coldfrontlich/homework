#include <iostream>

int main() {
    std::cout << "Input number(h of pryam triangle) (<= 25):\n";
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; ++i){
        for(int j = 1; j <= i ; ++j){
            std::cout << "*";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    std::cout << "Input positive number(h of rb triangle) :\n";
    int k;
    std::cin >> k;
    for (int i = 0; i < k; ++i){
        for (int j = 1; j < k - i; j++) {
            std::cout << " ";
        }
        for (int j = k - 2 * i; j <= k; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}