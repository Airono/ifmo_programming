#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(0, "");  // подключение русского языка
    cout << "Введите периметр треугольника: ";
    double perimeter, side, side2, semiperimeter, square;
    cin >> perimeter; // пользователь вводит периметр треугольника
    side = perimeter / 3; // сторона
    semiperimeter = perimeter / 2; // полупериметр
    side2 = semiperimeter - side; // для упрощения выражения заменим на одну переменную
    square = sqrt(semiperimeter * pow(side2, 3)); // вычисление площади
    cout << endl << setw(10) << left << "Сторона" << setw(10) << left << "Площадь"; // вывод результата
    cout << endl << setw(10) << left << side << setw(10) << left << square;
    return 0;
}
