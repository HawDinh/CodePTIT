#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;

    int res=0;
    int dem[1001]={};

    for (char x:s) {
        ++dem[x];
        res=max(dem[x],res);
    }

    if (s.length()%2==0) {
        if (res <= (s.length()/2)) cout << 1;
        else cout << -1;
    }
    else {
        if (res <= ((s.length()/2)+1)) cout << 1;
        else cout << -1;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}