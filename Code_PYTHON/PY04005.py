import math

def Decimal(x):
    return float(x)

class Point:
    def __init__(self, a, b):
        self.x = a
        self.y = b
    
    def distance(self, o):
        return math.sqrt(math.pow(self.x - o.x, 2) + math.pow(self.y - o.y, 2))

class Triangle:
    def __init__(self, a, b , c):
        self.a = a
        self.b = b
        self.c = c
    def chuvi(self):
        return self.a.distance(self.b) + self.b.distance(self.c) + self.c.distance(self.a))

def check(x):
    canh1 = x.a.distance(x.b)
    canh2 = x.b.distance(x.c)
    canh3 = x.c.distance(x.a)
    if canh1 + canh2 > canh3 and canh1 + canh3 > canh2 and canh2 + canh3 > canh1:
        return 1
    else:
        return 0

if __name__ == '__main__':
    t = int(input())
    while t > 0:
        a = list(map(int,input().split()))
        m = Point(a[0],a[1])
        n = Point(a[2],a[3])
        p = Point(a[4],a[5])
        x = Triangle(m, n ,p)
        if (check(x) == 1):
            print('{:.3f}'.format(x.chuvi()))
        else:
            print("INVALID") 
        t -= 1
