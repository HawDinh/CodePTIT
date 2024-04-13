#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n,m,k; cin >> n >> m >> k;
    map <int,int> mp1,mp2,mp3;
    int res=0;
    int ok=0;

    while (n--){
        int x; cin >> x;
        res=max(res,x);
        ++mp1[x];
    }

    while (m--){
        int x; cin >> x;
        res=max(res,x);
        ++mp2[x];
    }

    while (k--){
        int x; cin >> x;
        res=max(res,x);
        ++mp3[x];
    }

    for (int i=0;i<=res;i++){
        if (mp1[i]>0 && mp2[i]>0 && mp3[i]>0){
            ok=1;
            int j=min(mp1[i],mp2[i]);
            j=min(j,mp3[i]);

            while (j--) cout << i << " ";
        }
    }
    if (ok==0) cout << "NO\n";
}

int main() {
    int t=1; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}