#include <bits/stdc++.h>
using namespace std;
long long f[93];

void fibo(){
    f[1]=f[2]=1;
    for (int i=3;i<93;i++) f[i]=f[i-1]+f[i-2];
}

void testCase() {
    long long n,k; cin >> n >> k;

    while (n>2){
        if (k>f[n-2]) {
            k-=f[n-2];
            --n;
        }

        else n-=2;
    }
    if (n==1) cout << 'A';
    else cout << 'B';
}

int main() {
    int t=1;
    fibo();
    cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}