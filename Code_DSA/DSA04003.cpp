#include <bits/stdc++.h>
using namespace std;
long long MOD=123456789;

long long Pow(long long n, long long k) {
    if (k == 0) return 1;
    long long x = Pow(n, k / 2);
    if (k % 2 == 0) return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

void testCase() {
    long long n; cin >> n;
    
    cout << Pow(2,n-1);
}

int main() {
    int t=1;
    cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}