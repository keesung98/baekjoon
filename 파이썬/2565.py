import sys

input=sys.stdin.readline
N=int(input())
electric_cord=[]
count=[0]*N

for i in range(N):
    electric=list(map(int,input().split()))
    electric_cord.append(electric)

## 오름차순 정렬
electric_cord.sort()

for i in range(N):
    ## 안겹치는 최대 전깃줄의 횟수
    max_N=0 
    for j in range(i):
        ## i번째의 전깃줄의 B값이 더 크면 겹치지 않음
        if electric_cord[i][1]>electric_cord[j][1]:
            ## 위의 조건을 만족하면 전까지 안겹치던 j를 저장 공간에서 꺼내와 max에 입력 
            if max_N<count[j]:
                max_N=count[j]
    count[i]=max_N+1

##print(count)
print(N-max(count))