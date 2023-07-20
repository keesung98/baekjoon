#include <iostream>
using namespace std;

int main() {
	int a[6] = { 1,1,2,2,2,8 };
	int s[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < 6; i++)
	{
		cout << a[i] - s[i]<<" ";
	}
}