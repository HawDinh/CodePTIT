import math

def check(a):
    for i in a:
        if i != '4' and i != '7':
            return 0
    return 1

for t in range (int(input())):
    a = list(input())
    if check(a) == 0:
        print("NO")
    else:
        print("YES")
*-*-+