#include <iostream>
#include <cmath>
#include <cstdlib>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int n;
    double x, y, s(0);
    int x0(rand() % 11 - 10), y0(rand() % 11 - 10);
    wcout << L"Введите количество выстрелов: ";
    cin >> n;
    wcout << L"Введите " << n << L" координат: ";
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        int hitchX(rand() % 2 - 1), hitchY(rand() % 2 - 1);
        x += hitchX;
        y += hitchY;
        if (hitchX != 0 || hitchY != 0)
            wcout << L"Помеха, коодинаты: " << x << " " << y << endl;
        if ((x - x0) * (x - x0) + (y - y0) * (y - y0) <= 1)
            s += 10;
        else if ((x - x0) * (x - x0) + (y - y0) * (y - y0) <= 4)
            s += 5;
        else if ((x - x0) * (x - x0) + (y - y0) * (y - y0) <= 9)
            s++;
    }
    wcout << L"Случайный центр: " << x0 << " " << y0 << endl;
    double maxSum(10 * n);
    if (s / maxSum > 0.8)
        wcout << L"Снайпер, у тебя " << s << L" очков.";
    else if (s / maxSum > 0.2)
        wcout << L"Стрелок, у тебя " << s << L" очков";
    else
        wcout << L"Мазила, у тебя " << s << L" очков";
    return 0;
}
