#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--){
        int n;
        cin >> n;
        multiset <int> st;

        for (int i=0;i<n;i++){
            int x; cin >> x;
            st.insert(x);
        }

        for (auto x:st) cout << x << " ";
        cout << endl;
    }
} 
