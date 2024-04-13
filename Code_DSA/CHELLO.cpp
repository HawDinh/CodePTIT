#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    vector <int> b;
    for (int i=1;i<6;i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }
    cout << b[b.size()] << " " << b[b.size()-1];
}

int main() {
    int t=1;
    while (t--){
        TestCase();
    }
    return 0;
}