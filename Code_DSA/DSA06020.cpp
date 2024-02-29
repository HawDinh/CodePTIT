#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,x;
int a[1000001];

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> x;
        int dem[1000001]={0};
        for (int i=0;i<n;i++) {
            cin >> a[i];
            dem[a[i]]++;
        }
        if (dem[x]!=0) cout << 1 << endl;
        else cout << -1 << endl;
    }
}
