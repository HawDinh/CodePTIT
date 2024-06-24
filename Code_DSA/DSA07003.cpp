#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    string s;
	getline(cin,s);
	stack <char> st;

	for (char i:s){
		if (i!=')') st.push(i);
		else {
			int ok=0;
			while (!st.empty()){
				char x=st.top(); st.pop();
				if (x=='+' || x=='-' || x=='*' || x=='/') ok=1;
				if (x=='(') break;
			}
			if (!ok) {
				cout << "Yes";
				return;
			}
		}
	}
	cout << "No";
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


