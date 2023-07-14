#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cin >> s;

	for (int i = 97; i < 123; i++)
	{
		bool isreal=true;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j]==(char)i)
			{
				cout << j << " ";
				isreal = true;
				break;
			}
			else
			{
				isreal = false;
			}
		}
		if (isreal==false)
		{
			cout << -1 << " ";
		}
	}
}