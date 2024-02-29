#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[101][101];
int n,s,t;
int ok[101];
int truoc[101];

void BFS(int i){
    ok[i]=0;
    
    queue <int> q;
    q.push(i);
    while (!q.empty()){
        int u=q.front();
        q.pop();

        for (int v=1;v<=n;v++){
            if (a[u][v] && ok[v]) {
                ok[v]=0;
                q.push(v);
                truoc[v]=u;
            }
        }
    }
}

void DuongDi(int s,int t){
    if (truoc[t]==0) cout << "ko co!!!";

    else {
        queue <int> q;
        int v=t;
        q.push(v);

        int u=truoc[v];
        while(u!=s){
            q.push(u);
            u=truoc[u];
        }
        q.push(s);

        while (!q.empty()){
            int x=q.front();
            cout << x << " ";
            q.pop();
        }
    }
}

int main() {
    cin >> n;
    for (int i=1;i<=n;i++){
        ok[i]=1;
        int m; cin >> m;
        while (m--){
            int j; cin >> j;
            a[i][j]=1;
        }
    }
    
    //int s,t;
    cin >> s >> t;
    BFS(s);
    DuongDi(s,t);
    return 0;
}
