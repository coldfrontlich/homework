// ������� A=[a,b] ���������� ������������ �� ������� B=[c,d].
//���� ����� x �� ������� A, ����� ��������������� �� ����� y �� ������� B.
#include <iostream>

int main() {
    double a, b, c, d;
    std::cout << "Input a,b,c,d: " << std::endl;
    std::cin >> a >> b >> c >> d;
    double x;
    std::cout << "Input dot x: " << std::endl;
    std::cin >> x;
    double y;
    y = c + (x - a) * ((d - c) / (b - a));
    std::cout << y << std::endl;
}