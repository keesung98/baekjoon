import sys
input=sys.stdin.readline
T=int(input())

for i in range(T):
    N=int(input())
    list=[0]*N
    for j in range(N):
        a,b=map(int,input().split())
        list[j]=[a,b]
    
    listsorted=sorted(list,key=lambda x: x[0])
    hired=1
    man=listsorted[0][1]
    for j in range(N):
        if listsorted[j][1]<man:
            man=listsorted[j][1]
            hired+=1
    print(hired)