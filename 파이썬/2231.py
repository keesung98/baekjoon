n=int(input())

k=0
for i in range(1,n+1):
    A=list(map(int, str(i)))
    k=i+sum(A)
    if k==n:
        print(i)
        break 
    if i==n:print(0)