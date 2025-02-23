import math

def check(a,b):
    if math.gcd(a,b) == 1:
        return 1
    else:
        return 0
    
for i in range(int(input())):
    a = input()
    b = a[::-1]
    if (check(int(a),int(b)) == 1):
        print("YES")
    else:
        print("NO")
