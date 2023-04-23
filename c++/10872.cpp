#include <iostream>
using namespace std;
int main() {
    int n, count;
    count=1;
    cin >> n ;
    if (n == 0){
        cout << 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            count = count*i;
        }
    cout << count;
    }
}