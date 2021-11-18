#include <iostream>

int main() {
    int n;
    int count = 0;
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
    int d = A[1] - A[0];
    for (int i = 1; i < n; ++i) {
        if ((A[i] - A[i - 1]) == d) {
            count += 1;
        }
    }
    if (count == (n - 1)) {
        std::cout << d;
    }
    else {
        std::cout << 0;
    }


    delete[] A;
}