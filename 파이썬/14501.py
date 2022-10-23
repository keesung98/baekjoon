import sys

input=sys.stdin.readline
n=int(input())
dp=[]
t=[]
p=[]
for i in range(1,n+1):
    a,b=map(int,input().split())
    t.append(a)
    p.append(b)
    dp.append(b)
dp.append(0)
for i in range(n-1,-1,-1):
    if t[i]+i>n:
        dp[i]=dp[i+1]
    else:
        dp[i]=max(dp[i+1],p[i]+dp[i+t[i]])
print(dp[0])

