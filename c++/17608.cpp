#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    int max = 0, n, m, cnt = 0;
    stack<int> s;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        s.push(m);
    }
    while (s.size())
    {
        if (max < s.top())
        {
            max = s.top();
            cnt++;
        }
        s.pop();
    }
    cout << cnt;
}