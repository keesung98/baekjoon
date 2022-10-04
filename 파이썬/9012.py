import sys

input=sys.stdin.readline
t=int(input())

for i in range(t):
    s=input()
    s=list(s)
    sum=0
    for j in s:
        if j=='(':
            sum+=1
        elif j==')':
            sum-=1
        if sum<0:
            print('NO')
            break
    if sum>0:
        print('NO')
    elif sum==0:
        print('YES')