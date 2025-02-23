for t in range(int(input())):
    s = input()
    dau = int(s[:2])
    cuoi = int(s[-2:])
    if dau == cuoi:
        print("YES")
    else:
        print("NO")