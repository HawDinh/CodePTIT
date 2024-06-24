#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    string s;
	vector <int> v;

	while (cin >> s){
	if (s=="push") {
		int n;
		cin >> n;
		v.push_back(n);
	}
	else if (s=="pop") {
		if (!v.empty()) v.pop_back();
	}
	else {
		if (v.empty()) cout << "empty";
		else {
			for (int i:v) cout << i << " ";
		}
		cout << endl;
	}
	}
}

int main() {
    int t=1; //cin >> t;
    while (t--){
        TestCase();
    }
    return 0;
}