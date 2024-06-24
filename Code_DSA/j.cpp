#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[10001][10001]={};
int ok[101];

void DFS(int u){
    stack <int> st;
    st.push(u);
    ok[u]=1; 
    cout << u << " ";

    while (!st.empty()){
        int v=st.top();
        st.pop();
        for (int i=1;i<=n;i++) {
            if (ok[i]==0 && a[v][i]) {
                cout << i << " ";
                ok[i]=1;
                st.push(v);
                st.push(i);
                break;
            }
        }
    }
}

void TestCase(){
    cin >> n;
    for (int i=1;i<=n;i++) ok[i]=0;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) cin >> a[i][j];
    }
    int u; cin >> u;
    DFS(u);
}


int main() {
    int t=1;
    while (t--) {
        TestCase();
    }
}