#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int cnt = 0;
	int num, temp;
	cin >> n;
	num = n;

	while (1) {
		temp = (n % 10) * 10 + (n / 10 + n % 10) % 10;
		cnt++;
		n = temp;
		if (temp == num)
			break;
	}
	cout << cnt << '\n';
}