//Вывести равнобедренный треугольник из звездочек. Высоту задает пользователь.
//   *
//  ***
// *****
//*******
#include <iostream>
int main(){
    std::cout << "Input positive number(h of rb triangle) :\n";
    int k;
    std::cin >> k;
    for (int i = 0; i < k; ++i) {
        for (int j = 1; j < k - i; j++) {
            std::cout << " ";
        }
        for (int j = k - 2 * i; j <= k; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}