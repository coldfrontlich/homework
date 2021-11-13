//Вывести ромб из зведочек. Высоту половины ромба задает пользователь.
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
#include <iostream>
int main() {
    int f;
    std::cout << "Input 1/2 rombhus: ";
    std::cin >> f;
    int tabs = 1;
    for (int i = 1; i <= 2 * f - 1; i += 2) {
        int temp_tabs = 0;
        while (temp_tabs != f - tabs)
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

    tabs = f - 1;
    for (int i = 2 * (f - 1) - 1; i >= 1; i -= 2) {
        int temp_tabs = f - tabs;
        while (temp_tabs != 0)
        {
            std::cout << ' ';
            temp_tabs--;
        }
        int zvezdi = (i <= 2 * f) ? i : 0;
        while (zvezdi)
        {
            std::cout << '*';
            zvezdi--;
        }
        std::cout << '\n';
        tabs--;
    }
}