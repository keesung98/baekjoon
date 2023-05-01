#include <iostream>
#include <algorithm>
#include <cmath>

#define endl "\n"
#define MAX 1001
using namespace std;

int N;
int Arr[MAX];
int DP[MAX];

void Input()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> Arr[i];
    }
}

void Solution()
{
    for (int i = 1; i <= N; i++)
    {
        DP[i] = 1;
        for (int j = 1; j <= i; j++)
        {
            if (Arr[i] < Arr[j] && DP[j] + 1 > DP[i])
            {
                DP[i] = DP[j] + 1;
            }
        }
    }

    int Max = 0;
    for (int i = 1; i <= N; i++)
    {
        if (DP[i] > Max)
        {
            Max = DP[i];
        }
    }
    cout << Max << endl;
}

void Solve()
{
    Input();
    Solution();
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("Input.txt", "r", stdin);
    Solve();

    return 0;
}
