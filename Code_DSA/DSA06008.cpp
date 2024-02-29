#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int dem = 0;
        int a[n], b[m], c[100001]={};

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int j = 0; j < m; j++) {
            cin >> b[j];
            c[b[j]]++;
        }
        sort(b,b+m);
        for (int i = 0; i < n; i++) {
            if (a[i] == 0 || a[i] == 1) {
                dem=dem;
            } else if (a[i] == 2) {
                dem = dem + m - c[2] - c[3] - c[4];
            } else if (a[i] == 3) {
                dem = dem + m - c[3];
            } else {
                int it = upper_bound(b, b + m, a[i]) - b; //tìm vị trí đầu tiên trong mảng b lớn hơn a[i]
                dem = dem + m - it + c[0] + c[1];
            }
        }
        cout << dem << " " << endl;
    }
    return 0;
}
