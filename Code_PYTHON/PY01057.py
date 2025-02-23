import math

def nt(n):
    if n < 2: return 0
    for i in range (2, int(math.sqrt(n) + 1)):
        if n % i == 0:
            return 0
    return 1

def check(n):
    for i in range(2,len(n)):
        if nt(i) == 1 and nt(int(n[i])) != 1:
            return 0
        if nt(i) != 1 and nt(int(n[i])) == 1:
            return 0
    return 1
        

for t in range(int(input())):
    n = input()
    if check(n) == 1:
        print("YES")
    else:
        print("NO")