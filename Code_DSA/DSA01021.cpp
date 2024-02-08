#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int k,n;
int a[101];
int ok;

void sinh(){
    int i=k;
    while (i>0 && a[i]==n-k+i) --i;

    if (i==0) ok=0;

    else {
        a[i]++;
        for (int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
    }
}

int main() {
    int t; cin >> t;
    while (t--){
        int dem=0;
        map <int,int> mp;
        cin >> n >> k;
        ok=1;

        for (int i=1;i<=k;i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        
        sinh();

        if (ok==0) dem=k;
        else {
            for (int i=1;i<=k;i++){
                if (mp[a[i]]==0) dem++;
            }
        }
        cout << dem << endl;
    }

    return 0;
}