#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); // подключение русского языка
    wcout << L"Введите периметр треугольника: ";
    double perimeter;
    cin >> perimeter; // пользователь вводит периметр треугольника
    double side = perimeter / 3; // сторона
    double semiperimeter = perimeter / 2; // полупериметр
    double square = sqrt(semiperimeter * pow(semiperimeter - side, 3)); // вычисление площади
    wcout << setw(10) << left << L"Сторона" << setw(10) << left << L"Площадь" << endl; // вывод результата
    wcout << setw(10) << left << side << setw(10) << left << square;
    return 0;
}
