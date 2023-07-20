#include <iostream>

void solve(void);

int main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	solve();
}

void solve(void)
{
	std::string a, b;
	std::cin >> a >> b;

	if (a.size() < b.size())
		swap(a, b);

	int carry = 0;
	std::string answer;
	for (int i = 1; i <= a.size(); i++)
	{
		int index_a = a.size() - i;
		int index_b = b.size() - i;
		char char_a = a[index_a];
		char char_b = (index_b < 0 ? '0' : b[index_b]);

		int new_num = (char_a - '0') + (char_b - '0') + carry;
		carry = (10 <= new_num) ? new_num / 10 : 0;
		char remain = (new_num % 10) + '0';
		answer = remain + answer;
	}
	if (carry)
		answer = char(carry + '0') + answer;
	std::cout << answer;
}