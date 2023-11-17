#define MAX 1000000000
#include <iostream>
#include<vector>
using namespace std;

int N, K;
int arr[100002];

int findMid(int low, int high) {
	int mid = (low + high) / 2;

	int cnt = 1;
	int sum = 0;
	int max = 0;
	if (low == high)return low;

	for (int i = 0; i < N; i++) {
		if (sum + arr[i] > mid) {
			cnt++;
			if (sum > max) max = sum;
			sum = 0;
		}
		sum += arr[i];
		if (arr[i] > mid) {
			return findMid(mid + 1, high);
		}
	}

	if (cnt > K) {
		return findMid(mid + 1, high);
	}
	else {
		return findMid(low, mid);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	cout << findMid(0, MAX) << "\n";

	return 0;
}