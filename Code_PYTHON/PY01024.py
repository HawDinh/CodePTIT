import math

def sum(s):
    ans = 0
    for i in s:
        ans +=  int(i)
    return ans

def check(s):
    for i in range (0,len(s)-1):
        if abs(int(s[i]) - int(s[i+1])) != 2:
            return 0
    return 1

for t in range(int(input())):
    s = input()

    if check(s) == 1 and sum(s) % 10 == 0:
        print("YES")
    else:
        print("NO")