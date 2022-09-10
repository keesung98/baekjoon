import sys

input=sys.stdin.readline
S=input().split()
N=int(S[0])
P=int(S[1])
a=[[] for _ in range(N)]
count=0

for _ in range(N):
    code=input().split()
    n=int(code[0])
    p=int(code[1])
    if not a[n-1]:
        a[n-1].append(p)
        count+=1
    else:
        while a[n-1] and a[n-1][-1]>p:
            a[n-1].pop()
            count+=1
        if not a[n-1] or a[n-1][-1]<p: 
            a[n-1].append(p)
            count+=1


print(count)