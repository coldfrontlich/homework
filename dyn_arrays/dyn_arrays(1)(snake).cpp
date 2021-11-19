//Заполнить массив nxm (размеры вводит пользователь) числами от 1 до nm по змейке. Нечетные строки слева направо, чётные -- в обратном порядке.
#include <iostream>

int main() {
    int n, m;
    do
    {
        std::cout << "Input number of rows: ";
        std::cin >> n;
    } while (n < 1);

    do
    {
        std::cout << "Input number of colums: ";
        std::cin >> m;
    } while (m < 1);

    int** M = new int* [n];

    for (int i = 0; i < n; ++i) {
        M[i] = new int[m];
    }

    int num = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((i % 2 == 0) and (j == m - 1)) {
                M[i][j] = num;
                num += m;
            }
            else if (i % 2 == 0) {
                M[i][j] = num;
                num++;
            }
            else if ((i % 2 != 0) and (j == m - 1)) {
                M[i][j] = num;
                num += m;
            }
            else if (i % 2 != 0) {
                M[i][j] = num;
                num--;
            }

        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << M[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; ++i){
        delete[] M[i];
    }

    delete[] M;
}
