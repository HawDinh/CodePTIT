#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> res;

void init(){
    queue<string> q;
    q.push("6");
    q.push("8");
    res.push_back("6");
    res.push_back("8");
    while(1){
        string top = q.front();
        q.pop();
        if(top.length() == 15) break;
        res.push_back(top + "6");
        res.push_back(top + "8");
        q.push(top + "6");
        q.push(top + "8");
    }
}

void nguoc(string s){
    for(int i=s.size()-1; i>=0; i--){
        cout << s[i];
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    init();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i=0; i<n; i++){
            cout << res[i];
            nguoc(res[i]);
            cout << " ";
        }
        cout << endl;
    }
}