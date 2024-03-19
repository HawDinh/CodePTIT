
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
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
    for (int i=1;i<=n;i++){
        if (ok[i]) return 0;
    }
    return 1;
}

int checkEuler(){
    ReInit();
    DFS(1);
    if (checkLT()==0) return 0;
    
    for (int i=1;i<=n;i++){
        int dem=0;
        for (int j=1;j<=n;j++){
            if (a[i][j]) ++dem;
        }
        if (dem%2==1) return 0;
    }
    return 1;
}

int Ke(int i){
    for (int j=1;j<=n;j++){
        if (a[i][j]) return j;
    }
    return 0;
}

void ChuTrinhEuler(int i){
    stack <int> st;
    vector <int> CE;

    st.push(i);
    while (!st.empty()){
        int u=st.top();
        if (Ke(u)!=0) {
            int x=Ke(u);
            st.push(x);
            a[u][x]=0;
            a[x][u]=0;
        }
        else {
            CE.push_back(u);
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
        ok[i]=1;
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }

    if (checkEuler()==0) cout << "Khong phai do thi Euler\n";
    
    else ChuTrinhEuler(1);

    return 0;
}