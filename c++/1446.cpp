#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, d;
vector<pair<int, int> > vec[10001];
int v[10001];

void input() {
	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		vec[a].push_back({ b,c });
	}

	for (int i = 0; i < 10001; i++) { v[i] = i; }
}

void solve() {
	for (int i = 0; i <= d; i++) {
		if (i != 0) { v[i] = min(v[i], v[i - 1] + 1); }
		for (int j = 0; j < vec[i].size(); j++) {
			v[vec[i][j].first] = min({ v[i] + vec[i][j].second,v[i] + (vec[i][j].first - i), v[vec[i][j].first] });
		}
	}

	cout << v[d];
}

int main() {
	input();
	solve();

}