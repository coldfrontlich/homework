//Вывести полый ромб из зведочек. Высоту половины ромба задает пользователь.
//  *
// * *
//*   *
// * *
//  *
#include <iostream>
int main() {
    int n;
    std::cout << "Input 1/2 rhombus: ";
    std::cin >> n;
    int space = n - 1;
    for (int i = 1; i <= n; ++i) {
        int outside = space;
        int inside = (i > 2) ? (2 * i - 3) : (i - 1);
        int zvezdi = i;
        while (outside) {
            std::cout << ' ';
            outside--;
        }
        std::cout << '*';
        zvezdi--;
        while (inside) {
            std::cout << ' ';
            inside--;
        }
        if (zvezdi)
            std::cout << '*';

        space--;
        std::cout << '\n';
    }
    space = 1;
    for (int i = n - 1; i >= 1; --i) {
        int outside = space;
        int inside = (i > 2) ? (2 * i - 3) : (i - 1);
        int zvezdi = i;
        while (outside) {
            std::cout << ' ';
            outside--;
        }
        std::cout << '*';
        zvezdi--;
        while (inside) {
            std::cout << ' ';
            inside--;
        }
        if (zvezdi)
            std::cout << '*';
        space++;
        std::cout << '\n';
    }
}
