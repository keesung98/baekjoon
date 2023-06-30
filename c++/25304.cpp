#include <iostream>

using namespace std;

int main() {
	int x, n, sum, a, b;
	cin >> x;
	cin>>n;
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		sum += (a * b);
	}
	if (sum == x)
		printf("Yes");
	else
		printf("No");
	return 0;
}