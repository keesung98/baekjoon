#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int main() {
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	for (int i = 0; i < n; i++)
	{
		if (v[i] < x) {
			cout << v[i] <<" ";
		}
	}
}