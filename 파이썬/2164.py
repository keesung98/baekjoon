import sys

N = int(sys.stdin.readline())

arr = [i+1 for i in range(N)]

while len(arr) > 1:
    if len(arr) % 2:
        t = [arr[-1]]
        t.extend(arr[1::2])
        arr = t
    else:
        arr = arr[1::2]
        

print(arr[0])