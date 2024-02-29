#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        set <int> s;
        vector <int> v(n);
        for (auto &i:v) {
            cin >> i;
            while (i>0){
                int x=i%10;
                s.insert(x);
                i/=10;
            }
        }
        for (int x:s) cout << x << " ";
        cout << endl;
    }
}
