#include <iostream>
#include <windows.h>

using namespace std;

struct Distance {
    int feet;
    double inches;

    class ExDistance {
        public:
            string origin;
            int iValue;

            ExDistance(string orig, int value) {
                origin = orig;
                iValue = value;
            }
    };
};

Distance AddDist(const Distance &d1, const Distance &d2) {
    Distance d;
    d.feet = d1.feet + d2.feet;
    d.inches = d1.inches + d2.inches;
    if (d.inches>= 12.0 ) {
        d.inches -= 12.0;
        d.feet++;
    }
    return d;
}

void ShowDist(const Distance &d) {
	cout << d.feet << "\'-" << d.inches << "\"\n";
}


Distance InputDist() {
    Distance d;
    cout << "\nEnter feet: ";
    cin >> d.feet;
    if (d.feet < 0)
        throw Distance::ExDistance("In InputDist()", d.feet);
    cout << "Enter inches: ";
    cin >> d.inches;
    if (d.inches < 0)
        throw Distance::ExDistance("In InputDist()", d.inches);
    return d;
}

int main() {
    Distance d1;
    try {
        d1 = InputDist();
    }
    catch(Distance::ExDistance ex) {
        cout << "\nError input " << ex.origin;
        cout << "\nInput value " << ex.iValue << " is invalid\n";
    }
    Distance d2 = { 1, 6.25 };
    Distance d3 = AddDist(d1, d2);
    ShowDist(d1);
	ShowDist(d2);
	ShowDist(d3);

    int n;
    cout << "Enter count of distances " ;
    cin >> n;
    Distance *masDist = new Distance[n];
    Distance sumDist = {0, 0};
    for (int i = 0; i < n; i++) {
        try {
        masDist[i] = InputDist();
        }
        catch(Distance::ExDistance ex) {
            cout << "\nError input " << ex.origin;
            cout << "\nInput value " << ex.iValue << " is invalid\n";
        }
        sumDist = AddDist(sumDist, masDist[i]);
    }
    for (int i = 0; i < n; i++)
        ShowDist(masDist[i]);
    delete [] masDist;
    cout << "The sum is ";
    ShowDist(sumDist);
    return 0;
}
