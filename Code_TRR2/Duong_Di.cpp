// thuật toán tìm kiếm theo chiều rộng BFS
// dựa trên ma trận kề

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101];
int truoc[101];
int s,t;

void DFS_stack(int s){
    ok[s]=0;
    stack <int> st;
    st.push(s);

    while(!st.empty()){
        int u=st.top();
        st.pop();
        for (int i=1;i<=n;i++){
            if(a[u][i] && ok[i]){
                ok[i]=0;
                st.push(u);
                st.push(i);
                truoc[i]=u;
                break;
            }
        }
    }
}

void DFS_dequy(int s){
    ok[s]=0;
    for (int i=1;i<=n;i++){
        if (a[s][i] && ok[i]){
            truoc[i]=s;
            DFS_dequy(i);
        }
    }
}

void BFS(int s) {
    ok[s]=0;
    queue <int> q;
    q.push(s);

    while (!q.empty()){
        int u=q.front();
        q.pop();

        for (int i=1;i<=n;i++){
        if (a[u][i] && ok[i]){
            ok[i]=0;
            q.push(i);
            truoc[i]=u;
        }
    }
    }
}

void Duong_Di(int s, int t){
    if(truoc[t]==0) {
        cout << "ko co!!!";
    }
    else {
        int v=t;
        cout << v << " ";

        int u=truoc[v];
        while (u!=s){
            cout << u << " ";
            u=truoc[u];
        }
        cout << s << " ";
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

    cin >> s >> t;
    BFS(s); //BFS tìm đường ngắn nhất
    //DFS_dequy(s);
    //DFS_stack(s);
    Duong_Di(s,t);
    return 0;
}