#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int n;
int dp[100001];
int main() {

	cin >> n;

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;

		int x = 2;
		while ((int)pow(x, 2) <= i)
		{
			dp[i] = min(dp[i], 1 + dp[i - (int)pow(x, 2)]);
			x++;
		}
	}
	cout << dp[n] << endl;
}