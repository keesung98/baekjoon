from itertools import product

N,K = map(int,input().split())
arr = list(map(str,input().split()))
length = len(str(N))

while(True):
    temp = list(product( arr, repeat=length))
    answer = []

    for i in temp :
        if int("".join(i)) <= N :
            answer.append(int("".join(i)))

    if len(answer)>= 1:
        print(max(answer))
        break
    else : 
        length -=1