#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int arr[9][9] = {};
	int max = 0;
	int idxX, idxY;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
				idxX = i + 1;
				idxY = j + 1;
			}
		}
	}

	cout << max << "\n" << idxX << " " << idxY << "\n";
}