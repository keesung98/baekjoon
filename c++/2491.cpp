#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int maxValue = 1;;
	int len = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] >= arr[i - 1]) len++;
		else len = 1;
		maxValue = max(maxValue, len);
	}

	len = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] <= arr[i - 1]) len++;
		else len = 1;
		maxValue = max(maxValue, len);
	}
	cout << maxValue;
}