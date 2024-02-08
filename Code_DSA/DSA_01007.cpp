#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string s; 
int ok;
int n;

void ktao(){
    for (int i=1;i<=n;i++) s[i]='A';
}

void in(){
    for (int i=1;i<=n;i++) cout << s[i];
    cout << " ";
}

void sinh(){
    int i=n;
    while (i>0 && s[i]=='B') --i;

    if (i==0) ok=0;

    else {
        s[i]='B';
        for (int j=i+1;j<=n;j++) s[j]='A';
    }
}

int main() {
    int t; cin >> t;
    cin.ignore(); 

    while (t--){
        cin >> n;
        ktao();
        in();
        ok=1;

        while (ok){
            sinh();
            if (ok) in();
        }
        cout << endl;
    }
}
