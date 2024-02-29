#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> tmp;
int n;

int main() {
    cin >> n;
    set<string> st;

    for (int i=0;i<n;i++){
        string s;
        cin >> s;
        st.insert(s);
    }

    for (string s:st){
            tmp.push_back(s);
        }

    for (string s:st) cout << s << " ";
    return 0;
}
