#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{

    int n;
    double x, y, s(0);
    int x0(rand() % 21 - 10), y0(rand() % 21 - 10);
    cout << "Enter quantity of shots: ";
    cin >> n;
    cout << "Enter " << n << " coordinates: \n";
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        int hitchX(rand() % 3 - 1), hitchY(rand() % 3 - 1);
        x += hitchX;
        y += hitchY;
        if (hitchX != 0 || hitchY != 0)
            cout << "Hitch, coordinates: " << x << " " << y << endl;
        double circle((x - x0) * (x - x0) + (y - y0) * (y - y0));
        if (circle <= 1)
            s += 10;
        else if (circle <= 4)
            s += 5;
        else if (circle <= 9)
            s++;
    }
    cout << "Random center: " << x0 << " " << y0 << endl;
    double maxSum(10 * n);
    if (s / maxSum > 0.8)
        cout << "Sniper, you have " << s << " points.";
    else if (s / maxSum > 0.2)
        cout << "Shooter, you have " << s << " points";
    else
        cout << "Ointment, you have " << s << " points";
    return 0;
}
