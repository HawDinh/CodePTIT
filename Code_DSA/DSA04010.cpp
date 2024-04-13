#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n];
    int ans=0;
    int sum=0;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        sum=max(a[i],sum+a[i]);
        ans=max(ans,sum);
    }
    cout << ans;
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