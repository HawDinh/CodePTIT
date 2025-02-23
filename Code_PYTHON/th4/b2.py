import math

for t in range(0,int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    mp = {}

    for i in arr:
        key = i
        if key in mp:
            mp[key] += 1
        else:
            mp[key] = 1

    for key, value in mp.items():
        if value % 2 == 1:
            print(key)
            break