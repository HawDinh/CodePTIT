//cách 2 giống tìm đỉnh trụ, bỏ thử đỉnh u xem từ s đến t còn đường đi không
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int b[101][101];
int ok[101];
int s,t;
vector <int> ans;

void ReInit(){
    for (int i=1;i<=n;i++) ok[i]=1;
}

void ktao(){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++) a[i][j]=b[i][j];
    }
}

void DFS(int i){
    ok[i]=0;
    stack <int> st;
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


void DinhThat(int s,int t){
    for (int u=1;u<=n;u++){
        ReInit();
        ktao();
        if (u==s || u==t) continue;
        
        for (int i=1;i<=n;i++){
            a[u][i]=0;
            a[i][u]=0;
        }

        DFS(s);
        if (ok[t]) ans.push_back(u);
    }
}

int main() {
    cin >> n;
    
    /*for (int i=1;i<=n;i++){
        ok[i]=1;
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }*/

    for (int i=1;i<=n;i++){
        int m;
        cin >> m;
        for (int j=1;j<=m;j++){
            int x;
            cin >> x;
            b[i][x]=1;
            b[x][i]=1;
        }
    }

    cin >> s >> t;
    DinhThat(s,t);

    for (auto x:ans) cout << x << " ";

    return 0;
}

