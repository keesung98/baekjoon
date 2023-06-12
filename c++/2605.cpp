#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,temp;
vector<int> v;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> temp;
		v.insert(v.end()-temp, i);
	}
	for (int i = 0; i < n; i++)
	{
		cout << v[i]<<" ";
	}
}