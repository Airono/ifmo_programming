#include <iostream>
#include <windows.h>

using namespace std;

struct Distance {
    int feet;
    double inches;
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
    cout << "Enter inches: ";
    cin >> d.inches;
    return d;
}

int main() {
    Distance d1 = InputDist();
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
        masDist[i] = InputDist();
        sumDist = AddDist(sumDist, masDist[i]);
    }
    for (int i = 0; i < n; i++)
        ShowDist(masDist[i]);
    delete [] masDist;
    cout << "The sum is ";
    ShowDist(sumDist);
    return 0;
}
