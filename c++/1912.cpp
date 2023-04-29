#include <iostream>

using namespace std;

int N[100000];
int dp[100000];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> N[i];

	dp[0] = N[0];
	int result = dp[0];
	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] + N[i], N[i]);
		result = max(result, dp[i]);
	}
	cout << result << endl;
}