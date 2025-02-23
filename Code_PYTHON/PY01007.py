import math

for t in range(int(input())):
    N, X, M = map(float, input().split())
    ans = math.ceil(math.log(M/N, 1+X/100))
    
    print(ans)
