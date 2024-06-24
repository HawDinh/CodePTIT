// đường đi Euler và chu trình Euler chỉ khác nhau duy nhất là đầu vào của thuật toán
// chu trình có đầu vào bất kì
// đường đi có đầu vào u là đỉnh bậc lẻ đầu tiên (vô hướng)
// đường đi có deg+(u) - deg-(u) = 1 (có hướng)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int ok[101];

int degDuong(int u){
    int dem=0;
    for (int i=1;i<=n;i++){
        if (a[u][i]) ++dem;
    }
    return dem;
}

int degAm(int u){
    int dem=0;
    for (int i=1;i<=n;i++){
        if (a[i][u]) ++dem;
    }
    return dem;
}

int check_vohuong(){
    for (int i=1;i<=n;i++){
        if (degAm(i)!=degDuong(i)) return 0;
    }
    return 1;
}

int Dinh_BacLe(){
    for (int i=1;i<=n;i++){
        int dem=0;
        for (int j=1;j<=n;j++){
            if (a[i][j]) ++dem;
        }
        if (dem%2==1) return i;
    }
    return 0;
}

int TimDauVao(){
    if (check_vohuong()) return Dinh_BacLe();
    else {
        for (int i=1;i<=n;i++){
            if (degDuong(i)-degAm(i)==1) return i;
        }
    }
    return -1;
}

int check(int i){
    for (int j=1;j<=n;j++){
        if (a[i][j]) return j;
    }
    return 0;
}

void EulerCycle(int u){
    if (!check(u)) {
        cout << "Khong ton tai duong di Euler" << endl;
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
        ok[i]=1;
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }

    /*for (int i=1;i<=n;i++){
        int m;
        cin >> m;
        for (int j=1;j<=m;j++){
            int x;
            cin >> x;
            a[i][x]=1;
        }
    }*/


    int u=TimDauVao();
    EulerCycle(u);
    return 0;
}