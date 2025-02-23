import math

def check(s):
    dem = 0
    for i in range(0,len(s)):
        if nt(int(s[i])) == 1:
            dem += 1
    if dem > (len(s) - dem):
        return 1
    else:
        return 0

def nt(n):
    if n < 2:
        return 0
    for i in range(2,int(math.sqrt(n)) + 1):
        if n % i == 0:
            return 0
    return 1

for t in range(int(input())):
    s = input()
    if nt(len(s)) == 1 and check(s) == 1:
        print("YES")
    else:
        print("NO")
    
