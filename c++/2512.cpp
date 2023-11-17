#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,M;
int answer = 0;
vector<int> v;

void BinerySearch(int min,int max) {
	int result = (min + max) / 2;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		if (v[i]>=result)
		{
			sum += result;
		}
		else
		{
			sum += v[i];
		}
	}
	if (min > max) {
		return;
	}
	if (sum <= M) {
		answer = result;
		BinerySearch(result + 1, max);
	}
	else {
		BinerySearch(min, result - 1);
	}

}

void Input(int n) {
	for (int i = 0; i < n; i++)
	{
		int won;
		cin >> won;
		v.push_back(won);
	}
	sort(v.begin(), v.end());
}

int main() {
	cin >> N;
	Input(N);
	cin >> M;
	BinerySearch(1, v[N-1]);
	cout << answer;
}