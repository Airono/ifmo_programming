#include <iostream>

using namespace std;

int main() {

    int s = 0;
    int k, m;
    cout << "Enter k, m: ";
    cin >> k >> m;
    for (int i = 1; i <= 100; i++) {
        if ((i > k) && (i < m))
            continue;
        s += i;
    }
    cout << "Sum: " << s;
    return 0;
}
