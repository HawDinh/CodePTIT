m, n = map(int, input().split())
a = []

for _ in range(m):
    hang = list(map(int, input().split()))
    a.append(hang)

max_val = max(max(hang) for hang in a)
min_val = min(min(hang) for hang in a)
k = max_val - min_val
print(k)

for i in range(len(a)):
    for j in range(len(a[i])):
        if a[i][j] == k:
            print(f"Vi tri [{i}][{j}]")
