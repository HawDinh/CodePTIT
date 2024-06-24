#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(ll a, ll b, char c) {
    if (c == '+') return a + b;
    else if (c == '-') return a - b;
    else if (c == '*') return a * b;
    else if (c == '/') return a / b;
    return 0;
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        string tmp;
        vector<string> v;
        stringstream ss(s);
        while(ss >> tmp){
            v.push_back(tmp);
        }
        stack<ll> st;
        if((v[0][0] >= '0' && v[0][0] <= '9') || (v[0][0] == '-' && v[0].size() >= 2)){
            for(int i=0; i<v.size(); i++){
                if(isdigit(v[i].back())){
                    st.push(stoll(v[i]));
                }
                else{
                    ll b = st.top();
                    st.pop();
                    ll a = st.top();
                    st.pop();
                    ll c = calc(a, b, v[i][0]);
                    st.push(c);
                }
            }
        }
        else{
            for(int i=v.size()-1; i>= 0; i--){
                if(isdigit(v[i].back())){
                    st.push(stoll(v[i]));
                }
                else{
                    ll b = st.top();
                    st.pop();
                    ll a = st.top();
                    st.pop();
                    ll c = calc(b, a, v[i][0]);
                    st.push(c);
                }
            }
        }
        cout << st.top() << endl;
    }
}