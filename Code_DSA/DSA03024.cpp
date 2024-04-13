#include <bits/stdc++.h>
using namespace std;

bool cmp (pair <int,int> a, pair <int,int> b){
    if (a.second == b.second) return a. first < b.first;
    else return a.second < b.second;
}

void testCase() {
    int n; cin >> n;
    pair <int,int> a[n];
    for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;

    sort(a,a+n,cmp);
    int ans=0;
    int res=0;
    for (int i=0;i<n;i++){
        if (a[i].first >= res) {
            ++ans;
            res = a[i].second;
        }
    }

    cout << ans;

}

int main() {
    int t=1; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}