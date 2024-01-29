#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <int> v;
    for (int i=0;i<n;i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int ok[101]={};

    for (int i=0;i<v.size();){
        if (ok[v[i]]==1) {
            v.erase(v.begin()+i);
        }
        else {
            ok[v[i]]=1;
            ++i;
        }
    }
    
    for (auto x:v) cout << x << " ";
    cout << endl;
}