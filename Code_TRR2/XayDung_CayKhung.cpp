//dùng DFS hoặc BFS sẽ cho ra các cây khung khác nhau
// thuật toán tìm kiếm theo chiều rộng BFS
// dựa trên ma trận kề

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101];

void ReInit(){
    for (int i=1;i<=n;i++) ok[i]=1;
}

void Tree_DFS(int u){
    stack <int> TreeSt;
    TreeSt.push(u);
    ok[u]=0;
    while (!TreeSt.empty()){
        int i=TreeSt.top();
        TreeSt.pop();

        for (int j=1;j<=n;j++){
            if (ok[j] && a[i][j]){
                ok[j]=0;
                cout << i << "->" << j << " ";
                TreeSt.push(i);
                TreeSt.push(j);
                break;
            }
        }
    }
}

void Tree_BFS(int u){
    queue <int> TreeQ;
    TreeQ.push(u);
    ok[u]=0;

    while (!TreeQ.empty()){
        int i=TreeQ.front();
        TreeQ.pop();
        
        for (int j=1;j<=n;j++){
            if (ok[j] && a[i][j]){
                cout << i << "->" << j << " ";
                ok[j]=0;
                TreeQ.push(j);
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
    cout << "Tree DFS:";
    Tree_DFS(u);
    //ReInit();
    //cout << endl << "Tree BFS:";
    //Tree_BFS(u);
    return 0;
}