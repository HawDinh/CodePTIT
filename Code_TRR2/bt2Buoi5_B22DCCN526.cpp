#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[101][101];
int ok[101];

void ReInit(){
    for (int i=1;i<=n;i++) ok[i]=1;
}

void BFS(int i){
    ok[i]=0;
    queue<int> q;
    q.push(i);

    while (!q.empty()){
        int u=q.front();
        q.pop();

        for (int v=1;v<=n;v++){
            if (ok[v] && a[u][v]) {
                ok[v]=0;
                q.push(v);
            }
        }
    }
}

int TPhanLT(){
    for (int i=1;i<=n;i++){
        if (ok[i]) return 0;
    }
    return 1;
}

int main() {
    cin >> n >> m;
    a[n+1][n+1]={0};

    while (m--){
        int i,j; cin >> i >> j;
        a[i][j]=1;
        a[j][i]=1;
    }

    cout << "cac canh cau la: ";
    for (int i=1;i<n;i++){
        for (int j=i+1;j<=n;j++){
            if(a[i][j]){
                ReInit();
                a[i][j]=0;
                a[j][i]=0;
                BFS(1);
                if (TPhanLT()==0) cout << i << "," << j << " ";
                a[i][j]=1;
                a[j][i]=1;
            }
        }
    }

    return 0;
}