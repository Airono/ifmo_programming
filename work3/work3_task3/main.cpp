#include <iostream>
#include <string>

using namespace std;

void privet(string name) {
    cout << name << ", " << "hello!" << endl;
}

void privet(string name, int k)
{
    cout << name << " " << ", again " << "hello! " << "You enter " << k << endl;
}

int main ()
{
    string name;
    cout << "Enter your name: " << endl;
    cin >> name;
    privet(name);
    int k;
    cout << "Enter your favorite number: ";
    cin >> k;
    privet(name, k);
    return 0;
}
