#include <iostream>

/*
* 2�� ���Ѵ�
* 1�� �����ʿ� �߰��Ѵ� = 10�� ���ϰ� 1�� ���Ѵ�
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