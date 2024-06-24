#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check(char i){
	if (i=='+' || i=='-' || i=='*' || i=='/') return 1;
	else return 0;
}

int tinh(int a, int b, char o){
	if (o=='+') return a+b;
	else if (o=='-') return a-b;
	else if (o=='*') return a*b;
	else return a/b;
}

void TestCase(){
    string s; cin >> s;

	stack <int> st;

	for (char i:s){
		int z;
		if (check(i)) {
			int a=st.top(); st.pop();
			int b=st.top(); st.pop();
			z=tinh(b,a,i);
		}
		else z=i-'0';

		st.push(z);
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