for t in range(int(input())):
    n = int(input())
    a = []
    for i in range(n):
        a.append([float(x) for x in input().split()])
    ans = 1
    arr = [1] * n
    for i in range (1, n):
        for j in range (0, i):
            if a[i][0] > a[j][0] and a[i][1] < a[j][1]:
                arr[i] = max(arr[j] + 1, arr[i])
    print(max(arr))

'''
Cho hai dãy số thực A[] và B[] đều có N phần tử, các giá trị là số thực và không quá 100.

Hãy tính độ dài dài nhất của dãy các vị trí (không cần liên tiếp) thỏa mãn cả hai điều kiện:

Nếu xét các vị trí đó trên dãy A[] thì dãy con thu được thỏa mãn tính chất tăng dần (giá trị bằng nhau không được tính vào dãy tăng).
Nếu xét các vị trí đó trên dãy B[] thì dãy con thu được thỏa mãn tính chất giảm dần (giá trị bằng nhau không được tính vào dãy giảm).
Input

Dòng đầu ghi số bộ test (không quá 100).

Mỗi bộ test bắt đầu bởi số N (không quá 500).

Tiếp theo là N dòng, mỗi dòng ghi 2 giá trị A[i] và B[i]

Output

Với mỗi test, ghi ra độ dài tính được trên một dòng.
'''