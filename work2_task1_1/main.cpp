#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(0, "");
    double x, y;
    cout << "������� ����������: ";
    cin >> x >> y;
    if (x * x + y * y < 9 && y > 0)
        cout << "������";
    else if (x * x + y * y > 9 || y < 0)
        cout << "�������";
    else
        cout << "�� �������";
    return 0;
}
