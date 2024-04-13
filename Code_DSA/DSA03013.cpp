#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int D; cin >> D;
    string s; cin >> s;

    int res=0;
    int dem[1001]={};

    for (char x:s) {
        ++dem[x];
        res=max(dem[x],res);
    }

    if (res<=(s.length()/D)+1) cout << 1;
    else cout << -1;
}

int main() {
    int t; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}