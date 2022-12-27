import sys

input=sys.stdin.readline

m=int(input())
n=int(input())

prime=[]

for i in range(m,n+1):
    flag=0
    if i!=1:
        for j in range(2,i):
            if i%j==0:
                flag=1
            if flag==1:
                break
        if flag==0:
            prime.append(i)

if len(prime)==0:
    print(-1)
else:
    print(sum(prime))
    print(min(prime))