#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void TestCase(){
    int n,m; cin >> n >> m;
    int a[n],b[m];
    map <int,int> mp;
    for (int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i=0;i<m;i++){
        cin >> b[i];
        mp[b[i]]++;
    }

    for (auto it:mp) cout << it.first << " ";
    cout << endl;
    for (auto it:mp){
        if (it.second==2) cout << it.first << " ";
    }
    cout << endl;
 }
int main()
{
    int t; cin >> t;
    while (t--){
        TestCase();
    }
}