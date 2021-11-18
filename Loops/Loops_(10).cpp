//Перевести заданное пользователем число (целое, положительнео) в 16-ю систему счисления и вывести на экран.
#include <iostream>

int main() {
    int num;
    std::cout << "Input number: " << std::endl;
    std::cin >> num;
    int temp = num;
    int i = 1;
    while ((temp /= 16) != 0) {
        i *= 16;
    }
    while (i) {
        if (num / i > 9) {
            std::cout << (char)(55 + (num / i));
        }
        else {
            std::cout << (num / i);
        }
        num %= i;
        i /= 16;
    }
}
