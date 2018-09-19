#include <iostream>

using namespace std;

int main()
{
    double x, y;
    cout << "Enter coordinates: ";
    cin >> x >> y;
    if (x * x + y * y < 9 && y > 0)
        cout << "Inside";
    else if (x * x + y * y > 9 || y < 0)
        cout << "Outside";
    else
        cout << "On the border";
    return 0;
}
