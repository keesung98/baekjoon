import sys

input=sys.stdin.readline
k=int(input())
money=[]

for i in range(k):
    n=int(input())
    if n==0:
        money.pop()
    else:
        money.append(n)

print(sum(money))