#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int m,n,k; cin >> m >> n >> k ;
    vector <int> v;
    for (int i=0;i<m+n;i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout << v[k-1];
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