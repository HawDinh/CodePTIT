#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[30];
vector <string> tmp;
vector <vector<string>> ans;

void solve(){
    vector<string> x;

    for (int i=1;i<=k;i++) x.push_back(tmp[a[i]]);

    sort(x.begin(),x.end());
    ans.push_back(x);
}

void Try(int i){
    for (int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if (i==k) solve();
        else Try(i+1);
    }
}

void testCase(){
    cin >> n >> k;
    set<string> st;

    for (int i=0;i<n;i++){
        string s;
        cin >> s;
        st.insert(s);
    }

    tmp.push_back("");
    for (string s:st){
            tmp.push_back(s);
        }

    n=tmp.size()-1;
    Try(1);
    sort(ans.begin(),ans.end());

    for (auto x:ans){
        for (string i:x) cout << i << " ";
        cout << endl;
    }
}

int main() {
    testCase();
}

