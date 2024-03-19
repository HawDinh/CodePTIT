#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[101];

void in(){
    for (int i=1;i<=n;i++) cout << a[i] << " ";
    cout << endl;
}

void Try(int i){
    for (int j=a[i-1];j<=k;j++){
        a[i]=j;
        if (i==k) in();
        else Try(i+1);
    }
}

int main() {
    cin >> n >> k;
    a[0]=1;
    Try(1);
}