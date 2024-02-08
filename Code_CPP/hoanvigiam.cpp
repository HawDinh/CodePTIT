#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <set>
#include <unordered_map>
#include <map>
#include <set>

using ll = long long;
using namespace std;

int n,a[10000],ok;

// CÁCH 1:
// int main() {
// int t; cin >> t;
// while (t--){
//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     if (prev_permutation(a, a + n)) {
//         for (int i = 0; i < n; i++) {
//             cout << a[i] << " ";
//         }
//     } else {
//         for (int i = n; i > 0; i--) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }
// }

void sinh(){
    int i=n-1;
    while (i>0 && a[i] <= a[i+1]){
        --i;
    }
    if (i==0) ok=0;
    else {
        int k=n;
        while (a[k]>a[i]) --k;
        swap (a[i],a[k]);
        int l=i+1;
        int r=n;
        while (l<r){
            swap(a[l],a[r]);
           ++l;--r;
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--){
        cin >> n;
        for (int i=1;i<=n;i++) cin >> a[i];
        ok=1;
        sinh();
        if (ok==1){
            for (int i=1;i<=n;i++) cout << a[i] << " ";
        }
        else {
            for (int i=n;i>0;i--) cout << i << " ";
        }
        cout << endl;
    }
}