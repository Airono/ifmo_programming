#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(0, "");
    double x, y;
    cout << "Введите координаты: ";
    cin >> x >> y;
    if (x * x + y * y < 9 && y > 0)
        cout << "Внутри";
    else if (x * x + y * y > 9 || y < 0)
        cout << "Снаружи";
    else
        cout << "На границе";
    return 0;
}
