#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int n,input;

int main() {
	list<int> v;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		v.push_front(i);
	}
	for (int i = 1; i <n; i++)
	{
		cout << v.back()<<" ";
		v.pop_back();
		input = v.back();
		v.pop_back();
		v.push_front(input);
	}
	cout << v.front();
}