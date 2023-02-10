import sys

k=int(input())

dpA=[0]*(50)
dpB=[0]*(50)

dpA[1]=0
dpB[1]=1
dpA[2]=1
dpB[2]=1

for i in range(3,k+1):
    dpA[i]=dpB[i-1]
    dpB[i]=dpA[i-1]+dpB[i-1]

print(dpA[k],dpB[k])