#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

int x,n;
vector <int> a,b;
int used[10001]={0};

void solve(){
    if (a[b[0]]!=0) {
        for (int i=0;i<n;i++) cout << a[b[i]];
    }
    cout << endl;
}

void Try(int i){
    for (int j=b[i-1]+1;j<n;j++){
        if (used[j]==0){
            b[i]=j;
            used[j]=1;
            if (i==n-1) solve();
            else Try(i+1);
            used[j]=0;
        }
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        cin >> x;
        a.clear();
        while (x>0){
            a.push_back(x%10);
            x/=10;
        }
        sort(a.begin(),a.end());
        n=a.size();
        b.resize(a.size(), -1);
        Try(0);
    }
}