#include <bits/stdc++.h>
using namespace std;

void Binary_Search(int a[], int n, int k){
    if (n == 0) {
        cout << -1;
        return;
    }

    int l=0;
    int r=n-1;
    int ans=-1;
    
    while (l<=r){
        int mid=(l+r)/2;
        if (a[mid] <= k) {
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;
    }
    cout << ans;
}

void testCase() {
    int n,k; cin >> n >> k;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    Binary_Search(a,n,k);
}

int main() {
    int t=1;
    cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}