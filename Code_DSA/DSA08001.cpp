#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    int n; cin >> n;
    vector <int> v;
    while (n--){
        int i; cin >> i;
        if (i==1) cout << v.size() << endl;
        else if (i==2) {
            if (v.empty()) cout << "YES";
            else cout <<"NO";
            cout << endl;
        }
        else if (i==3) {
            int x; cin >> x;
            v.push_back(x);
        }
        else if (i==4) {
            if (!v.empty()) v.erase(v.begin());
        }
        else if (i==5) {
            if (v.empty()) cout << "-1";
            else cout << v.front();
            cout << endl;
        }
        else if (i==6){
            if (v.empty()) cout << "-1";
            else cout << v.back(); 
            cout << endl;
        }
    }
}

int main() {
    int t=1; cin >> t;
    cin.ignore();
    while (t--){
        TestCase();
		cout << endl;
    }
    return 0;
}