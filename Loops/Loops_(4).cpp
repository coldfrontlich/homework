//�������� ���������, ������� ��������� ����� pi � �������� ������������� ���������.
//��� ��������� ���������� ���������� �������� ���������� ����������.
//��� ���������� �������� ����� pi ��������������� ��������: pi = 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - ...) 
//���������� ����� ���������� ������ ���������� ���� �������� � �����, ����� ���������� �������� ��������.
//��������� ���-��, �������� � ���������� N.

#include <iostream>
int main() {
    double eps;
    std::cout << "Input epsilon: " << std::endl;
    std::cin >> eps;
    int count = 0;
    int i = 3;
    double summ = 1.;
    double sign = 1.;
    double mult = 1.;
    double another_sign = 1.;
    while (mult * sign >= eps) {
        another_sign = -1.;
        mult = another_sign * (1. / i);
        i += 2;
        summ += mult;
        count++;
        if (mult < 0.)
        {
            sign = -1.;
        }
        else {
            sign = 1.;
        }
    }
    std::cout << 4 * summ << " " << count << std::endl;
}