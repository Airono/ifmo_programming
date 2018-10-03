#include<iostream>

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

int main() {
    bool (*from_f[2])(int, int) = {from_min, from_max};
    int N;
	cin >> N;
	int* A = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	int my_choose = 0;
	cout << "1. Sort ascending\n";
	cout << "2. sort descending\n";
	cin >> my_choose;
	cout << "Initial data: ";
	show_array(A, N);
	bubble_sort(A, N, (*from_f[my_choose - 1]));
	show_array(A, N);
	delete A;
	return 0;
}
void show_array(const int Arr[], const int N) {
	for (int i = 0; i < N; i++)
		cout << Arr[i] << "  ";
	cout << "\n";
}

bool from_min(const int a, const int b)  { return a > b; }

bool from_max(const int a, const int b) { return a < b; }

