#include <iostream>
using namespace std;

int arr[4] = { 25,10,5,1 };

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int change;
		cin >> change;

		for (int j = 0; j < 4; j++) {
			int count = change / arr[j];
			change -= (change / arr[j]) * arr[j];
			cout << count << " ";
		}
		cout << "\n";

	}
	return 0;
}