//Заполнить массив nxm (размеры вводит пользователь) случайными числами в диапазоне от 0 до 100000. Вывести матрицу на экран, выровняв столбцы по левому краю.
#include <iostream>
#include <iomanip>

int space(int a) {
    int size = 0;
    while (a) {
        size++;
        a /= 10;
    }
    return size;
}

int main() {
    srand( (unsigned int)time(NULL) );
    int n, m;
    int maxx = -100001;
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

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            M[i][j] = rand() % 100000;
            if (M[i][j] > maxx) {
                maxx = M[i][j];
            }
        }
    }

    int spaces = space(maxx);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j){
            std::cout << std::setw(spaces) << std::left << M[i][j] << ' ';
        }
        std::cout << '\n';
    }

    for (int i = 0; i < n; ++i) {
        delete[] M[i];
    }

    delete[] M;

}
