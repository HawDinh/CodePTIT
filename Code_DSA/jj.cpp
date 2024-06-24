#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[10001][10001]={};
int ok[101];

void BFS(int u){
    //cout << u << " ";
    ok[u]=0;
    queue <int> q;
    q.push(u);
    
    while (!q.empty()){
        int v=q.front();
        q.pop();
        for (int i=1;i<=n;i++) {
            if (ok[i] && a[v][i]) {
                ok[i]=0;
                //cout << i << " ";
                q.push(i);
            }
        }
    }
}

void TestCase(){
    cin >> n >> k;
    for (int i=1;i<=n;i++) ok[i]=1;
    for (int i=1;i<=k;i++) {
        int x,y; cin >> x >> y;
        a[x][y]=1;
        a[y][x]=1;
    }
    int dem=0;
    for (int i=1;i<=n;i++) {
        if (ok[i]) {
            BFS(i);
            ++dem;
        }
    }
    cout << dem << endl;
}


int main() {
    int t=1; cin >> t;
    while (t--) {
        TestCase();
    }
}