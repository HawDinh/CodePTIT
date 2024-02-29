#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        map <int,int> mp;
        int dem=0;

        for (int i=0;i<n;i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a.begin(),a.end());

        for (int i=a[0];i<=a[n-1];i++){
            if (!mp[i]) ++dem;
        }

        cout << dem << endl;
    }
}
