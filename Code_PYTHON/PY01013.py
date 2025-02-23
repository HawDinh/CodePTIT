import math

def nt(n):
    if (n < 2):
        return 0
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return 0
    return 1

for t in range(int(input())):
    a,b = map(int, input().split())
    c = math.gcd(a,b)
    s = str(c)
    ans = 0
    for i in range (0,len(s)):
        ans += int(s[i])
    if nt(ans) == 1:
        print("YES")
    else:
        print("NO")