#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string s;

void sinh(){
    int i=s.size()-1;
    while (i>=0 && s[i]=='0') --i;

    if (i<0) {
        for (int i=0;i<s.size();i++) s[i]='1';
    }
    else {
        s[i]='0';
        for (int j=i+1;j<s.size();j++) s[j]='1';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--){
        cin >> s;
        sinh();
        cout << s << endl;
    }
    return 0;
}