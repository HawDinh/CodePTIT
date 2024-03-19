#include <bits/stdc++.h>
using namespace std;
int m,n;
int a[101][101];
int ans;
int ok[101][101];

void Try(int i,int j){
    if (i==m-1 && j==n-1) {
        ++ans;
        return;
    }

    if (i!=m-1) Try(i+1,j);
    if (j!=n-1) Try(i,j+1);
}

void TestCase(){
    cin >> m >> n;
    ans=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >> a[i][j];
            ok[101][101]=1;
        }
    }
    Try(0,0);
     cout << ans;
}

int main() {
    int t; cin >> t;
    while (t--){
        TestCase();
        cout << endl;
    }
    return 0;
}