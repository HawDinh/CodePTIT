import math
for t in range(int(input())):
    s = input()
    x = s[::-1]
    ok = 1
    for i in range(1,len(s)):
        if abs(ord(s[i]) - ord(s[i-1])) != abs(ord(x[i]) - ord(x[i-1])):
            ok = 0
            break

    if ok == 1:
        print("YES")
    else:
        print("NO")