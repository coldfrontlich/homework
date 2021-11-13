//Вывести клетчатый ромб из зведочек. Высоту половины ромба задает пользователь.
//   *
//  * *
// * * *
//* * * *
// * * *
//  * *
//   *
#include <iostream>

int main() {
    int n;
    std::cout << "Input 1/2 rhombus: \n";
    std::cin >> n;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        int zvezdi = i;
        int temp_space = space;
        while (temp_space)
        {
            std::cout << ' ';
            temp_space--;
        }
        while (zvezdi)
        {
            std::cout << '*' << ' ';
            zvezdi--;
        }
        space--;
        std::cout << "\n";
    }
    space = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        int zvezdi = i;
        int temp_space = space;
        while (temp_space)
        {
            std::cout << ' ';
            temp_space--;
        }
        while (zvezdi)
        {
            std::cout << '*' << ' ';
            zvezdi--;
        }
        space++;
        std::cout << '\n';
    }
}
