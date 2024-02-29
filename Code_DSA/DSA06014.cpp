#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[1000001];

void sang(){
    int n=1000001;
    for (int i=0;i<n;i++) a[i]=1;
    a[0]=a[1]=0;
    for (int i=2;i<sqrt(n);i++){
        for (int j=i*i;j<n;j+=i) a[j]=0;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ok=0;
        sang();
        for (int i=2;i<=n-2;i++){
            if (a[i] && a[n-i]){
                cout << i << " " << n-i << endl;
                ok=1;
                break;
            }
        }
        if (ok==0) cout << -1 << endl;
    }
}
