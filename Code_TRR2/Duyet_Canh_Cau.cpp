#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[101][101];
int n;
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

void DuyetCanh(){
    for (int i=1;i<n;i++){
        for (int j=i+1;j<=n;j++){
            if (a[i][j]){
                ReInit();
                a[i][j]=0; a[j][i]=0;
                BFS(1);
                if (checkLT()==0) cout << i << ',' << j << " ";
                a[i][j]=1; a[j][i]=1;
            }
        }
    }
}

int main(){
    cin >> n;

    for (int i=1;i<=n;i++){
        ok[i]=1;
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }

    cout << "cac canh cau la: ";
    DuyetCanh();
}