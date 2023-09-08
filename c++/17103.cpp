#include<iostream>
using namespace std;
#define MAX 1000000

//N������ �Ҽ� �Ǻ�
bool prime[MAX + 1];

int main() {
	for (int i = 0; i <=MAX ; i++)
	{
		prime[i] = true;
	}
	//1�� �Ҽ��� �ƴϱ⿡ false
	prime[1] = false;
	for (int i = 2; i <= MAX; i++)
	{
		for (int j = i * 2; j < MAX; j = j + i) 
		{
			prime[j] = false;
		}
	}

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		int count = 0;
		cin >> N;
		//�ߺ� ������ ���� i�� N�� ���ݱ����� Ŀ���� �� 10=5+5 �̷�������
		for (int i = 1; i < N/2+1; i++)
		{
			if (prime[i]==true&&prime[N-i]==true)
			{
				count++;
			}
		}
		cout << count<<endl;
	}
}