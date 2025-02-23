def check(n):
    if len(n) % 2 == 0 or n[0] == n[1]:
        return 0
    for i in range(0,len(n) - 1, 2):
        if n[i] != n[0]:
            return 0
    return 1

for t in range(int(input())):
    n = input()
    if check(n) == 1:
        print("YES")
    else:
        print("NO")