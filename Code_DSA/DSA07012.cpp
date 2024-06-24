#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    string s;
	cin >> s;
	stack <string> st;
	
	for (char o:s){
		string i=string(1,o);
		if (i=="+" || i=="-" || i=="*" || i=="/") {
			string x=st.top(); st.pop();
			string y=st.top(); st.pop();
			string z="("+y+i+x+")";
			st.push(z);
		}
		else st.push(i);
	}
	cout << st.top();
}

int main() {
    int t=1; cin >> t;
    while (t--){
        TestCase();
		cout << endl;
    }
    return 0;
}