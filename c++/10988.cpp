#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	bool isfal=true;
	cin >> s;
	int l = s.length();

	for (int i = 0; i < l; i++)
	{
		if (s[i] != s[l -1- i])
		{
			isfal = false;
			break;
		}
	}
	if (isfal==false)
	{
		cout << 0;
	}
	else {
		cout << 1;
	}
}