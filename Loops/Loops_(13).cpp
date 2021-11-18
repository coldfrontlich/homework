//Перевести заданное целое число (<4000) в систему римского счета.
#include <iostream>
int main() {
    int num;
    std::cout << "Input number: " << std::endl;
    std::cin >> num;
    while (num >= 1000) {
        num -= 1000;
        std::cout << "M";
    }
    if ((num > 900) and (num < 1000)) {
        num -= 900;
        std::cout << "CM";
    }
    while (num >= 500) {
        num -= 500;
        std::cout << "D";
    }
    if ((num > 400) and (num < 500)) {
        num -= 400;
        std::cout << "CD";
    }
    while (num >= 100) {
        num -= 100;
        std::cout << "C";
    }
    if ((num > 90) and (num < 100)) {
        num -= 90;
        std::cout << "XC";
    }
    while (num >= 50) {
        num -= 50;
        std::cout << "L";
    }
    if ((num > 40) and (num < 50)) {
        num -= 40;
        std::cout << "XL";
    }
    while (num >= 10){
        num -= 10;
        std::cout << "X";
    }
    if (num == 9) {
        num -= 9;
        std::cout << "IX";
    }
    while (num >= 5) {
        num -= 5;
        std::cout << "V";
    }
    if (num == 4) {
        num -= 4;
        std::cout << "IV";
    }
    while (num >= 1) {
        --num;
        std::cout << "I";
    }
}
