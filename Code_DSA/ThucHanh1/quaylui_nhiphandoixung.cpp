#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,x;
int a[101];
int ans=INT_MAX;

void Try(int i,int sum,int dem){
    for (int j=a[i-1]+1;j<=n;j++){
        sum+=a[j];
        ++dem;
        if (sum==x) {
           ans=dem;
           cout << ans << endl;
           break;
        }
        else if  Try(i+1,sum,dem);
    }
}

int main() {
    int t; cin >> t;
    while (t--){
        cin >> n >> x;
        
        for (int i=1;i<=n;i++) cin >> a[i];

        sort(a,a+n);

        int sum=0;
        int dem=0;
        Try(1,sum,dem);
        
        cout << endl;
    }
}