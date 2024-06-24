#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, m, par[1001];
vector<int> adj[1001];
bool check[1001];

void bfs(int u){
    queue<int> q;
    q.push(u);
    check[u] = 1;
    while(q.size()){
        int f = q.front(); q.pop();
        for(int v : adj[f]){
            if(check[v]) continue;
            q.push(v);
            check[v] = 1;
            par[v] = f;
        }
    }
}

void path(int s, int t){
    if(!check[t]){
        cout << "-1\n";
        return;
    }
    stack<int> st;
    while(t != s){
        st.push(t);
        t = par[t];
    }
    st.push(s);
    while(st.size()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int te; cin >> te; // t = 1;
    while(te--){
       int s, t;
       cin >> m >> n >> s >> t;
        while(m--){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        bfs(s);
        path(s, t);
        memset(check, 0, sizeof check);
        memset(par, 0, sizeof par);
        for(int i=1; i<=n; i++) adj[i].clear();
    }
}