#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[100001];
int dem[100001];

bool cmp(int a,int b){
    if (dem[a]==dem[b]) return a<b;
    else return dem[a]>dem[b];
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        fill(dem, dem + 100001, 0);
        for (int i=0;i<n;i++) {
            cin >> a[i];
            dem[a[i]]++;
        }
        sort(a,a+n,cmp);

        for (int i=0;i<n;i++) cout << a[i] << " ";

        cout << endl;
    }
}
