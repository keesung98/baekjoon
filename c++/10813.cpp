#include <iostream>
using namespace std;

int main() {
	int n, m;
	int arr[101];

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		arr[i]=i;
	}
	for (int k = 0; k < m; k++)
	{
		int i, j, temp;
		cin >> i >> j;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i]<<" ";
	}
}