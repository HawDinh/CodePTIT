#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    string s;
	cin >> s;
	stack <int> st;
	int ans=0;

    for (int i=0;i<s.size();i++){
        if (s[i]=='(') st.push(i);
        else if (!st.empty() && s[st.top()]=='(' && s[i]==')'){
            st.pop();
        }
        else st.push(i);
    }

    if (st.empty()) ans=s.size();

    vector <int> v;

    while (!st.empty()){
        v.push_back(st.top());
        st.pop();
    }
    sort(v.begin(),v.end());

    if (v.front()!=0) v.insert(v.begin(),-1);
    if (v.back()!=s.size()-1) v.insert(v.end(),s.size());
    for (int i=1;i<v.size();i++) {
        ans=max(ans,v[i]-v[i-1]-1);
    }
    cout << ans;
}

int main() {
    int t=1; cin >> t;
    while (t--){
        TestCase();
		cout << endl;
    }
    return 0;
}