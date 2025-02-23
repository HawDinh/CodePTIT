n, k = map(int, input().split())
n1, n2 = list(map(int, input().split())), list(map(int, input().split()))
a = [[]]*n
for i in range(n):
    a[i] = [n1[i], n2[i]]
a.sort(key=lambda x: x[0]-x[1])
sum = 0
for i in range(k): 
    sum += a[i][0]
i = k
while i < n and a[i][0] < a[i][1]:
    sum += a[i][0]
    i += 1
for j in range(i, n): sum += a[j][1]
print(sum)
'''
Một cửa hàng thời trang đang thực hiện chương trình khuyến mại giảm giá. Ban đầu, giá của sản phẩm i là a[i], khi đến tuần giảm giá, giá của chúng giảm xuống còn b[i]. Tuy nhiên, chủ cửa hàng rất khôn, nhằm đánh lừa khách hàng, mỗi số sản phẩm giá tăng lên chứ không hề giảm xuống.

Nhận biết được quy luật này, Tí mặc dù cần phải mua tổng cộng N sản phẩm, nhưng cậu quyết định mua ít nhất K sản phẩm trước đợt khuyến mại, và số sản phẩm còn lại sẽ mua trong đợt khuyến mại.

Giả sử rằng Tí chọn tối ưu được các sản phẩm ban đầu, các bạn hãy tính xem số tiền ít nhất Tí cần bỏ ra để mua đủ N sản phẩm là bao nhiêu?

Input:

Mỗi test bắt đầu bằng số nguyên N và K (1 ≤ N, K ≤ 100 000).

Dòng thứ hai gồm N số nguyên a[i], giá sản phẩm thứ i mà trước đợt giảm giá.

Dòng cuối gồm N số nguyên b[i], là giá của sản phẩm sau khi giảm giá.

(1 ≤ a[i], b[i] ≤ 10^4).'''