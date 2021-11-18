//Дан массив A размера N. Вывести его элементы в следующем порядке: A[1], A[N], A[2], A[N-1], A[3], A[N-2], ...
#include <iostream>

int main() {
    int n;
    std::cout << "enter n: " << std::endl;
    std::cin >> n;
    int* A = new int[n];
    std::cout << "Elements of array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }
    std::cout << "Old array: " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << A[i] << ' ';
    }
    std::cout << std::endl;
    bool chet;
    chet = (n == ((n / 2) * 2)) ? 1 : 0;
    for (int i = 0; i <= (n - 1) / 2; ++i) {
        if (chet and i == n / 2) {
            std::cout << A[i] << ' ' << A[n - 1 - i];
        }
        else if (!chet and i == n / 2) std::cout << A[i];
        else {
            std::cout << A[i] << ' ' << A[n - 1 - i] << ' ';
        }
    }
    delete[] A;
}
