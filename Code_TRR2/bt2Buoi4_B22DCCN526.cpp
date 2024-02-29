#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[101][101];
int n;
int ok[101];

void ReInit(){
    for (int i=1;i<=n;i++){
        ok[i]=1;
    }
}

int check(){
    for(int i=1;i<=n;i++){
        if (ok[i]==1) return 0;
    }
    return 1;
}

void BFS(int i){
    queue <int> q;
    ok[i]=0;
    q.push(i);
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

int LienThongManh(){
    for (int i=1;i<=n;i++){
        ReInit();
        if (i==1) BFS(2);
        else BFS(1);
        if (check()==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    cin >> n;
    for (int i=1;i<=n;i++){
        ok[i]=1;
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    
    if (LienThongManh()) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}
