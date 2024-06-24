#include <iostream>
#include <vector>
using namespace std;

int Binary_search(int a[], int n, int k) {
    int l = 0;
    int r = n - 1;
    int ans = -1;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] < k) {
            l = mid + 1;
        } else if (a[mid] > k) {
            r = mid - 1;
        } else {
            ans=mid;
            break;
        }
    }
    return ans;
}

void testCase() {
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int x = Binary_search(a,n,k);
    if (x==-1) cout << "NO";
    else cout << x+1;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
