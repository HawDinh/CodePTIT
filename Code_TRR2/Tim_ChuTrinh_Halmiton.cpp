
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101];
int b[101];
int oke;

void ReInit(){
    for (int i=1;i<=n;i++) ok[i]=1;
}

void in(){
    for (int i=1;i<=n;i++) cout << b[i] << " ";
    cout << b[1] << endl;
}

void Try(int i,int u){
    for (int j=1;j<=n;j++){
        if (a[b[i-1]][j] && ok[j]) {
            ok[j]=0;
            b[i]=j;
            if (i==n) {
                if (a[j][u]) {
                    in();
                    oke = 1;
                }
            } else {
                Try(i + 1, u);
            }
            ok[j]=1;
        }
    }
}

void ChuTrinh_Hamilton(int u){
    ReInit();
    b[1]=u;
    ok[u]=0;
    Try(2,u);
}

int main() {
    cin >> n;
    
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }

    oke=0;
    int u;
    cin >> u;

    ChuTrinh_Hamilton(u);
    if (oke==0) cout << "Khong co!!!";
    return 0;
}