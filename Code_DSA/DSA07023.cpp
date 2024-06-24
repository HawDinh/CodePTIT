#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    string s;
	getline(cin,s);
    stringstream ss(s);
    string tmp;
    stack<string> st;
    while (ss >> tmp){
        st.push(tmp);
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
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