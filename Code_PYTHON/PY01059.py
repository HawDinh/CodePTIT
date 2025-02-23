for t in range(int(input())):
    s = input()
    tong = 0
    tich = 1
    ok = 0

    i = int(len(s)) - 1
    while i >= 0:
        if i % 2 == 0:
            tong += int(s[i])
        if i % 2 == 1:
            if s[i] != '0':
                tich *= int(s[i])
                ok = 1
        i -= 1
    tich *= ok
    print(f"{tong} {tich}")