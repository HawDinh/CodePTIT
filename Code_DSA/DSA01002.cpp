#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[10001];

void sinh(){
    int i=k;
    while (i>0 && a[i]==n-k+i){
        i--;
    }
    if (i==0){
        for (int i=1;i<=k;i++) cout << i << " ";
    }
    else {
        a[i]=a[i]+1;
        for (int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
        for (int i=1;i<=k;i++) cout << a[i] << " ";
    }
    cout << endl;
    
}

int main() {
    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        for (int i=1;i<=k;i++) cin >> a[i];
        sinh();
    }
}