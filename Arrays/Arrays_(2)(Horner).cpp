//����� �������. ������������ ���������� ��������� � ������� A ����������� (N+1), ��� N -- ������� ����������.
//��������� �������� ����� ���������� � ����� x, �� ���� A[N]x^N + ... + A[1]x + A[0], ��������� ����� �������.
#include <iostream>

int main() {
	int N;
	float x;
	std::cout << "Input N, X" << std::endl;
	std::cin >> N >> x;
	int* m = new int[N + 1];
	int sum = 0;
	float curr = 1;
	for (int i = 0; i <= N; ++i)
	{
		std::cout << i << ": ";
		std::cin >> m[i];
		sum += m[i] * curr;
		curr *= x;
		std::cout << "    : " << sum << std::endl;
	}

	delete[] m;
}