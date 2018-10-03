#include<iostream>
#include <cmath>

using namespace std;

int Myroot(double a, double b, double c, double &x1, double &x2) {

	double d((b * b) - (4 * a * c));
	if (d < 0)
		return -1;
	if (d == 0)
	{
		x1 = (b*-1) / (2 * a);
		x2 = x1;
		return 0;
	}
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	return 1;
}


int main() {

    double x1, x2, a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
	int result(Myroot(a, b, c, x1, x2));
	switch(result) {
        case -1:
            cout << "No roots";
            break;
        case 1:
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2;
            break;
        default:
            cout << " x = " << x1 << endl;
	}
	return 0;
}
