#include <iostream>
using namespace std;

int fe[21];

int main() {
	int n;
	cin >> n;
	fe[1] = 0;
	fe[2] = 1;
	for (int i = 3; i <= n+1; i++)
	{
		fe[i] = fe[i - 1] + fe[i - 2];
	}
	cout << fe[n+1];
}