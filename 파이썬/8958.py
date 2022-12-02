import sys

input=sys.stdin.readline

T=int(input())
for i in range(T):
    s=input()
    l=len(s)
    sum=0
    min_sum=0
    for j in range(l):
        if s[j]=='O':
            min_sum+=1
            sum+=min_sum
        else:
            min_sum=0
    print(sum)