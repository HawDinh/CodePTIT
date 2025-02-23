a, K, N = map(int, input().split())
ans = []

n = int(N / K)

for i in range(1, n + 1):
    b = K * i - a
    if b > 0:
        ans.append(b)

if len(ans) == 0:
    print("-1")

for i in ans:
    print(i, end = ' ')

