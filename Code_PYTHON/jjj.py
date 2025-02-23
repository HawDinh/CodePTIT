def Try(n,i,ok,ans):
    if len(i) == n:
        ans.append("".join(map(str,i)))
        return
    for j in range(n,0,-1):
        if not ok[j]:
            ok[j] = True
            i.append(j)
            Try(n,i,ok,ans)
            i.pop()
            ok[j] = False

def solve(n):
    ans = []
    ok = [False] * (n + 1)
    Try(n,[],ok,ans)
    return ans

for i in range(int(input())):
    out = []
    n = int(input())
    c = solve(n)
    out.append(f"len(c ơ')")
    out.append("".join(c))
print("\n".join(out))