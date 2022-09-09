
import sys
input=sys.stdin.readline
N=int(input())
a=[]
for i in range(N):
    S=input().split()
    
    if S[0]=='push':
        a.append(int(S[1]))
    elif S[0]=='top' :
        if len(a)>0 : print(a[-1])
        else:
            print(-1)
    elif S[0]=='pop':
        if len(a)>0: print(a.pop())
        else:
            print(-1)
    elif S[0]=='size':
        print(len(a))
    elif S[0]=='empty':
        if len(a)>0 :print(0)
        else:
            print(1)
    
