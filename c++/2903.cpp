#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int x = 2;

    while (N--)
    {
        x += (x - 1);
    }
    x *= x;
    
    cout << x << endl;
}