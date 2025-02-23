import math
def nt(n):
    if n < 2: return 0
    for i in range (2, int(math.sqrt(n))):
        if n % i == 0:
            return 0
    return 1

def check(n):
    sum = 0
    for i in range(0,len(n) - 1,2):
        sum += int(n[i]) + int(n[i+1])
        if int(n[i]) % 2 == 1 or int(n[i+1]) % 2 == 0:
            return 0
    if nt(sum) == 0:
        return 0
    return 1

for t in range(int(input())):
    n = input()
    if check(n) == 1:
        print("YES")
    else:
        print("NO")