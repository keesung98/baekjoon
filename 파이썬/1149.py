import sys

input=sys.stdin.readline
N=int(input())
house=[]

for i in range(N):
    color=list(map(int, input().split()))
    house.append(color)

for i in range(1,N):
    house[i][0]=min(house[i-1][1],house[i-1][2])+house[i][0]    # i번째 집의 빨간색을 선택했을 경우
    house[i][1]=min(house[i-1][0],house[i-1][2])+house[i][1]    # i번째 집의 초록색을 선택했을 경우
    house[i][2]=min(house[i-1][0],house[i-1][1])+house[i][2]    # i번째 집의 파란색을 선택했을 경우

print(min( house[i][0], house[i][1], house[i][2]))