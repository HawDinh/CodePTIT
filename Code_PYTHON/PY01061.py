import math

def check(n):
    if n < 2:
        return 0
    for i in range(2,int(math.sqrt(n) + 1)):
        if n % i == 0:
            return 0
    return 1

for t in range(int(input())):
    s = input()
    dau = s[:3]
    cuoi = s[-3:]
    i = int(dau)
    j = int(cuoi)
    if check(i) == 1 and check(j) == 1:
        print("YES")
    else:
        print("NO")
