from collections import deque
import sys

input=sys.stdin.readline
n,m,v=map(int, input().split())

graph=[[0]*(n+1) for _ in range(n+1)]

for _ in range(m):
    a,b=map(int, input().split())
    graph[a][b]=graph[b][a]=1

def bfs(start_v):
    discovered=[start_v]
    queue=deque()
    queue.append(start_v)

    while queue:
        v=queue.popleft()
        print(v,end=' ')

        for j in range(len(graph[start_v])):
            if graph[v][j]==1 and (j not in discovered):
                discovered.append(j)
                queue.append(j)

def dfs(start_v, discovered=[]):
    discovered.append(start_v)
    print(start_v,end=' ')

    for j in range(len(graph[start_v])):
        if graph[start_v][j]==1 and (j not in discovered):
            dfs(j,discovered)

dfs(v)
print()
bfs(v)