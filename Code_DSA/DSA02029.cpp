#include <bits/stdc++.h>
using namespace std;
int n;

void solve(char A, char B){
    cout << A << " " << "-> " << B << endl;
}

void Try(int i, char A, char B, char C){
    if(i==1) solve(A,C);
    else {
        Try(i-1,A,C,B);
        solve(A,C);
        Try(i-1,B,A,C);
    }
}

void TestCase(){
    cin >> n;
    char A='A';
    char B='B';
    char C='C';
    Try(n,A,B,C);
}

int main() {
    TestCase();
    return 0;
}