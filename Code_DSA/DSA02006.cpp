#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

string s;
int n,a[101],b[101],K;
int ok[101];
vector<vector<int>> ans;

void solve(){
    int sum=0;
    vector <int> v;
    for (int i=0;i<n;i++){
        sum=sum+a[i]*b[i];
    }
    if (sum==K) {
        for (int i=0;i<n;i++){
            if (b[i]) v.push_back(a[i]);
        }

        ans.push_back(v);
    }
}

void Try(int i){
    for (int j=0;j<=1;j++){
        b[i]=j;
        if (i==n-1) solve();
        else Try(i+1);
    }
}

void TestCase(){
    cin >> n >> K;
    ans.clear();

    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    Try(0);
    reverse(ans.begin(),ans.end());

    if (ans.empty()) cout << "-1";
    else {
        for (auto i:ans){
        cout << "[";
        for (int j=0;j<i.size();j++){
            if (i[j]!=i[i.size()-1]) cout << i[j] << " ";
            else cout << i[j];
        }
        cout << "] ";
        }
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        TestCase();
        cout << endl;
    }

    return 0;
}