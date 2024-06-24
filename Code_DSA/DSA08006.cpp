#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <int> v;

void TestCase(){
    int n; cin >> n;
    queue <string> q;
    q.push("9");
    while (1){
        string s=q.front();
        q.pop();

        if (stoi(s)%n==0) {
            cout << s;
            return;
        }
        q.push(s+"0");
        q.push(s+"9");
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