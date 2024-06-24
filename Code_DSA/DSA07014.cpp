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
    
}

int main() {
    int t=1; 
    //cin >> t;
    while (t--){
        TestCase();
		cout << endl;
    }
    return 0;
}