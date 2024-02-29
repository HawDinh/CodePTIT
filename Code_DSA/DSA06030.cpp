#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void testCase(){
    int n; cin >> n;
    vector <int> a(n);
    vector <vector<int>> b;

    for (int i=0;i<n;i++) cin >> a[i];

    for (int last=n-1;last>0;last--){
        int ok=1;
        for (int i=0;i<last;i++){
            if (a[i]>a[i+1]) {
                swap(a[i],a[i+1]);
                ok=0;
            }
        }
        if (ok) break;
        b.push_back(a);
    }

    for (int i=b.size()-1;i>=0;i--) {
        cout << "Buoc " << i+1 << ": ";
        for (int j=0;j<b[i].size();j++) cout << b[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int t; cin >> t;
    while (t--){
        testCase();
    }
}
