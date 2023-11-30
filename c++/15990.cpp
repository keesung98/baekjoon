#include<iostream>
#include<algorithm>
using namespace std;
#define MOD 1000000009
int T, n;
long long ans, dp[100001][4];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> T;

	while (T--)
	{
		cin >> n;

		dp[1][1] = 1;
		dp[1][2] = 0;
		dp[1][3] = 0;

		dp[2][1] = 0;
		dp[2][2] = 1;
		dp[2][3] = 0;

		dp[3][1] = 1;
		dp[3][2] = 1;
		dp[3][3] = 1;

		for (int i = 4; i <= n; i++)
		{
			dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % MOD;
			dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % MOD;
			dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % MOD;
		}

		ans = (dp[n][1] + dp[n][2] + dp[n][3]) % MOD;

		cout << ans << '\n';
	}
}