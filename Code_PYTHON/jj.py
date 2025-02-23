def pow(a,b,mod):
    ans = 1
    a = a % mod
    while b > 0:
        if (b % 2 == 1):
            ans = ans * a % mod
        b = b // 2
        a = (a * a) % mod
    return ans

def solve(a,b,c,d,mod):
    exp = pow(c,d,mod)
    ans = pow(a,b,mod)
    return pow(ans,exp,mod)

for i in range(int(input())):
    a,b,c,d,mod = map(int, input().split())
    print(solve(a,b,c,d,mod))
