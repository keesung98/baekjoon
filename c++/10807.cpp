#include <iostream>
#include <list>
using namespace std;

list<int> L;

int main() {
	int n, v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		L.push_back(temp);
	}
	cin >> v;
	L.sort();
	int count=0;
	for (int i = 0; i < n; i++)
	{
		if (L.front() == v)
		{
			count += 1;
		}
		L.pop_front();
	}
	cout << count;
}