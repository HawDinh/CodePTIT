#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void testCase(){
    int n; cin >> n;
    vector <int> a(n);
    vector <vector<int>> b;

    for (int i=0;i<n;i++) cin >> a[i];

    b.push_back(vector<int>{a[0]});

    for (int i=1;i<n;i++){
        int j=i;
        while (j>0 && a[j]<a[j-1]){
            swap(a[j],a[j-1]);
            --j;
        }
        vector <int> c(a.begin(),a.begin()+i+1);
        b.push_back(c);
    }

    for (int i=b.size()-1;i>=0;i--) {
        cout << "Buoc " << i << ": ";
        for (int j=0;j<b[i].size();j++) cout << b[i][j] << " ";
        cout << endl;
    }
}

int main() {
    testCase();
}
