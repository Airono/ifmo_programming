#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream fout("poem.txt");
	string s;
	cin >> s;
	fout << s;
}
