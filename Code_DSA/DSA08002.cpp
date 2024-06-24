#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <int> v;

void TestCase(){
    string s; cin >> s;
    if (s=="PUSH"){
        int n; cin >> n;
        v.push_back(n);
    }
    else if (s=="POP") {
        if (!v.empty()) v.erase(v.begin());
    }
    else {
        if (v.empty()) cout << "NONE\n";
        else cout << v.front() << endl;
    }
}

int main() {
    int t=1; cin >> t;
    cin.ignore();
    while (t--){
        TestCase();
    }
    return 0;
}