#include <iostream>
using namespace std;
int dp[1001];
int A[1001];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> A[i];
	}
	int max = 0;
	for (int i = 1; i <= n; i++)
	{
		dp[i] = A[i];
		for (int j = 1; j < i; j++)
		{
			if (A[j] < A[i] && dp[i] < dp[j] + A[i])
			{
				dp[i] = dp[j] + A[i];
			}
		}
		if (max < dp[i])
		{
			max = dp[i];
		}
	}
	cout << max;
}