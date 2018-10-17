#include <iostream>
#include <fstream>

using namespace std;

void show_array(const int Arr[], const int N);

bool from_min(const int a, const int b);

bool from_max(const int a, const int b);

void bubble_sort(int Arr[], const int N, bool(*compare)(int a, int b)) {
	for (int i = 1; i < N; i++)
		for (int j = 0; j < N - 1; j++)
			if ((*compare)(Arr[j], Arr[j + 1]))
				swap(Arr[j], Arr[j + 1]);
}

ofstream fout("test.txt");

int main() {
	bool(*from_f[2])(int, int) = { from_min, from_max };
	int n;
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "]=";
		cin >> A[i];
	}
	int my_choose = 0;
	cout << "1. Sort ascending\n";
	cout << "2. sort descending\n";
	cin >> my_choose;
	cout << "Initial data: ";
	show_array(A, n);

	bubble_sort(A, n, (from_f[my_choose - 1]));
	show_array(A, n);

	delete A;
	fout.close();
	return 0;
}
void show_array(const int Arr[], const int N) {
	for (int i = 0; i<N; i++) {
		cout << Arr[i] << "  ";
		fout << Arr[i] << " ";
	}
	cout << "\n";
	fout << endl;
}

bool from_min(const int a, const int b) {return a > b;}

bool from_max(const int a, const int b) {return a < b;}
