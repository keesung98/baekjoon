#include <iostream>
using namespace std;

int main() {
	int rc[100][100]{};

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int left, top;
		cin >> left >> top;
		for (int row = left; row <left+10 ; row++)
		{
			for (int col = top;  col <top+10;  col++)
			{
				rc[row][col] = 1;
			}
		}
	}

	int count = 0;
	for (int row = 0; row < 100; row++)
	{
		for (int col = 0; col < 100; col++)
		{
			if (rc[row][col] == 1) {
				count++;
			}
		}
	}
	cout << count;
}