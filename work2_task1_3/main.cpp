#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(0, "");
    char op;
    cout << "������ ���� �����, ������ ���� ���� �����: ";
    cin >> op;
    switch (op) {
        case 'V':
            cout << "����������� ����\n";
        case 'S':
            cout << "����� ������ ������\n";
        default:
            cout << "������ �������\n";
            cout << "������ ���������\n";
        }
    return 0;
}
