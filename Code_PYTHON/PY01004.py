import math

def checkNT(a):
    if a < 2:
        return 0
    for i in range (2, int(math.sqrt(a)) + 1):
        if a % i == 0:
            return 0
    return 1

for t in range(int(input())):
    n = int(input())
    k = 0

    for i in range (1, n):
        if math.gcd(i,n) == 1:
            k += 1

    if checkNT(k) == 1:
        print("YES")
    else:
        print("NO")
    

