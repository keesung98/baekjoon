#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int map[25][25];
int visited[25][25];
vector<int> cntVec;

//À§ ¿À ¾Æ ¿Þ
int dr[4] = { -1,0,1,0 };
int dc[4] = { 0,1,0,-1 };
int N;
int cnt;

void dfs(int r, int c) {

    for (int i = 0; i < 4; i++) {

        int nr = r + dr[i];
        int nc = c + dc[i];

        if (nr >= N || nr < 0 || nc >= N || nc < 0) continue;

        if (visited[nr][nc] == 0 && map[nr][nc] == 1) {
            visited[nr][nc] = 1;                    
            cnt += 1;                                 
            dfs(nr, nc);
        }
    }

}


int main() {

    int res = 0;

    cin >> N;
    string str;

    for (int i = 0; i < N; i++) {
        cin >> str;
        for (int j = 0; j < str.length(); j++) {        
            visited[i][j] = 0;

            if (str[j] == '1') {
                map[i][j] = 1;
            }
            else map[i][j] = 0;
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (map[i][j] == 1 && visited[i][j] == 0) {
                visited[i][j] = 1;
                cnt = 1;    
                dfs(i, j);
                cntVec.push_back(cnt);
                res++;  
            }
        }
    }

    sort(cntVec.begin(), cntVec.end());
    cout << res << "\n";

    for (int i = 0; i < cntVec.size(); i++) {
        cout << cntVec[i] << "\n";
    }

    return 0;
}