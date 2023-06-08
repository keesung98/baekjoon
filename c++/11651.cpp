#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, x, y;

bool compare(pair<int, int>a, pair<int, int>b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    else {
        return a.second < b.second;
    }
}

int main() {
    vector<pair<int, int> > v;
    cin>>N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < N; i++)
        printf("%d %d\n", v[i].first, v[i].second);


}