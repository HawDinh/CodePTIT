#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    string s; cin >> s;
    stack<char> st;
    int ans=0;
    for (int i=0;i<s.size();i++){
        if (s[i]==')' && !st.empty() && st.top()=='(' || s[i]==']' && !st.empty() && st.top()=='[' || s[i]=='}' && !st.empty() && st.top()=='{') {
            st.pop();
        }
        else st.push(s[i]);
    }

    if (st.empty()) cout << "YES";
    else cout << "NO";

}

int main() {
    int t=1; cin >> t;
    cin.ignore();
    while (t--){
        TestCase();
		cout << endl;
    }
    return 0;
}