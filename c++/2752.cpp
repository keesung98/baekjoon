#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	for (int i = 0; i < 3; i++)
	{
		int T;
		cin >> T;
		v.push_back(T);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 3; i++)
	{
		cout << v[i]<<" ";
	}
}