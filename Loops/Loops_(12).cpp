//Перевести заданное пользователем число (целое, положительнео)
//в заданную пользователем систему счисления (от 2 до 16). Для систем счисления более 10 использовать буквы английского алфавита ABCDEF
#include <iostream>

int main() {
    int num, sis;
    std::cout << "Input number,system" << std::endl;
    std::cin >> num >> sis;
    int result = 0;
    int i = 1;
    if (sis > 10) {
        while (num) {
            i = 1;
            int temp = num;
            while (temp >= sis) {
                temp /= sis;
                i *= sis;
            }
            num -= (i * temp);
            switch (temp) {
            case 10: std::cout << 'A';
                break;
            case 11: std::cout << 'B';
                break;
            case 12: std::cout << 'C';
                break;
            case 13: std::cout << 'D';
                break;
            case 14: std::cout << 'E';
                break;
            case 15: std::cout << 'F';
                break;
            default: std::cout << temp;
                break;
            }
        }
    }
    else if (sis == 10) std::cout << num;
    else {
        while (num) {
            result += i * (num % sis);
            i *= 10;
            num /= sis;
        }
        std::cout << result;
    }
}
