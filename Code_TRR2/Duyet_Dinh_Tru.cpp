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

void DFS(int i){
    ok[i]=0;
    stack<int> st;
    st.push(i);

    while (!st.empty()){
        int u=st.top();
        st.pop();
        for (int v=1;v<=n;v++){
            if (a[u][v] && ok[v]){
                ok[v]=0;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}

int CheckLT(){
    for (int i=1;i<=n;i++){
        if (ok[i]) return 0;
    }
    return 1;
}

void DuyetTru(){
    for (int i=1;i<=n;i++){
        ReInit();
        ok[i]=0;
        if (i==1) DFS(2);
        else DFS(1);
        
        if (CheckLT()==0) cout << i << " "; 
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
    cout << "cac dinh tru la: ";
    DuyetTru();
    
    return 0;
}
