#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    int n; cin >> n;
    queue <string> q;
    q.push("1");
    
    while (!q.empty()) {
        string s=q.front();
        q.pop();

        if (stoll(s)%n==0){
            cout << s;
            return;
        }

        q.push(s+"0");
        q.push(s+"1");
    }
}

int main() {
    int t=1; cin >> t;
    while (t--){
        TestCase();
        cout << endl;
    }
    return 0;
}