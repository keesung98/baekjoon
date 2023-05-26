#include <iostream>
#include <algorithm>

using namespace std;
int n, k;
int dp[101][100001];
int w[100001];
int v[1001];

int main() {
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		cin >> w[i] >> v[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			if (j >= w[i]) { dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]); }
			else { dp[i][j] = dp[i - 1][j]; }
		}
	}
	cout << dp[n][k];
}