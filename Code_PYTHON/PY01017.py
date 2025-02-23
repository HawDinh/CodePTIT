for t in range(int(input())):
    s = input()
    i = 0
    while i < len(s):
        dem = 1
        while i + 1 < len(s) and s[i] == s[i+1]:
            dem += 1
            i += 1
        print(str(dem) + '' + s[i],end = '')
        i += 1
    print()