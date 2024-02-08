#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,x;

bool cmp(pair <int,int> a,pair <int,int> b){
    if (abs(a.second-x) == abs(b.second-x)) return a.first < b.first;
    return abs(a.second-x) < abs(b.second-x);
}

int main() {
    int t; cin >> t;
    while (t--){
        cin >> n >> x;
        vector<pair<int,int>> a(n);
        
        for (int i=0;i<n;i++) {
            cin >> a[i].second;
            a[i].first=i;
        }
        sort(a.begin(),a.end(),cmp);

        for (auto i:a) cout << i.second << " ";
        cout << endl;
    }
} 
