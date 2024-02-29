#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        set <int> s;
        for (int i=0;i<n;i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        
        auto it=s.begin();
        if (s.size()>2) cout << *it << " " << *(++it);
        else cout << -1;
        cout << endl;
    }
}
