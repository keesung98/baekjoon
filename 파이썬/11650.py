import sys

input=sys.stdin.readline
N=int(input())
array=[]

for i in range(N):
    [x,y]=map(int,input().split())
    array.append([x,y])

Sort_array=sorted(array)

for i in range(N):
    print(Sort_array[i][0],Sort_array[i][1])