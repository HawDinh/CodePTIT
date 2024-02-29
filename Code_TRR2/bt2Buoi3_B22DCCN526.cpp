#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101];

void BFS(int i){
    cout << i << " ";
    ok[i]=0;

    queue <int> q;
    q.push(i);

    while (!q.empty()){
        int u=q.front();
        q.pop();
        for (int j=1;j<=n;j++){
            if (a[u][j] && ok[j]){
                ok[j]=0;
                cout << j << " ";
                q.push(u);
                q.push(j);
            }
        }
    }
}

int main() {
    cin >> n;

    for (int i=1;i<=n;i++){
        ok[i]=1;
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }

    int u; cin >> u;
    BFS(u);
    return 0;
}