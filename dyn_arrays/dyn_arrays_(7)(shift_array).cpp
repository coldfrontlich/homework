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