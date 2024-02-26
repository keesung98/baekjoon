#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
using namespace std;
#define endl "\n"

#define MAX 100+1
int n;
int board[MAX][MAX];
bool visited[MAX][MAX];

int dy[] = { 0,1,0,-1 };
int dx[] = { 1,0,-1,0 };
int ans;

void reset() {
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			visited[i][j] = false;
		}
	}
}


void dfs(int y, int x, int rain) {
	visited[y][x] = true;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx<1 || nx > n || ny < 1 || ny > n)
		{
			continue;
		}

		if (!visited[ny][nx] && board[ny][nx] > rain)
		{
			dfs(ny, nx, rain);
		}
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> board[i][j];
		}
	}


	for (int k = 0; k <= 100; k++)
	{
		int cnt = 0;
		reset();
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (board[i][j] > k && !visited[i][j])
				{
					cnt++;
					dfs(i, j, k);
				}
			}
		}
		if (cnt > ans)
		{
			ans = cnt;
		}
	}

	cout << ans;
}