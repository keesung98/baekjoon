a=input()
b=input()
a=int(a)
b=int(b)

t=0
if a>0 and b>0:
    t=1
elif a>0 and b<0:
    t=4
elif a<0 and b>0:
    t=2
else:
    t=3
print(t)