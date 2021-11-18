#include <iostream>

int main() {
    int maxx = 0;
    int nomer;
    int n;
    std::cout << "Input n: \n";
    std::cin >> n;
    int* A = new int[n];
    std::cout << "Elements of array: \n";
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }
    std::cout << std::endl;
    std::cout << "Array: \n";
    for (int i = 0; i < n; ++i) {
        std::cout << A[i] << ' ';
    }
    std::cout << std::endl;
    for (int i = 1; i < n; ++i) {
        if ((A[i] + A[i - 1]) > maxx) {
            maxx = A[i] + A[i - 1];
            nomer = i - 1;
        }
    }
    std::cout << A[nomer] << ' ' << A[nomer + 1];

    delete[] A;
}