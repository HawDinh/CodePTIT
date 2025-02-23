for t in range(int(input())):
    n,m,k = map(int,input().split())
    a = [[0] * (m + 1)]
    for i in range(n):
        a.append([0] + list(map(int, input().split())))
    for i in range(1,n + 1):
        for j in range(1,m + 1):
            a[i][j] += a[i-1][j]
    a_new = []
    for i in range(1,n - k + 2):
        arr = []
        s = 0
        for j in range(1, k + 1):
            s += a[i + k - 1][j] - a[i - 1][j]
        arr.append(s)
        for j in range(2,m - k + 2):
            s = s + (a[i + k - 1][j + k - 1] - a[i - 1][j + k - 1]) - (a[i + k - 1][j - 1] - a[i - 1][j - 1])
            arr.append(s)
        a_new.append(arr)
    k *= k
    for i in a_new:
        for j in i:
            print(j // k, end = ' ')
        print()
'''2
4 4 3
2 1 0 0
3 2 1 1
4 5 2 1
2 2 9 0
3 3 3
1 2 3
4 5 6
7 8 9'''