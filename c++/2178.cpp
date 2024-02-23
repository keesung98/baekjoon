#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
#include <string>
using namespace std;
int map[101][101];
int visited[101][101];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int height;
int width;
queue <pair<int, int>> q;
void bfs() {
	int x, y;
	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (nx < 0 || nx >= width || ny < 0 || ny >= height || !map[ny][nx])continue;
			if (visited[ny][nx])continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny, nx });
		}
	}
	cout << visited[height - 1][width - 1];
	exit(0);
}

int main() {
	cin >> height >> width;
	for (int i = 0; i < height; i++) {
		string s; cin >> s;
		for (int j = 0; j < s.size(); j++) {
			map[i][j] = s[j] - '0';
		}
	}
	visited[0][0] = 1;
	q.push({ 0,0 });
	bfs();
	return 0;
}