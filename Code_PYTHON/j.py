import math
from datetime import datetime

price = {'1':25, '2':34, '3':50, '4':80}
class KH:
    def __init__(self, i, ten, phong, ngaynhan, ngaytra, plus):
        self.ma = f'KH{str(i).zfill(2)}'
        self.ten = ten
        self.phong = phong
        self.ngayo = (datetime.strptime(ngaytra, "%d/%m/%Y") - datetime.strptime(ngaynhan, "%d/%m/%Y")).days + 1
        self.plus = plus
        self.cost = self.ngayo * price[self.phong[0]] + plus

n = int(input())
a = []
for i in range(n):
    a.append(KH(i+1, input().strip(), input().strip(), input().strip(), input().strip(), int(input())))

a.sort(key=lambda x : -x.cost) 
for i in a:
    print(i.ma, i.ten, i.phong, i.ngayo, i.cost)
