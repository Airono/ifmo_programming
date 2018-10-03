#include<iostream>

using namespace std;

int main() {
	const int n(10);
	int mas[n];
	for (int i = 0; i < n; i++) {
		cout << "mas[" << i << "] = ";
		cin >> mas[i];
	}

	int s(0);
	for (int i = 0; i < n; i++)
		s += mas[i];
	cout << "Sum of all: " << s << endl;
	cout << "Average value: " << double(s) / 10 << endl;

	int sn(0);
	for (int i = 0; i < n; i++)
		if (mas[i] < 0)
			sn += mas[i];
	cout << "Sum of negative: " << sn << endl;

	int sp = 0;
	for (int i = 0; i<n; i++)
		if (mas[i] > 0)
			sp += mas[i];
	cout << "Sum of positive: " << sp << endl;

	int so(0);
	for (int i = 1; i < n; i += 2)
		so += mas[i];
	cout << "Sum of odd: " << so << endl;

	int se(0);
	for (int i = 0; i < n; i += 2)
        se += mas[i];
	cout << "Sum of even: " << se << endl;

	int maxEl(mas[0]), minEl(mas[0]);
	int maxI, minI;
	for (int i = 0; i < n; i++) {
        if (mas[i] > maxEl) {
            maxEl = mas[i];
            maxI = i;
        }
        if (mas[i] < minEl) {
            minEl = mas[i];
            minI = i;
        }
	}
    cout << "Max: " << maxI << "\nMin: " << minI << endl;

	int product(1);
	if (maxI < minI) {
        for (int i = maxI + 1; i < minI; i++)
            product *= mas[i];
	} else if (maxI > minI) {
        for (int i = minI + 1; i < maxI; i++)
            product *= mas[i];
	}
	cout << "Product: " << product;
	return 0;
}
