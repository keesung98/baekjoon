#include <iostream>
#include <algorithm>

using namespace std;

int GCD(int a, int b)
{
    if (b == 0) { return a; }
    return GCD(b, a % b);
}
int main() {
    int n, a, b, c, g;
    cin >> n;
    if (n == 2)
    {
        cin >> a >> b;
        g = GCD(a, b);
        for (int i = 1; i <= g; i++)
            if (g % i == 0)cout << i << '\n';
    }
    else
    {
        cin >> a >> b >> c;
        g = GCD(a, GCD(b, c));
        for (int i = 1; i <= g; i++)
            if (g % i == 0)cout << i << '\n';
    }
}