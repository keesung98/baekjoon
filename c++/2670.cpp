#include <iostream>
#include <vector>

using namespace std;

int N;

int main()
{
	double temp, max = 0;
	vector<double> number, result;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		number.push_back(temp);
	}

	result.push_back(number[0]);
	max = number[0];

	for (int i = 1; i < N; i++) {
		if (number[i] * result[i - 1] >= number[i]) temp = number[i] * result[i - 1];
		else temp = number[i];

		result.push_back(temp);
		if (max < temp) max = temp;
	}

	cout << fixed;
	cout.precision(3);
	cout << max;
}