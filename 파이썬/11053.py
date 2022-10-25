import sys

input=sys.stdin.readline
a=int(input())
A=list(map(int, input().split()))
dp=[0 for i in range(a)]

for i in range(a):
    for j in range(i):
        if A[i]>A[j] and dp[i]<dp[j]:
            dp[i]=dp[j]
    dp[i]+=1
print(max(dp))