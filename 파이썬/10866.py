import sys
from collections import deque

input=sys.stdin.readline
N=int(input())
a=deque([])

for _ in range(N):
    S=input().split()
    if S[0]=="push_front":
        if len(a)>0: a.appendleft(S[1])
        else: a.append(S[1])
    elif S[0]=="push_back":
        a.append(S[1])
    elif S[0]=="pop_front":
        if len(a)>0: print(a.popleft())
        else: print(-1)
    elif S[0]=="pop_back":
        if len(a)>0: print(a.pop())
        else: print(-1)
    elif S[0]=="size":
        print(len(a))
    elif S[0]=="empty":
        if len(a)>0: print(0)
        else: print(1)
    elif S[0]=="front":
        if len(a)>0: print(a[0])
        else: print(-1)
    elif S[0]=="back":
        if len(a)>0: print(a[-1])
        else: print(-1)
