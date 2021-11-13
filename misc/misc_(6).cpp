//������ 6. ������� � ������� ������ ������� �������� ������������ (x^2 + y^2 - 1)^3 - x^2 y^3 <= 0.
//x �������� �� -1.5 �� 1.5, y �������� �� -1.5 �� 1.5. ������� ������ � height=21 ����� �� width=41 ��������.
//������ ������� ������ ������ ������������� ����� (-1.5, 1.5),
//� ��������� (width) ������ � ��������� (height) ������ ����������� ����� (1.5, -1.5).
//���� ���������� ����� ������������� �����������, �� �������� ������ *, ����� ������ .

#include <iostream>
#include <cmath>


 bool nado(int x, int y) {
    return pow((pow(static_cast<double>(x) / 10, 2) + pow(static_cast<double>(y) / 10, 2) - 1), 3)
        - pow(static_cast<double>(x) / 10, 2) * pow(static_cast<double>(y) / 10, 3) <= 0;
}


int main() {
    for (int x = 15; x >= -15; --x) {
        for (int y = 15; y >= -15; --y) {
            if (nado(y, x))
                std::cout << "*";
            else
                std::cout << " ";
            if (y == 15)
                std::cout << '\n';
        }
    }
}

