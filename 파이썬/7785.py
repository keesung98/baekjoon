import sys

input=sys.stdin.readline
n=int(input())
s=dict()

for _ in range(n):
    name,state=map(str, input().split())
    if state=="enter": s[name]=1
    else: del s[name]

s=s.keys()
s=sorted(s,reverse=True)
for i in s:
    print(i)