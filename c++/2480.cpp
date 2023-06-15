#include <iostream>
#include <algorithm>

using namespace std;

int big(int a, int b, int c) {
	int temp;
	if (a>b)
	{
		temp = a;
	}
	else
	{
		temp = b;
	}
	if (temp<c)
	{
		temp = c;
	}
	return temp;
}

int main() {
	int a, b, c,sum;
	cin >> a >> b >> c;
	if (a==b&&a==c)
	{
		sum = 10000 + a * 1000;
	}
	else if (a==b &&a!=c)
	{
		sum = 1000 + a * 100;
	}
	else if (a==c&&a!=b)
	{
		sum = 1000 + a * 100;
	}
	else if (b==c&&b!=a)
	{
		sum = 1000 + b * 100;
	}
	else
	{
		sum = big(a, b, c) * 100;
	}
	cout << sum;
}