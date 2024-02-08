// Đồ thị có hướng có DFS(u)=V với mọi V là LT mạnh
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[101][101],n,ok[101];

void Init(){
    ifstream in("MaTranKe.txt");

    in >> n;
    for (int i=1;i<=n;i++){
        ok[i]=1;
        for (int j=1;j<=n;j++){
            in >> a[i][j];
        }
    }
    in.close();
}

void BFS(int i){
    ok[i]=0;
    queue <int> q;
    q.push(i);

    while (!q.empty()){
        int j=q.front();
        q.pop();
        for (int k=1;k<=n;k++){
            if (a[j][k] && ok[k]) {
                q.push(k);
                ok[k]=0;
            }
        }
    }
}

void DFS(int i){
    ok[i]=0;
    for (int j=1;j<=n;j++){
        if (a[i][j] && ok[j]) DFS(j);
    }
}

int Tphan_LienThong(){
    for (int i=1;i<=n;i++) {
        if (ok[i]) return 0;
    }
    return 1;
}

void ReInit(){
    for (int i=1;i<=n;i++) ok[i]=1;
}

int LienThong_Manh(){
    ReInit();
    for (int i=1;i<=n;i++){
        BFS(i);
        //DFS(i);
        if (Tphan_LienThong()==0){
            return 0;
        }
        ReInit();
    }
    return 1;
}

int main() {
    Init();
    if (LienThong_Manh()) cout << "YES\n";
    else cout << "NO\n";
}