import re
a = {}
n, k = map(int, input().split())
for i in range(n):
    for s in re.split("[^a-z0-9]", input().lower()):
        if s != '':
            if a.get(s) is None: a[s]=1
            else: a[s]+=1
ans = sorted(a, key=lambda x: (-a[x], x))
for i in ans: print(i, a[i]) if a[i]>=k else None

'''
Cho một đoạn văn bản có N dòng trong đó có thể có các dấu câu như dẩy phẩy (,) dấu chấm (.) dấu chấm hỏi (?) dấu chấm cảm (!) dấu hai chấm (:) dấu chấm phẩy (;) dấu ngoặc đơn, dấu gạch ngang (-), dấu gạch chéo (/). 

Nhập thêm số nguyên dương K (1 < K < 50). Hãy liệt kê các từ khác nhau xuất hiện ít nhất K lần trong đoạn văn bản. Danh sách được sắp xếp theo thứ tự số lần xuất hiện giảm dần, nếu số lần xuất hiện bằng nhau thì sắp xếp theo thứ tự từ điển tăng dần.'''