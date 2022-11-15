import sys

input=sys.stdin.readline

n=int(input())

man=list(map(int,input().split()))

man.sort()

min_time=0

for i in range(n):
    for j in range(i+1):
        min_time+=man[j]

print(min_time)