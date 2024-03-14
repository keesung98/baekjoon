#include <iostream>

/*
* 2를 곱한다
* 1을 오른쪽에 추가한다 = 10을 곱하고 1을 더한다
*/
using namespace std;

int A, B, cnt;

int main()
{
	cin >> A >> B;

	while (true)
	{
		if (A > B)
		{
			cout << -1;
			break;
		}
		if (A == B)
		{
			cnt++;
			cout << cnt;
			break;
		}

		if (B % 10 == 1)
		{
			B--;
			B /= 10;
		}
		else if (B % 2 == 0)
		{
			B /= 2;
		}
		else
		{
			cout << -1;
			break;
		}

		cnt++;
	}

}