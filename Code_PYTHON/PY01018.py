def encode_and_reverse(s, k):
    # Dãy ký tự chuẩn
    P = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
    
    # Tạo một từ điển để ánh xạ ký tự và mã ASCII
    index_map = {P[i]: i for i in range(len(P))}

    # Kết quả sau mã hóa
    encoded_string = ""

    # Mã hóa từng ký tự trong chuỗi S
    for char in s:
        # Tìm chỉ số của ký tự trong dãy P
        index = index_map[char]
        # Mã hóa ký tự
        new_index = (index + k) % 28  # Sử dụng modulo để đảm bảo vòng quanh
        encoded_string += P[new_index]  # Thêm ký tự mã hóa vào kết quả

    # Đảo ngược chuỗi đã mã hóa
    reversed_string = encoded_string[::-1]

    return reversed_string

# Nhập vào K và S
ok = 1
while ok == 1:
    inp = input().split()
    K = int(inp[0])
    if K == 0:
        ok = 0
        break
    S = inp[1]

    result = encode_and_reverse(S, K)
    print(result)
