#include <iostream>
#include <cmath>
#include <cstdlib>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int n;
    double x, y, s(0);
    int x0(rand() % 21 - 10), y0(rand() % 21 - 10);
    cout << "Введите количество выстрелов: ";
    cin >> n;
    cout << "Введите " << n << " координат: ";
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        int hitchX(rand() % 3 - 1), hitchY(rand() % 3 - 1);
        x += hitchX;
        y += hitchY;
        if (hitchX != 0 || hitchY != 0)
            cout << "Помеха, коодинаты: " << x << " " << y << endl;
        double circle((x - x0) * (x - x0) + (y - y0) * (y - y0));
        if (circle <= 1)
            s += 10;
        else if (circle <= 4)
            s += 5;
        else if (circle <= 9)
            s++;
    }
    cout << "Случайный центр: " << x0 << " " << y0 << endl;
    double maxSum(10 * n);
    if (s / maxSum > 0.8)
        cout << "Снайпер, у тебя " << s << " очков.";
    else if (s / maxSum > 0.2)
        cout << "Стрелок, у тебя " << s << " очков";
    else
        cout << "Мазила, у тебя " << s << " очков";
    return 0;
}
