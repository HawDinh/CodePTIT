import math
import decimal

def Decimal(x):
    return float(x)

class Point:
    def __init__(self, a, b):
        self.x = a
        self.y = b
    
    def distance(self, o):
        return '{:.4f}'.format(math.sqrt(math.pow(self.x - o.x, 2) + math.pow(self.y - o.y, 2)))

if __name__ == '__main__':
    t = int(input())
    while t > 0:
        arr = input().split()
        p1 = Point(Decimal(arr[0]), Decimal(arr[1]))
        p2 = Point(Decimal(arr[2]), Decimal(arr[3]))
        print(p1.distance(p2))
        t -= 1
    
import math
import decimal

def Decimal(x):
    return float(x)

class Point:
    def __init__(self, a, b):
        self.x = a
        self.y = b
    
    def distance(self, o):
        return '{:.4f}'.format(math.sqrt(math.pow(self.x - o.x, 2) + math.pow(self.y - o.y, 2)))

if __name__ == '__main__':
    t = int(input())
    while t > 0:
        arr = input().split()
        p1 = Point(Decimal(arr[0]), Decimal(arr[1]))
        p2 = Point(Decimal(arr[2]), Decimal(arr[3]))
        print(p1.distance(p2))
        t -= 1
    
