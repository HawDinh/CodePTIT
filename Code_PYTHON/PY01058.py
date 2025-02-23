import math

def check(n):
    if n < 2:
        return 0
    for i in range(2,int(math.sqrt(n) + 1)):
        if n % i == 0:
            return 0
    return 1

for i in range(int(input())):
    s = input()
    tmp = s[-4:]
    i = int(tmp)
    if check(i) == 1:
        print("YES")
    else:
        print("NO")
