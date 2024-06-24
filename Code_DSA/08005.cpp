#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <int> v;

void TestCase(){
    int n; cin >> n;
    queue <string> q;
    q.push("1");
    while (n--){
        string s=q.front();
        cout << s << " ";
        q.pop();

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