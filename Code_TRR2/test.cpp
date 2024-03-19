#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
int a[101][101];
int ok[101];
int s, t;
vector<stack<int>> ans;
stack <int> st;

void DFS(int s,int t){
    ok[s]=0;
    st.push(s);

ju
    if (s==t) {
        ans.push_back(st);
        ok[s]=1;
        st.pop();
        return;
    }

    else {
        for (int i=1;i<=n;i++){
            if (ok[i] && a[s][i]){
                DFS(i,t);
            }
        }
    }
    ok[s]=1;
    st.pop();
}


int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        ok[i] = 1;
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    cin >> s >> t;
    DFS(s,t);

    int m=ans.size();
    map <int,int> mp;

    for (auto i:ans){
        while (!i.empty()){
            int x=i.top();
            if (x!=s && x!=t) mp[x]++;
            i.pop();
        }
    }

    for (auto x:mp){
        if (x.second==m) cout << x.first << " ";
    }
    
    return 0;
}
