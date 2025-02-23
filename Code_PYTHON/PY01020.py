import math
for t in range(int(input())):
    s = input()
    ok = s[len(s)-2:len(s)]

    if ok == "86":
        print("YES")
    else:
        print("NO")