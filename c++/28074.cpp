#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

string s;
bool M=false, O=false, B=false, I=false, S=false;

int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'M') M=true;
		if (s[i] == 'O') O = true;
		if (s[i] == 'B') B = true;
		if (s[i] == 'I') I = true;
		if (s[i] == 'S') S = true;
	}
	if (M == true && O == true && B == true && I == true && S == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}