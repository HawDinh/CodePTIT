#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[101];
int ok;
int n,k,dem;

void ktao(){
    for (int i=1;i<=n;i++) a[i]=0;
}

int check(){
    int dem=0;
    for (int i=1;i<=n;i++){
        if (a[i]==1) ++dem;
    }
    if (dem==k) return 1;
    else return 0;
}

void in(){
    for (int i=1;i<=n;i++) cout << a[i];
    cout << endl;
}

void sinh(){
    int i=n;
    while (i>0 && a[i]==1) --i;

    if (i==0) ok=0;

    else {
        a[i]=1;
        for (int j=i+1;j<=n;j++) a[j]=0;
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        ok=1;
        ktao();
        while (ok){
            sinh();
            if (ok && check()) in();
        }
    }
}