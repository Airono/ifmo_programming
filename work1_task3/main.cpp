#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(0, ""); // ����������� �������� �����
    cout << "������� �������� ������������: ";
    double perimeter, side, side2, semiperimeter, square;
    cin >> perimeter; // ������������ ������ �������� ������������
    side = perimeter / 3; // �������
    semiperimeter = perimeter / 2; // ������������
    side2 = semiperimeter - side; // ��� ��������� ��������� ������� �� ���� ����������
    square = sqrt(semiperimeter * pow(side2, 3)); // ���������� �������
    cout << endl << setw(10) << left << "�������" << setw(10) << left << "�������"; // ����� ����������
    cout << endl << setw(10) << left << side << setw(10) << left << square;
    return 0;
}
