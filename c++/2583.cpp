#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define y1 rrrr
int M, N, K, x1, y1, x2, y2;
int arr[104][104];
int visited[104][104];
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
vector<int> ret;

int DFS(int y, int x) {
	visited[y][x] = 1;
	int ret = 1;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= M || nx >= N || visited[ny][nx] == 1)
		{
			continue;
		}
		if (arr[ny][nx] == 1)
		{
			continue;
		}
		ret += DFS(ny, nx);
	}

	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> M >> N >> K;

	for (int i = 0; i < K; i++) {
		cin >> x1 >> y1 >> x2 >> y2;

		for (int x = x1; x < x2; x++) {
			for (int y = y1; y < y2; y++) {
				arr[y][x] = 1;
			}
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] != 1 && visited[i][j] == 0) {
				ret.push_back(DFS(i, j));
			}
		}
	}

	sort(ret.begin(), ret.end());
	cout << ret.size() << "\n";
	for (auto i : ret) cout << i << " ";

	return 0;
}