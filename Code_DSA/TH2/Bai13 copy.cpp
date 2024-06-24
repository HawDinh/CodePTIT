#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
	cin >> n;
	vector<vector<int>> ke(100005);
    int v[100005] = {0};
    unordered_map<string, int> mp;
    int dem=0;
    for(int i=0 ;i<n; i++){
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        if(!mp.count(s1)){
            dem++;
            mp[s1] = dem;
        }
        if(!mp.count(s3)){
            dem++;
            mp[s3] = dem;
        }
        if(s2 == ">"){
            ke[mp[s1]].push_back(mp[s3]);
            v[mp[s3]]++;
        }
        else{
            ke[mp[s3]].push_back(mp[s1]);
            v[mp[s1]]++;
        }
    }
    queue<int> qe;
    for (int i = 1; i <= dem; i++){
        if (v[i] == 0){
            qe.push(i);
        }
        
    }
    int cnt = 0;
    while(!qe.empty()){
        int x = qe.front();
        qe.pop();
        cnt++;
        for (int i:ke[x]){
            v[i]--;
            if (v[i] == 0){
                qe.push(i);
            }
            
        }
    }
	if(cnt == dem) cout << "possible\n";
	else cout << "impossible\n";
}