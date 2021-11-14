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

	for (int i = 0; i < n; ++i){
		M[i] = new int[m];
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			M[i][j] = rand() % 100 - 50;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << M[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i) {
		delete[] M[i];
	}
	delete[] M;

}