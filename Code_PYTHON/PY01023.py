import math

for t in range(int(input())):
    n = int(input())

    if n == 1:
        print(1)

    else:
        m = int(math.sqrt(n))
        print ("1 ",end='')

        for i in range(2,m + 1):
            dem = 0
            while n % i == 0:
                dem += 1
                n //= i
            if dem > 0:
                print(f"* {i}^{dem} ", end='')
        if n > 1:
            print(f"* {n}^1")
        print()