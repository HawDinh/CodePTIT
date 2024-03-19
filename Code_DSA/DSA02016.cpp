#include <bits/stdc++.h>
using namespace std;
int n;
int a[101],b[101],c[101];
int ans;

void Try(int i){
    for (int j=1;j<=n;j++){
        if (!a[j] && !b[i+j-1] && !c[i-j+n]){
            a[j] = b[i+j-1] = c[i-j+n] = 1;
            if (i==n) ans++;
            else Try(i+1);
            a[j] = b[i+j-1] = c[i-j+n] = 0;
        }
    }
}

void TestCase(){
    cin >> n;
    ans=0;
    Try(1);
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