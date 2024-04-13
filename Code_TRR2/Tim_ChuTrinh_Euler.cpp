#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101];

int check(int i){
    for (int j=1;j<=n;j++){
        if (a[i][j]) return j;
    }
    return 0;
}
void EulerCycle(int u){
    if (!check(u)) {
        cout << "Khong ton tai chu trinh Euler" << endl;
        return;
    }

    stack <int> st;
    vector <int> CE;
    st.push(u);
    while (!st.empty()){
        int i=st.top();
        if (check(i)!=0){
            int j=check(i);
            a[i][j]=0;
            a[j][i]=0;
            st.push(j);
        }

        else {
            CE.push_back(i);
            st.pop();
        }
    }
    reverse(CE.begin(),CE.end());

    for (auto x:CE) cout << x << " ";
    cout << endl;
}

int main() {
    cin >> n;
    
    for (int i=1;i<=n;i++){
        int m;
        cin >> m;
        for (int j=1;j<=m;j++){
            int x;
            cin >> x;
            a[i][x]=1;
        }
    }

    int u; cin >> u;
    EulerCycle(u);

    return 0;
}