maxnumber=0
rull=0

for i in range (1,10):
    number=int(input())
    if maxnumber<number:
        maxnumber=number
        rull=i

print(maxnumber)
print(rull)


