#include<iostream>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;

	for (int i = 1; i * i <= n; i++)
	{
		count++;
	}cout << count;
}