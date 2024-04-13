#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n];

    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    long long sum=0;

    for (int i=0;i<n;i++){
        sum+=a[i]*i;
        sum%=(1000000007);
    }

    cout << sum;
}

int main() {
    int t; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}