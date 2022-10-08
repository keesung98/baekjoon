import sys

input=sys.stdin.readline
n=int(input())
IMAGE=[input().strip() for _ in range(n)]
answer=""

def Quad_Tree(x,y,n):
    check=IMAGE[x][y]
    global answer

    for row in range(x,x+n):
        for col in range(y,y+n):
            if check != IMAGE[row][col]:        #하나라도 다르면 4등분
                answer+='('
                Quad_Tree(x, y, n//2)           #1사분면
                Quad_Tree(x, y+n//2, n//2)      #2사분면
                Quad_Tree(x+n//2, y, n//2)      #3사분면
                Quad_Tree(x+n//2, y+n//2, n//2) #4사분면
                answer+=')'
                return 

    if check=='0':                              #모두 0일 때 
        answer+='0'
    else:                                       #모두 1일 때 
        answer+='1'
    return 

Quad_Tree(0, 0, n)
print(answer)