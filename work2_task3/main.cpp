#include <iostream>
#include <clocale>

using namespace std;

int main() {

    setlocale(LC_ALL, "");
    int s = 0;
    int k, m;
    wcout << L"Введите k, m: ";
    cin >> k >> m;
    for (int i = 1; i <= 100; i++) {
        if ((i > k) && (i < m))
            continue;
        s += i;
    }
    wcout << L"Сумма: " << s;
    return 0;
}
