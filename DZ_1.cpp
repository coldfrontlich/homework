#include <iostream>

int main() {
    /*std::cout << "Input number(h of pryam triangle) (<= 25):\n";
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
    */
    int n;
    std::cout << "Input 1/2 rombhus: ";
    std::cin >> n;
    int tabs = 1;
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        int temp_tabs = 0;
        while (temp_tabs != n - tabs)
        {
            std::cout << ' ';
            temp_tabs++;
        }
        int zvezdi = i;
        while (zvezdi) {
            std::cout << '*';
            zvezdi--;
        }
        std::cout << '\n';
        tabs++;
    }

    tabs = n - 1;
    for (int i = 2 * (n - 1) - 1; i >= 1; i -= 2) {
        int temp_tabs = n - tabs;
        while (temp_tabs != 0)
        {
            std::cout << ' ';
            temp_tabs--;
        }
        int zvezdi = (i <= 2 * n) ? i : 0;
        while (zvezdi)
        {
            std::cout << '*';
            zvezdi--;
        }
        std::cout << '\n';
        tabs--;
    }

}