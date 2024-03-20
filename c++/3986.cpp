#include <iostream>
#include <string>
#include <stack>

using namespace std;

int n;
int answer = 0;

bool Solve(string s)
{
	bool isTrue=false;
	stack<char> stack;
	for (int i = 0; i < s.size(); i++)
	{
		if (stack.empty())
		{
			stack.push(s[i]);
		}
		else
		{
			if (stack.top() == s[i])stack.pop();
			else stack.push(s[i]);
		}
	}
	if (stack.empty())
	{
		isTrue = true;
	}
	return isTrue;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (Solve(s))
		{
			answer++;
		}
	}
	cout << answer;
}