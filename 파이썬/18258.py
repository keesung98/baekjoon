import collections
import sys
from collections import deque

input=sys.stdin.readline
N=int(input())
#런타임 에러 해결
a=deque([]) 

for i in range(N):
    S=input().split()
    
    if S[0]=='push':
        a.append(int(S[1]))
    elif S[0]=='pop':
        if not a:
            print(-1)
        else:
            print(a.popleft())
    elif S[0]=='size':
        print(len(a))
    elif S[0]=='empty':
        if not a :print(1)
        else:
            print(0)
    elif S[0]=='front' :
        if not a : print(-1)
        else:
            print(a[0])
    elif S[0]=='back' :
        if not a : print(-1)
        else:
            print(a[-1])
    
    