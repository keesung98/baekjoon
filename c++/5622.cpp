#include <iostream>
#include <string>
using namespace std;

int main() {
	int time=0;
	string Dial;
	cin >> Dial;
	for (int i = 0; i < Dial.length(); i++)
	{
		if (Dial[i]=='A'|| Dial[i] == 'B'|| Dial[i] == 'C')
		{
			time += 3;
		}
		else if (Dial[i] == 'D' || Dial[i] == 'E' || Dial[i] == 'F')
		{
			time += 4;
		}
		else if (Dial[i] == 'G' || Dial[i] == 'H' || Dial[i] == 'I')
		{
			time += 5;
		}
		else if (Dial[i] == 'J' || Dial[i] == 'K' || Dial[i] == 'L')
		{
			time += 6;
		}
		else if (Dial[i] == 'M' || Dial[i] == 'N' || Dial[i] == 'O')
		{
			time += 7;
		}
		else if (Dial[i] == 'P' || Dial[i] == 'Q' || Dial[i] == 'R' || Dial[i] == 'S')
		{
			time += 8;
		}
		else if (Dial[i] == 'T' || Dial[i] == 'U' || Dial[i] == 'V')
		{
			time += 9;
		}
		else
		{
			time += 10;
		}
	}
	cout << time;
}