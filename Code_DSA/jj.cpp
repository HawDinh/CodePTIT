#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+1];
        int b[n+1];
        for (int i=1;i<=n;i++) {
            cin >> a[i];
            b[i]=a[i];
        }

        sort (b,b+n);
        
        int l=1;
        int r=n;
        while (a[l]==b[l]) ++l;
        while (a[r]==b[r]) --r;

        cout << l << " " << r;
        cout << endl;
    }
} 
