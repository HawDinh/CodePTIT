#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n ,k;
    cin >> n >> k;
    int a[n];

    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    
    k=min(k,n-k);
    long long u=0,v=0;
    for (int i=0;i<k;i++) u+=a[i];
    for (int i=k;i<n;i++) v+=a[i];

    cout << abs(v-u);
}

int main() {
    int t; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n ,k;
    cin >> n >> k;
    int a[n];

    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    
    k=min(k,n-k);
    long long u=0,v=0;
    for (int i=0;i<k;i++) u+=a[i];
    for (int i=k;i<n;i++) v+=a[i];

    cout << abs(v-u);
}

int main() {
    int t; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}