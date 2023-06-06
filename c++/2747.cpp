#include <iostream>
#include <algorithm>

using namespace std;

int n;
int f[50];

int main() {
	cin >> n;
	f[1] = 0;
	f[2] = 1;
	for (int i = 3; i <= n+1; i++)
	{
		f[i] = f[i - 2] + f[i - 1];
	}
	cout << f[n+1];
}