#include <bits/stdc++.h>
using namespace std;
vector <int> b;
vector<vector<int>> ans;
int a[101];
int n; int k;

void solve(){
    if (b.size()<2) return;
    vector <int> c(b);
    sort(c.begin(),c.end());
    if (c==b) ans.push_back(b);
}

bool cmp(vector <int> a, vector <int> b){
    string x;
    string y;

    for (auto i:a) x+=to_string(i)+" ";
    x.pop_back();
    for (auto i:b) y+=to_string(i)+" ";
    y.pop_back();

    return x<y;
}

void Try(int i){
    for (int j=0;j<2;j++){
        if (j==1) b.push_back(a[i]);
        if (i==n-1) solve();
        else Try(i+1);
        if (j==1) b.pop_back();
    }
}

void TestCase(){
    cin >> n;
    for (int i=0;i<n;i++) cin >> a[i];
    Try(0);

    sort(ans.begin(),ans.end(),cmp);
    for (auto x:ans){
        for (int i:x) cout << i << " ";
        cout << endl;
    }
}

int main() {
    TestCase();
    return 0;
}