#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101],b[101];
int res,ans;
int amin;

void Try(int i){
    for (int j=1;j<=n;j++){
        if (ok[j]) {
            ok[j]=0;
            b[i]=j;
            res+=a[b[i-1]][b[i]];
            if (i==n) {
                ans=min(ans,res+a[1][b[n]]);
            }
            else if (res+(n-i+1)*amin < ans) Try(i+1);
            
            ok[j]=1;
            res-=a[b[i-1]][b[i]];
        }
    }
}

void TestCase(){
    cin >> n;
    res=0;
    ans=INT_MAX;
    amin=INT_MAX;
    for (int i=1;i<=n;i++){
        ok[i]=1;
        for (int j=1;j<=n;j++) {
            cin >> a[i][j];
            if (a[i][j]!=0) amin=min(amin,a[i][j]);
        }
    }
    b[1]=1;
    ok[1]=0;
    Try(2);
    cout << ans << endl;
}

int main() {
    int t=1;
    while (t--){
        TestCase();
    }
    return 0;
}