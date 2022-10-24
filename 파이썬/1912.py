import sys

input=sys.stdin.readline
n=int(input())
num_list=list(map(int,input().split()))
dp=[]
dp.append(num_list[0])
for i in range(1,n):
    dp.append(max(dp[i-1]+num_list[i],num_list[i]))

print(max(dp))