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

int dem_tplt(){
    int dem=0;
    for (int i=1;i<=n;i++){
        if (ok[i]) {
            DFS(i);
            dem++;
        }
    }
    return dem;
}

void DuyetTru(){
    int tmp=dem_tplt();
    for (int i=1;i<=n;i++){
        ReInit();
        ok[i]=0;
        if (dem_tplt() > tmp) cout << i << " "; //tplt tăng khi ngắt đỉnh
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
