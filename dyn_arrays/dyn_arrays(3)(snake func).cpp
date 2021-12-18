//Написать функцию void snakeArray(int** A, int n), которая заполняет массив числами от 1 до n^2 по змейке.
#include <iostream>

void snakeArray(int** M, int n) {
    int num = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i % 2 == 0) and (j == n - 1)) {
                M[i][j] = num;
                num += n;
            }
            else if (i % 2 == 0) {
                M[i][j] = num;
                num++;
            }
            else if ((i % 2 != 0) and (j == n - 1)) {
                M[i][j] = num;
                num += n;
            }
            else if (i % 2 != 0) {
                M[i][j] = num;
                num--;
            }

        }
    }
}

int main() {
    int n;
    std::cout << "Input n: \n";
    std::cin >> n;

    int** M = new int* [n];

    for (int i = 0; i < n; ++i) {
        M[i] = new int[n];
    }

    snake(M, n);

    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << M[i][j] << ' ';
        }
        std::cout << '\n';
    }

    for (int i = 0; i < n; ++i) {
        delete[] M[i];
    }

    delete[] M;
}
