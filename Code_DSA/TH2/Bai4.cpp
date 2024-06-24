#include <bits/stdc++.h>
#define ll long long;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, q;
    cin >> n >> q;
    int a[n], r[n];
    for (int i =0; i<n; i++) cin >> a[i];
    stack<int> right;
    for (int i = n - 1; i >= 0; --i){
        while (right.size() && right.top() <= a[i])
            right.pop();
        r[i] = right.size();
        right.push(a[i]);
    }
    int idx;
    while (q--){
        cin >> idx;
        cout << r[idx - 1] << "\n";
    }
}