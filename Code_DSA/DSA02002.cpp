#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    int n; cin >> n;
    vector <int> a(n);
    
    for (int i=0;i<n;i++) cin >> a[i];

    vector <vector<int>> ans;
    ans.push_back(a);
    
    int step=n-1;
    while(step--){
        vector <int> b;
        for(int i=0;i<=step;i++) b.push_back(a[i]+a[i+1]);
        ans.push_back(b);
        a=b;
    }

    for (int i=ans.size()-1;i>=0;i--){
        cout << '[';
        for (int j=0;j<ans[i].size();j++){
            if (j!=ans[i].size()-1) cout << ans[i][j] << " ";
            else cout << ans[i][j];
        }
        cout << "] ";
    }
}

int main() {
    int t; cin >> t;
    while (t--){
        TestCase();
        cout << endl;
    }
    return 0;
}