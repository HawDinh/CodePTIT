#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n];
    int b[n-1];
    
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n-1;i++) cin >> b[i];

    int ans=0;
    while (ans<n){
        if (a[ans]==b[ans]) ++ans;
        else break;
    }
    cout << ans+1;
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