#include <iostream>
using namespace std;

int main() {
	int n;
	long long int sum = 1;

	cin >> n;

	if (n==0)
	{
		cout << 1;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			sum = sum * i;
		}
		cout << sum;
	}
}