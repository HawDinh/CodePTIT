import math

for t in range (int(input())):
    a = input()
    if a[0] == a[-2] and a[1] == a[-1] and len(a) >= 4:
        print("YES")
    else:
        print("NO")

