#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
int answer = INT_MIN;
int main() {
	int start, end, n, k, sum = 0;
	cin >> n >> k;
	start = 0;
	end = k - 1;
	vector <int> v(n);
	for (int i = 0; i < n; i++)cin >> v[i];
	for (int i = 0; i <= k - 1; i++)sum += v[i];
	for (int i = 0; i <= n - k; i++) {
		answer = max(answer, sum);
		if (end == n - 1)break;
		else {
			sum -= v[start++];
			sum += v[++end];
		}
	}
	cout << answer;
}