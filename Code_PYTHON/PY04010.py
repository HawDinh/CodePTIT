import math

class ThiSinh:
    def __init__(self, ten, date, diem1, diem2, diem3):
        self.ten = ten
        self.date = date
        self.tongdiem = float(diem1 + diem2 + diem3)

a = ThiSinh(input(), input(), float(input()), float(input()), float(input()))
print(a.ten, a.date, a.tongdiem)