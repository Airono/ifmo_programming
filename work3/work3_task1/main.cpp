#include <iostream>
#include <cmath>

using namespace std;

double sqr(double x) {
    return x * x;
}

double square(double AB, double AC, double BC) {
    double semiperimeter((AB + AC + BC) / 2);
    return sqrt(semiperimeter * (semiperimeter - AB) * (semiperimeter - AC) * (semiperimeter - BC));
}

double distance(double xA, double yA, double xB, double yB) {
    return sqrt(sqr(xA - xB) + sqr(yA - yB));
}

int main () {
    double xA, yA, xB, yB, xC, yC, xD, yD, xE, yE;
    cout << "Enter 5 coordinates: ";
    cin >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD >> xE >> yE;
    double AB(distance(xA, yA, xB, yB));
    double BC(distance(xB, yB, xC, yC));
    double CD(distance(xC, yC, xD, yD));
    double DE(distance(xD, yD, xE, yE));
    double EA(distance(xE, yE, xA, yA));
    double AC(distance(xA, yA, xC, yC));
    double AD(distance(xA, yA, xD, yD));
    double squareABC(square(AB, AC, BC));
    double squareACD(square(AC, AD, CD));
    double squareADE(square(AD, DE, EA));
    cout << "Square is " << squareABC + squareACD + squareADE;
    return 0;
}
