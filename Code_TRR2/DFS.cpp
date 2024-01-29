// thuật toán tìm kiếm theo chiều sâu dựa trên ma trận kề

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101];

void DFS_dequy(int i){
    ok[i]=0;
    cout << i << " ";
    for (int j=1;j<=n;j++){
        if (a[i][j] && ok[j])
        DFS_dequy(j);
    }
}

void DFS_stack(int i){
    stack <int> st;
    st.push(i);
    cout << i << " ";
    ok[i]=0;

    while (!st.empty()){
        int s=st.top();
        st.pop();
        for (int i=1;i<=n;i++){
            if (a[s][i] && ok[i]){
                ok[i]=0;
                cout << i << " ";
                st.push(s);
                st.push(i);
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

    DFS_stack(1);
    return 0;
}