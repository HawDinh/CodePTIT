#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> adj[1005];
int v, e, visited[1005], vis[1005], parent[1005], par[1005];

void dfs(int u){
    visited[u] = 1;
    for(int v : adj[u]){
        if(visited[v]) continue;
        parent[v] = u;
        dfs(v);
    }
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v : adj[x]){
            if(vis[v]) continue;
            q.push(v);
            vis[v] = 1;
            par[v] = x;
        }
    }
}

void pathd(int s, int t){
    if(!visited[t]){
        cout << -1 << "\n";
        return;
    }
    stack<int> st;
    while(t != s){
        st.push(t);
        t = parent[t];
    }
    st.push(s);
    while(st.size()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

void pathb(int s, int t){
    if(!vis[t]){
        cout << -1 << "\n";
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
    cin >> v >> e;

    for(int i=0 ;i<e; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);
    for(int i=2; i<=v; i++){
        pathd(1, i);
        for(int i=1; i<=v; i++){
            vis[i]=0;
            par[i]=0;
        }
        bfs(i);
        pathb(i, 1);
    }

    for(int i=1; i<=v; i++){
        adj[i].clear();
        visited[i]=0;
        parent[i]=0;
    }
}