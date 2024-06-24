#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <int> v;

void TestCase(){
    string s; cin >> s;
    if (s=="PUSHBACK"){
        int n; cin >> n;
        v.push_back(n);
    }
    else if (s=="PUSHFRONT") {
        int n; cin >> n;
        v.insert(v.begin(),n);
    }
    else if (s=="POPFRONT") {
        if (!v.empty()) v.erase(v.begin());
    }
    else if (s=="POPBACK") {
        if (!v.empty()) v.pop_back();
    }
    else if (s=="PRINTBACK"){
        if (v.empty()) cout << "NONE\n";
        else cout << v.back() << endl;
    } 
    else {
        if (v.empty()) cout << "NONE\n";
        else cout << v.front() << endl;
    }
}

int main() {
    int t=1; cin >> t;
    while (t--){
        TestCase();
    }
    return 0;
}