#include <iostream>
#include <cmath>

using namespace std;

class Triangle {

public:
    class ExSide{
    public:
        string origin;
        int iValue;

        ExSide(string orig, int side) {
            origin = orig;
            iValue = side;
        }
    };

    void input() {
        cout << "Enter sides: ";
        cin >> sideA >> sideB >> sideC;
        if (sideA >= sideB + sideC)
            throw ExSide("In function input()", sideA);
        else if (sideB >= sideA + sideC)
            throw ExSide("In function input()", sideB);
        else if (sideC >= sideB + sideA)
            throw ExSide("In function input()", sideC);
    }

    double square() {
        double semiperimeter((sideA + sideB + sideC) / 2);
        return sqrt(semiperimeter * (semiperimeter - sideA) *
                    (semiperimeter - sideB) * (semiperimeter - sideC));
    }

private:
    double sideA;
    double sideB;
    double sideC;
};

int main()
{
    Triangle ABC;
    try {
        ABC.input();
    } catch(Triangle::ExSide ex) {
        cout << "\nInput error " << ex.origin;
        cout << "\nInput side " << ex.iValue << " is invalid\n";
    }
    int squareABC = ABC.square();
    cout << squareABC;
    return 0;
}
