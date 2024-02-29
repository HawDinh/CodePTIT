#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n,x;
        cin >> n >> x;
        vector <int> a(n),b,c;
        int ok=1;
        for (int i=0;i<n;i++){
            cin >> a[i];
            if (i>0 && a[i]<a[i-1]) ok=0;

            if (ok) b.push_back(a[i]);
            else c.push_back(a[i]);
        }

        int ans;
        if (x<b[0]){
            for (int i=0;i<c.size();i++){
                if (c[i]==x) {
                    ans=b.size()+i+1;
                    break;
                }
            }
        }
        else {
            for (int i=0;i<b.size();i++){
                if (b[i]==x) {
                    ans=i+1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}
