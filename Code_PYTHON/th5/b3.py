import math

def check(n):
    if n < 10:
        return 0
    s = str(n)
    l, r = 0, len(s) - 1
    while(l < r):
        if s[l] != s[r]:
            return 0
        l += 1
        r -= 1
    return 1

m,n = map(int, input().split())
a = []
ans = 0
for _ in range(m):
    hang = list(map(int, input().split()))
    a.append(hang)
    for i in hang:
        if ans < i and check(i) == 1:
            ans = i

if ans == 0:
    print("NOT FOUND")
else:
    print(ans)
    for i in range(m):
        for j in range(n):
            if a[i][j] == ans:
                print(f"Vi tri [{i}][{j}]")



