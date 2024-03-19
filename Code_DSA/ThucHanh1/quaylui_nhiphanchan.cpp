#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101];

void in(){
    for (int i=1;i<=n;i++) cout << a[i] << " ";
    cout << endl;
}


int check(){
    int dem=0;
    for (int i=1;i<=n;i++) {
        if (a[i]==1) ++dem;
    }
    if (dem%2==0) return 1;
    else return 0;
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
    cin >> n;
    Try(1);
}