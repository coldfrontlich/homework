//Написать функцию
//void shiftArray(int A[], int n, in k)
//которая осуществляет циклический сдвиг элементов массива на k влево. Например, если был массив
//A[10]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//То после вызова функции shiftArray(A, 10, 3); Должен получиться массив {3, 4, 5, 6, 7, 8, 9, 0, 1,2};

#include <iostream>

void shiftArray(int A[], int n, int k)
{
    int counter = 0;
    k >= n ? k -= n : k = k;
    while (counter < k)
    {
        int tmp_1 = A[0];
        for (int i = 0; i < n; ++i)
        {
            A[i] = A[i + 1];
        }
        A[n - 1] = tmp_1;
        ++counter;
    }
}

int main() {
    int n, k;
    std::cout << "enter n, k: ";
    std::cin >> n >> k;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        arr[i] = i;
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    shiftArray(arr, n, k);
    std::cout << "\n";
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    delete[] arr;
}
