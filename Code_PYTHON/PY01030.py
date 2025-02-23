import math

def check(a,b):
    if math.gcd(a,b) == 1:
        return 1
    else:
        return 0
    
n,k = map(int, input().split())
dem = 0
for i in range (pow(10, k - 1), pow(10, k) - 1):
    if check(n, i) == 1:
        print(i,end=" ")
        dem += 1
        if dem % 10 == 0:
            print()

