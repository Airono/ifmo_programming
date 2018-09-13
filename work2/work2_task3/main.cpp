#include <iostream>
#include <clocale>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");
    int s = 0;
    int k, m;
    cout << "Введите k, m: ";
    cin >> k >> m;
    for (int i = 1; i <= 100; i++) {
        if ((i > k) && (i < m))
            continue;
        s += i;
    }
    cout << "Сумма: " << s;
    return 0;
}
