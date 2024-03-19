#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int n;
int ok[101];

void ReInit(){
    for (int i=1;i<=n;i++) ok[i]=1;
}

void DFS(int i){
    ok[i]=0;
    stack <int> st;
    st.push(i);

    while (!st.empty()){
        int u=st.top();
        st.pop();

        for (int j=1;j<=n;j++){
            if (ok[j] && a[u][j]){
                ok[j]=0;
                st.push(u);
                st.push(j);
                break;
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

int DuyetDinhTru(int i){
    ReInit();
    ok[i]=0;
    if (i==1) DFS(2);
    else DFS(1);
    if (TPhanLT()==0) return 1;
    else return 0;
}

int main() {
    cin >> n;

    vector <int> ans;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++) a[i][j]=0;
    }
    
    for (int i=1;i<=n;i++){
        int m;
        cin >> m;
        while (m--){
            int j; cin >> j;
            a[i][j]=1;
        }
    }

    for (int i=1;i<=n;i++){
        if (DuyetDinhTru(i)) ans.push_back(i);
    }

    cout << "cac dinh tru la: ";
    for (auto x:ans) cout << x << " ";

    return 0;
}