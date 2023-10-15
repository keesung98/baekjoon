#include <iostream>
#include <vector>
using namespace std;

vector<int> v[101]; //��尡 �湮�� �� �ִ� ��� ���
bool virus[101];
int cnt = 0;

void dfs(int x)
{
	cnt++;
	virus[x] = true;
	for (int i = 0; i < v[x].size(); i++)
	{
		int y = v[x][i];	//�湮 ��� Ž��
		if (!virus[y])
		{
			dfs(y);
		}
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < b; i++)
	{
		int c, d;
		cin >> c >> d;
		v[c].push_back(d);
		v[d].push_back(c);
	}
	dfs(1);
	cout << cnt - 1;
}