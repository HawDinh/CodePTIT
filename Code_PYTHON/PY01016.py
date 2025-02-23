for t in range(int(input())):
    s = input()
    for i in range(1,len(s),2):
        a = int(s[i])
        b = s[i-1]
        for j in range(0, a):
            print(b, end='')
    print()