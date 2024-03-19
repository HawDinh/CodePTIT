#include <bits/stdc++.h>

using namespace std;

int n;
int a[101][101];
vector <string> ans;

void Try(int i,int j,string s){
    if (i==n && j==n) {
        ans.push_back(s);
        return;
    }

    if (a[i+1][j]) Try(i+1,j,s+'D');
    if (a[i][j+1]) Try(i,j+1,s+'R');
}

int main(){
    int t; cin >> t;
    while (t--){
        ans.clear();
        cin >> n;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                cin >> a[i][j];
            }
        }

        if (a[1][1]==0 || a[n][n]==0) {
            cout << "-1\n";
            continue;
        }

        Try(1,1,"");
        
        if (ans.empty()) {
            cout << "-1\n";
        }
        else {
            for (string x:ans) cout << x << " ";
            cout << endl;
        }
    }
}
