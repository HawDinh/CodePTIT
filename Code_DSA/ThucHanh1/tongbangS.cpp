#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

int n,k;
int S;
int a[100001],b[100001];
int ans=INT_MAX;

void solve(){
    int dem=0;
    int sum=0;
    for (int i=0;i<n;i++){
        if (b[i]==1) {
            sum+=a[i];
            ++dem;
        }
    }
    if (sum==S) ans=min(ans,dem);
}

void Try(int i){
    for (int j=0;j<=1;j++){
        b[i]=j;
        if (i==n-1) solve();
        else Try(i+1);
    }
}

int main(){
    cin >> n >> S;
    for (int i=1; i<=n;i++) cin >> a[i];
    Try(0);
    cout << ans << endl;

    return 0;
}