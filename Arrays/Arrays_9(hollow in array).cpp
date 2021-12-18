#include <iostream>

int main()
{
    int fake_sum = 0, real_sum = 0;
    int const N = 20;
    int A[N];
    for (int i = 0; i < N; ++i)
    {
        A[i] = i;
        fake_sum += A[i];
    }
    real_sum =((N * (N + 1)) / 2);
    std::cout << "We need to put in array this number: " << real_sum - fake_sum << "\n";
    return 0;
}