#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[101][101];
int n;
int ok[101];

void DFS(int i){
    stack <int> st;
    cout << i << " ";
    ok[i]=0;
    st.push(i);
    while (!st.empty()){
        int u=st.top();
        st.pop();

        for (int v=1;v<=n;v++){
            if (a[u][v] && ok[v]){
                cout << v << " ";
                ok[v]=0;
                st.push(u);
                st.push(v);
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
    
    int stt=0;
    for (int i=1;i<=n;i++){
        if(ok[i]){
            cout << "tplt " << ++stt << ":";
            DFS(i);
            cout << endl;
        }
    }
    return 0;
}
