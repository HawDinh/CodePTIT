#include <iostream>
#include <vector>
using namespace std;

int Binary_search(int a[], int n) {
    int l = 0;
    int r = n - 1;
    int ans = -1;

    // Kiểm tra trường hợp mảng không chứa số 0
    if (a[0] == 1) return 0;
    if (a[r] == 0) return n;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == 0) {
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    
    // Trả về vị trí cuối cùng của số 0 trong mảng đã sắp xếp
    return ++ans;
}

void testCase() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int x = Binary_search(a, n);

    cout << x << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        testCase();
    }
    return 0;
}
