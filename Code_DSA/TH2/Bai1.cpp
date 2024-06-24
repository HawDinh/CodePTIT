#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--){
        string s;
        cin >> s;
        int mark[s.size()];
        memset(mark, -1, sizeof mark);
        stack<pair<char, int>> st;
        for (int i = 0; i < s.size(); ++i){
            if (s[i] == '(')
                st.push({s[i], i});
            else if (s[i] == ')'){
                if (st.size() && st.top().first == '('){
                    mark[st.top().second] = 0;
                    mark[i] = 1;
                    st.pop();
                }
                else
                    st.push({s[i], i});
            }
        }
        for (int i = 0; i < s.size(); ++i){
            if (s[i] == '(' || s[i] == ')'){
                cout << mark[i];
            }
            else
                cout << s[i];
        }
        cout << "\n";
    }
}