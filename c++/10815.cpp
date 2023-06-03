#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N,M,temp;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v;
	cin >> N;
	while (N--)
	{
		cin >> temp; v.push_back(temp);
	}
	sort(v.begin(), v.end());
	cin >> M;
	while (M--)
	{
		cin >> temp;
		cout << binary_search(v.begin(), v.end(), temp) << ' ';
	}
}