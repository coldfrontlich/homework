//Вывести в консоль строку с одной звездочкой, строку с двумя звездочками, с тремя и т.д. Количество строк спрашивать у пользователя (не более 25 строк).
//*
//**
//***
//****

#include <iostream>

int main() {
    std::cout << "Input number(h of pryam triangle) (<= 25):\n";
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
}
