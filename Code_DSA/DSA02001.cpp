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

    for (auto i:ans){
        cout << '[';
        for (int j=0;j<i.size();j++){
            if (j!=i.size()-1) cout << i[j] << " ";
            else cout << i[j];
        }
        cout << ']' << endl;
    }
}

int main() {
    int t; cin >> t;
    while (t--){
        TestCase();
    }
    return 0;
}