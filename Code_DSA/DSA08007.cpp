#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    string n; cin >> n;
    queue <string> q;
    q.push("1");
    long long dem=0;
    while (!q.empty()){
        string s=q.front();
        dem++;
        q.pop();
        
        string x1=s+"0";
        if (x1.size()>n.size() || x1.size()==n.size() && x1>n){
            break;
        }
        q.push(x1);

        string x2=s+"1";
        if (x2.size()>n.size() || x2.size()==n.size() && x2>n){
            break;
        }
        q.push(x2);
    }
    cout << dem+q.size();
}

int main() {
    int t=1; cin >> t;
    while (t--){
        TestCase();
        cout << endl;
    }
    return 0;
}