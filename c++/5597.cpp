#include <iostream>
using namespace std;

int main() {

    int a;

    bool check[31] = { 0, };

    for (int i = 1; i <= 28; i++) {
        cin >> a;
        check[a] = 1;
    }

    for (int j = 1; j <= 30; j++) {
        if (check[j] == 0) {
            cout << j << "\n";
        }
    }
}