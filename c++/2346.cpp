#include<iostream>
#include<deque>
using namespace std;

int main() {
	deque<pair<int, int>> dq;
	int N;

	cin >> N;
	int num;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		dq.push_back(make_pair(num, i + 1));
	}
	while (!dq.empty())
	{
		int head_num = dq.front().first;
		cout << dq.front().second << " ";
		dq.pop_front();

		if (dq.empty()) break;
		if (head_num > 0)	//양수일 때 오른쪽으로 이동
		{
			for (int i = 0; i < head_num-1; i++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else	//음수일 때 왼쪽으로 이동
		{
			for (int i = 0; i < head_num*(-1); i++)
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
}