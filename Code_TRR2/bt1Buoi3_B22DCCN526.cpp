#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101];

void DFS(int i){
    stack <int> st;
    cout << i << " ";
    ok[i]=0;
    
    st.push(i);
    while (!st.empty()){
        int u=st.top();
        st.pop();
        for (int j=1;j<=n;j++){
            if (a[u][j] && ok[j]){
                cout << j << " ";
                ok[j]=0;
                st.push(u);
                st.push(j);
                break;
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
    DFS(u);
    
    return 0;
}