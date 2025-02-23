for t in range(int(input())):
    m, n, p = list(map(int, input().split()))
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))

    i, j , k = 0, 0, 0
    ans = []

    while i < len(a) and j < len(b) and k < len(c):
        if a[i] == b[j] == c[k]:
            ans.append(a[i])
            i += 1
            j += 1
            k += 1
        elif a[i] < b[j]:
            i += 1
        elif b[j] < c[k]:
            j += 1
        else:
            k += 1
        
    if len(ans) > 0:
        for i in ans:
            print(i,end=" ")
        print()
    else:
        print("NO")
