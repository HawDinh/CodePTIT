import math

def check(n):
    dem = 0
    for i in s:
        if i == '4' or i == '7':
            dem += 1
    if dem == 4 or dem == 7:
        return 1
    else:
        return 0
    
s = input()
if check(s) == 1:
    print("YES")
else:
    print("NO")