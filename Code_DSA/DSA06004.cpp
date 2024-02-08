#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        map <int,int> mp;

        for (int i=0;i<n+m;i++){
            int x; cin >> x;
            mp[x]++;
        }

        for (auto x:mp){
            if (x.second>0) cout << x.first << " ";
        }
        cout << endl;
        
        for (auto x:mp){
            if (x.second>1) cout << x.first << " ";
        }
        cout << endl;
    }
} 
