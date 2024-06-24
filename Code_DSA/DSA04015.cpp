#include <bits/stdc++.h>
using namespace std;

void Search(long long a[], long long n, long long k){
    if (n <= 0 || k <= 0 || k<a[1] || k>a[n]) {
        cout << -1;
        return;
    }

    int res=1;
    while (a[res]<=k) ++res;
    cout << res-1;
}

void testCase() {
    long long n,k; cin >> n >> k;
    long long a[n+1];
    for (int i=1;i<=n;i++) cin >> a[i];

    Search(a,n,k);
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