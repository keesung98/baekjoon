#include <iostream>

using namespace std;

int n,m,p1,p2;
int y, x;
int ans = -1;

int map[101][101];
bool check[101];

void dfs(int depth, int root) {

	check[root] = true;

	if (root == p2) {
		ans = depth;
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!check[i] && map[root][i] == 1) {
			check[i] = true;
			dfs(depth + 1, i);
			check[i] = false;
		}
	}

}

int main()
{
	cin >> n;
	cin >> p1 >> p2;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> y >> x;
		map[y][x] = 1;
		map[x][y] = 1;
	}

	dfs(0, p1);

	cout << ans;
	return 0;
}