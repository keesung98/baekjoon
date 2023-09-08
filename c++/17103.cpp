#include<iostream>
using namespace std;
#define MAX 1000000

//N까지의 소수 판별
bool prime[MAX + 1];

int main() {
	for (int i = 0; i <=MAX ; i++)
	{
		prime[i] = true;
	}
	//1은 소수가 아니기에 false
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
		//중복 방지를 위해 i를 N의 절반까지만 커지게 함 10=5+5 이런식으로
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