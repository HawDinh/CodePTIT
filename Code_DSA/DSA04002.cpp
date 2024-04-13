#include <bits/stdc++.h>
using namespace std;
long long MOD=1000000007;

long long Pow(long long n, long long k) {
    if (k == 0) return 1;
    long long x = Pow(n, k / 2);
    if (k % 2 == 0) return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

void testCase() {
        long long x;  cin >> x;
        long long m=x;
        long long k=0;
        while (m>0){
            k=k*10+m%10;
            m/=10;
        }
        cout << Pow(x,k);
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