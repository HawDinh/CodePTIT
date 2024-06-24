#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
long long f[100];

void sang(){
    f[1]=f[2]=1;
    for (int i=3;i<100;i++) f[i]=f[i-1]+f[i-2];
}

void testCase() {
    long long n,k;
    cin >> n >> k;

    while (n>2) {
        if (k>f[n-2]) {
            k-=f[n-2];
            --n;
        }
        else n-=2;
    }

    if (n==1) cout << "0";
    else cout << "1";
}

int main() {
    int t = 1;
    cin >> t;
    sang();
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
