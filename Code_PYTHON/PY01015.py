for t in range(int(input())):
    s = str(input())
    ok = 1
    for i in range(0,len(s) - 1):
        a = int(s[i])
        b = int(s[i+1])
        if (a > b):
            ok = 0
            break
    
    if ok == 1:
        print("YES")
    else:
        print("NO")