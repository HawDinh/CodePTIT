#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    string s;
	cin >> s;
	stack <char> st;
	int open=0;
	int close=0;

	for (char i:s){
		if (i=='(') {
			open++;
			st.push(i);
		}
		else if (!st.empty() && st.top()=='(') {
			open--;
			st.pop();
		}
		else {
			close++;
			st.push(i);
		}
	}
	int ans = open/2 + close/2;
	ans += open%2 + close%2;
	cout << ans;
}

int main() {
    int t=1; cin >> t;
    while (t--){
        TestCase();
		cout << endl;
    }
    return 0;
}