#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,temp;
vector<int>v;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		cout << v[i]<<endl;
	}
}