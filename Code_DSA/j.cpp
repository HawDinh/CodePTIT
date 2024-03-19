
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101],b[101];
int s,t;
stack <int> st;
vector <stack<int>> ans;

void sang(map<int, int>& mp) {
    for (int i = 1; i <= n; i++) {
        if (mp[i] == 0) b[i] = 0;
    }
}

int check(){
    for (int i=1;i<=n;i++) {
        if (b[i]) return 1;
    }
    return 0;
}

void DFS(int s,int t){
    ok[s]=0;
    st.push(s);
    if  (s==t) {
        map<int, int> mp;
        for (auto x : st) mp[x]++;
        sang(mp);
        ok[s]=1;
        st.pop();
        return;
    }

    if (check()==0) return;

    else {
        for (int i=1;i<=n;i++){
        if(a[s][i] && ok[i]){
            DFS(i,t);
            }
        }
    }
    ok[s]=1;
    st.pop();
}

int main() {
    cin >> n;
    
    /*for (int i=1;i<=n;i++){
        ok[i]=1;
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }*/

    for (int i=1;i<=n;i++){
        ok[i]=1;
        b[i]=1;
        int m;
        cin >> m;
        for (int j=1;j<=m;j++){
            int x;
            cin >> x;
            a[i][x]=1;
            a[x][i]=1;
        }
    }

    cin >> s >> t;
    DFS(s,t);

    for (int i=1;i<=n;i++) {
        if (b[i]) cout << i << " ";
    }

    return 0;
}