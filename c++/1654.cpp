#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int k, n;
vector<int> v;

void input() {
	cin >> k >> n;
	int w;
	for (int i = 0; i < k; i++)
	{
		cin >> w;
		v.push_back(w);
	}
	sort(v.begin(), v.end());
}

void solve() {
	long long left = 1;
	long long right = v.back();
	long long mid;
	int ans=0;
	while (left<=right)
	{
		mid = (left + right) / 2;
		int cnt = 0;
		for (int i = 0; i < k; i++)
		{
			cnt += v[i] / mid;
		}
		if (cnt>=n)
		{
			left = mid + 1;
			if (ans<mid)
			{
				ans = mid;
			}
		}
		else
		{
			right = mid - 1;
		}
	}
	cout << ans;
}

int main()
{
	input();
	solve();
}