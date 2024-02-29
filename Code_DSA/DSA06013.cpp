#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        int a[n],dem[n]={};
        for (int i=0;i<n;i++){
            cin >> a[i];
            dem[a[i]]++;
        }
        if (dem[k]==0) dem[k]=-1;
        cout << dem[k] << endl;
    }
}
