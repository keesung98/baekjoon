#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a1, a0, c, n0; cin >> a1 >> a0 >> c >> n0;
	cout << ((a1 * n0 + a0 <= c * n0) && (c - a1 >= 0));
}