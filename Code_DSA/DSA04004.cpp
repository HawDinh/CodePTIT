#include <bits/stdc++.h>
using namespace std;
long long f[55];

void sang(){
    f[1]=1;
    for (int i=2;i<=50;i++) f[i]=f[i-1]*2;
}

void testCase() {
    long long n,k; cin >> n >> k;
    n++;
    for (int i=n;i>=1;i--) {
        if (k>f[i]) k-=f[i];
        else if (f[i]==k) {
            cout << i;
            break;
        }
    }
}

int main() {
    int t=1;
    cin >> t;
    sang();
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}