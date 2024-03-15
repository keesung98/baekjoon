#include<iostream> 
using namespace std; 
#define MAX_VALUE 101 

int N, M, K;
int map[MAX_VALUE][MAX_VALUE];
bool visit[MAX_VALUE][MAX_VALUE];
int cnt = 0;
int result = 0; 
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1}; 

void dfs(int x, int y) 
{    
	cnt++;    visit[x][y] = true;
	for(int i = 0; i < 4; i++)
	{        
		int nx = x + dx[i];
		int ny = y + dy[i];  
		if(nx <= 0 || nx > N || ny <= 0 || ny > M) 
		{           
			continue;     
		} 
		if(visit[nx][ny] == false && map[nx][ny] == 1)
		{            
			dfs(nx, ny);        
		}    
	}
} 

int main() 
{    
	cin >> N >> M >> K;   
	for(int i = 0; i < K; i++)
	{        
		int u, v;    
		cin >> u >> v;      
		map[u][v] = 1;   
	}     
	for(int i = 1; i <= N; i++) 
	{       
		for(int j = 1; j <= M; j++) 
		{            
			if(map[i][j] == 1 && visit[i][j] == false)
			{               
				cnt = 0;         
				dfs(i, j);       
				result = cnt > result ? cnt : result;      
			}      
		}
	}
	printf("%d\n", result);    
	return 0;
}
