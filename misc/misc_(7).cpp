//���� ���������� � ������������� �������� R<10^6.
//��������� ����� ����� � �������������� ������������, ������� ������ ����������, � ��� ����� � ����������� �� ������� ����������.
#include <iostream>
#include <cmath>


int main() {
    int R;
    std::cout << "Input radius: ";
    std::cin >> R;
    if (R > pow(10,6))
    {
        std::cout << "Error";
    }
    else {
        int count = 0;
        for (int x = -R; x <= R; x++)
        {
            for (int y = -R; y <= R; y++)
            {
                if (pow(x, 2) + pow(y, 2) <= pow(R, 2)) {
                    count += 1;
                }
            }

        }
        std::cout << "Dots: " << count << std::endl;
    }
}