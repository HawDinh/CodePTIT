#include <bits/stdc++.h>
using namespace std;

int check(string s){
    size_t found1=s.find("88");
    size_t found2=s.find("6666");
    if (s[0]!='8' || s[s.length()-1] !='6' || found1 != string::npos || found2 != string::npos) return 0;
    else return 1;
}

int sinh(string &s, int n){
    int j=n-1;
    while (j>=0 && s[j]=='8') --j;
    if (j<0) return 0;
    else{
        s[j]='8';
        for (int i=j+1;i<n;i++) s[i]='6';
    }
    return 1;
}

void TestCase(){
    int n;
    string s;
    cin >> n;
    s.resize(n,'6');
    while (sinh(s,n)){
        if (check(s)) cout << s << endl;
    }
}

int main() {
    int t=1;
    while (t--){
        TestCase();
    }
    return 0;
}