n, m = map(int, input().split())
 
leaf = 0
if m == 2:
    leaf = 1  
 
last_leaf = 0
for i in range(1, n):
    if m > leaf:
        print(0, i)
        leaf += 1
    else:
        print(last_leaf, i)
    last_leaf = i