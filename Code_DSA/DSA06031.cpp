#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void testCase(){
    int n,k; cin >> n >> k;
    vector <int> a(n);

    for (int i=0;i<n;i++) cin >> a[i];

    for (int i=0;i<=n-k;i++){
        int ans=a[i];
        for (int j=i;j<i+k;j++){
            ans=max(ans,a[j]);
        }
        cout << ans << " ";
    }
    cout << endl;


}

int main() {
    int t; cin >> t;
    while (t--){
        testCase();
    }
}

