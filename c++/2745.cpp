#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string b_num;
    int n;
    cin >> b_num >> n;

    int sum(0);
    for (int i = 0; i < b_num.length(); i++)
    {
        int tmp = b_num[b_num.length() - (i + 1)];
        if ('0' <= tmp && tmp <= '9')
        {
            tmp = tmp - '0';
        }
        else
        {
            tmp = tmp + 10 - 'A';
        }
        sum += (tmp * (int)pow(n, i));
    }
    cout << sum << '\n';

    return 0;
}