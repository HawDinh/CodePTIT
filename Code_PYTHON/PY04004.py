import math

class PhanSo:
    def __init__(self,a,b):
        self.x = a
        self.y = b

def cong(a,b):
    c = PhanSo(a.x * b.y + b.x * a.y, a.y * b.y)
    return c

def toigian(p):
    i = math.gcd(p.x, p.y)
    return '{}/{}'.format(p.x // i, p.y // i)

if __name__ == '__main__':
    a, b, c, d = map(int, input().split())
    p1 = PhanSo(a,b)
    p2= PhanSo(c,d)
    ans = cong(p1,p2)
    print(toigian(ans))