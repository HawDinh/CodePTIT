#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101];

void DFS(int i){
    ok[i]=0;
    stack <int> st;
    st.push(i);
    
    while (!st.empty()){
        int u=st.top();
        st.pop();
        for (int v=1;v<=n;v++){
            if (ok[v] && a[u][v]) {
                ok[v]=0;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}

int checkLT(){
    for (int i=1;i<=n;i++) {
        if (ok[i]) return 0;
    }
    return 1;
}

void checkEuler(){
    DFS(1);
    if (checkLT()==0) {
        cout << "No1\n";
        return;
    }

    for (int i=1;i<=n;i++){
        int dem=0;
        for (int j=1;j<=n;j++){
            if (a[i][j]) ++dem;
        }
        if (dem%2==1) {
            cout << "No2";
            return;
        }
    }
    cout << "Yes";
}

int main() {
    cin >> n;
    
    for (int i=1;i<=n;i++){
        ok[i]=1;
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }

    checkEuler();

    return 0;
}