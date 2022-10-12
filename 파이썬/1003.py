import sys

def fibo(n):
    if len(dp_0)<=n:
        for i in range(len(dp_0),n+1):
            dp_0.append(dp_0[i-1]+dp_0[i-2])
            dp_1.append(dp_1[i-1]+dp_1[i-2])
    print(dp_0[n],dp_1[n])

input=sys.stdin.readline
n=int(input())
dp_0=[1,0,1]
dp_1=[0,1,1]

for i in range(n):
    t=int(input())
    fibo(t)