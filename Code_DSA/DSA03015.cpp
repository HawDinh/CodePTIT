#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n,s,m; cin >> n >> s >> m;

    if (n<m || 6*(n-m)<m) cout << -1;
    else if ((s*m)%n==0) cout << (s*m)/n;
    else cout << (s*m)/n+1;
}

int main() {
    int t; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}