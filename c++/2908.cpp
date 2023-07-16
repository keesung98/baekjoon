#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;

	char temp;
	temp = A[2];
	A[2] = A[0];
	A[0]=temp;

	temp = B[2];
	B[2] = B[0];
	B[0] = temp;

	int a, b;
	a = stoi(A);
	b = stoi(B);

	if (a>b)
	{
		cout << a;
	}
	else
	{
		cout << b;
	}
}