#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[10001];
int ok;

void sinh(){
    int i=k;
    while (i>0 && a[i]-1==a[i-1]) --i;

    if (i==0) ok=0;

    else{
        --a[i];
        for (int j=i+1;j<=k;j++) a[j]=n-k+j;
    }
}

int main() {
    int t; cin >> t;
    while (t--){
        ok=1;
        int dem=1;
        cin >> n >> k;

        for (int i=1;i<=k;i++) cin >> a[i];

        while (ok){
            sinh();
            if (ok) ++dem;
        }
        cout << dem << endl;
    }
    return 0;
}