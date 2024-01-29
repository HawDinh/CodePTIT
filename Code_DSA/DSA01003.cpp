#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[10001];

void sinh(){
    int i=n-1;
    while (i>0 && a[i]>a[i+1]) --i;

    if (i==0) {
        for (int i=1;i<=n;i++) a[i]=i;
    }

    else {
        int k=n;
        while (a[k]<a[i]) --k;
        swap (a[i],a[k]);
        
        int l=i+1;
        int r=n;
        while (l<r) swap(a[l],a[r]);
    }
    for (int i=1;i<=n;i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    int t; cin >> t;
    while (t--){
        cin >> n;
        for (int i=1;i<=n;i++) cin >> a[i];
        sinh();
    }
}