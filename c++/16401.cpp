#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(int M, vector<int> snak, int ans) {
    int cnt = 0;
    for (int i = 0; i < snak.size(); i++) {
        cnt += snak[i] / ans;
    }
    if (cnt >= M)
        return true;
    return false;
}

int binarySearch(int M, vector<int> snak) {
    int answer = 0;

    int left = 1;
    int right = 1000000000;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (check(M, snak, mid)) {
            left = mid + 1;
            answer = mid;
        }
        else {
            right = mid - 1;
        }
    }
    return answer;
}

void sol(int M, vector<int> snak) {
    sort(snak.begin(), snak.end());
    cout << binarySearch(M, snak);
}

int main() {
    int M, N; 
    cin >> M >> N;
    vector<int> snak;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        snak.push_back(num);
    }

    sol(M, snak);
}