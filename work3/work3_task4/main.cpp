#include <iostream>
#include <cmath>

using namespace std;

double square() {
    return 0;
}

double square(double a) {
    double semiperimeter(a * 3 / 2);
    return sqrt(semiperimeter * pow((semiperimeter - a), 3));
}

int main()
{
    double perimeter;
    cin >> perimeter;
    double side(perimeter / 3);
    cout << square(side);
    return 0;
}
