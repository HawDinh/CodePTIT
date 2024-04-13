#include <bits/stdc++.h>
using namespace std;

int Pow(int n, int k){
    if (k==0) return 1;
    if (k==1) return n;
    long long x=Pow(n,k/2);
    long long y=x * x % 1000000007;
    if (k%2==0) return y;
    return n * y % 1000000007;
}

void testCase() {
    int n,k; cin >> n >> k;
    cout << Pow(n,k);
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