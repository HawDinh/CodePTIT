#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string s;
int ok;
int n;

void ktao(){
    s.resize(n);
    for (int i=0;i<n;i++) s[i]='A';
}

int check(){
    for (int i=0;i<n;i++){
        if (s[i]=='H' && s[i+1]=='H') return 0; 
    }
    if (s[0]!='H' || s[n-1]!='A') return 0;
    return 1;
}

void sinh(){
    int i=n-1;
    while (i>=0 && s[i]=='H') --i;

    if (i<0) ok=0;

    else {
        s[i]='H';
        for (int j=i+1;j<n;j++) s[j]='A';
    }
}

int main() {
    int t; cin >> t;
    while (t--){
        ok=1;
        cin >> n;
        ktao();

        while (ok){
            sinh();
            if (check() && ok) cout << s << endl;
        }
    }
    return 0;
}