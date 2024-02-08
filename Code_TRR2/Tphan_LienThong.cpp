// thuật toán tìm kiếm theo chiều rộng BFS
// dựa trên ma trận kề

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101];

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

void BFS_queue(int i){
    queue <int> q;
    q.push(i);
    cout << i << " ";
    ok[i]=0;

    while (!q.empty()){
        int j=q.front();
        q.pop();
        for (int i=1;i<=n;i++){
            if (a[j][i]==1 && ok[i]) {
                q.push(i);
                cout << i << " ";
                ok[i]=0;
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

    int solt=0;
    
    for (int i=1;i<=n;i++){
        if (ok[i]) {
            solt++;
            cout << endl << "tplt" << " " << solt << ':' << " ";
            DFS_stack(i);
        }
    }
    return 0;
}