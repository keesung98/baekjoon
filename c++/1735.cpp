#include<iostream>
using namespace std;

//최대공약수 구하기
int gcd(int a, int b)
{
	while (b!=0)
	{
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main() {
	int A, B, C, D;
	cin >> A >> B;
	cin >> C >> D;
	
	int mole, deno;
	mole = (A * D) + (B * C);
	deno = (B * D);
	int g = gcd(mole, deno);

	//분자와 분모를 최대 공약수로 나눠준다.
	cout << mole/g << " " << deno/g;
}