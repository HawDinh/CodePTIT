//định chiều được khi tất cả các cạnh không là cầu
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101];

void ReInit(){
    for (int i=1;i<=n;i++) ok[i]=1;
}

void BFS(int i){
    queue <int> q;
    q.push(i);
    ok[i]=0;
    while (!q.empty()){
        int u=q.front();
        q.pop();
        for (int v=1;v<=n;v++){
            if (a[u][v] && ok[v]){
                ok[v]=0;
                q.push(v);
            }
        }
    }
}

int checkLT(){
    for (int i=1;i<=n;i++){
        if (ok[i]) return 0;
    }
    return 1;
}

int DinhChieu(){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (a[i][j]){
                ReInit();
                a[i][j]=0;
                a[j][i]=0;
                BFS(1);
                if (checkLT()==0) return 0;
                a[i][j]=1;
                a[j][i]=1;
            }
        }
    }
    return 1;
}

int main() {
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }

    if (DinhChieu()) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}