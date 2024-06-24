#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; // t = 1;
    while(t--){
        int n; cin >> n;

        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int a[n+1];
        for(int i=1; i<=n; i++) cin >> a[i];

        int a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }

        priority_queue<int, vector<int>, greater<int>> Q;
    }
}