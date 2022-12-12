import sys

input=sys.stdin.readline

n,k=map(int, input().split())

coin=[]
for i in range(n):
    a=int(input())
    coin.append(a)

count=0
for i in range(n-1,-1,-1):
    if k==0:break 
    if coin[i]>k:continue 
    count+=k//coin[i]
    k%=coin[i]

print(count)