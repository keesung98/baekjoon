import sys
import heapq

input=sys.stdin.readline
N=int(input())
heap=[]

for _ in range(N):
    n=int(input())
    if n==0:
        if len(heap):
            print(heapq.heappop(heap)[1])
        else: print(0)
    else:
        heapq.heappush(heap,(-n,n))