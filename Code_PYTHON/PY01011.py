import math

def tn(n):
    s = str(n)
    if len(s) % 2 == 1:
        return 0
    for i in range(0, len(s)):
        if int(s[i]) % 2 == 1 or  s[i] != s[-i-1]:
            return 0
    return 1

for t in range(int(input())):
    n = int(input())
    for i in range(22,n,2):
        if tn(i) == 1:
            print(i,end = " ")
    print()