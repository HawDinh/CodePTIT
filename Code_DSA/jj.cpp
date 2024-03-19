#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101];

void in(){
    for (int i=1;i<=n;i++) cout << a[i];
    cout << " ";
}

int check(){
    int l=1;
    int r=n;
    while (l<r){
        if (a[l]!=a[r]) return 0;
        else {
            ++l;
            --r;
        }
    }
    return 1;
}

void Try(int i){
    for (int j=0;j<=1;j++){
        a[i]=j;
        if (i==n) {
            if (check()) in();
        }
        else Try(i+1);
    }
}

int main() {
    int t; cin >> t;
    while (t--){
        int m; cin >> m;
        for (int i=2;i<=m;i+=2){
            n=i;
            Try(1);
        }
        cout << endl;
    }
}