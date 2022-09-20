import sys

input=sys.stdin.readline()
sugar=int(input)
gr=0

while sugar>=0:
    if sugar%5==0:
        gr+=(sugar//5)
        print(gr)
        break
    sugar-=3
    gr+=1
else:
    print(-1)
    