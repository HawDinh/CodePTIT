#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n];

    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    
    long long u=0,v=0;
    for (int i=0;i<n;i+=2) u=u*10+a[i];
    for (int i=1;i<n;i+=2) v=v*10+a[i];

    cout << (long long)u+v;
}

int main() {
    int t; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}