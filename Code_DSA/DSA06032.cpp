#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void testCase(){
    int n,k; cin >> n >> k;
    long long dem=0;
    vector <long long> a(n);

    for (int i=0;i<n;i++) cin >> a[i];

    sort(a.begin(),a.end());

    for (int i=0;i<n-2;i++){
        for (int j=i+1;j<n-1;j++){
            long long x=k-a[i]-a[j];
            dem+=lower_bound(a.begin()+j+1,a.end(),x) - (a.begin()+j+1);
        }
    }

    cout << dem << endl;
}

int main() {
    int t; cin >> t;
    while (t--){
        testCase();
    }
}

