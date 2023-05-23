#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    vector<int> v;
    int t;

    for (int i = 0; i < 3; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    
    cout << v[1];
    return 0;
}