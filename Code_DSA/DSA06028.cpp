#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void testCase(){
    int n; cin >> n;
    vector <int> a(n);
    vector <vector<int>> b;

    for (int i=0;i<n;i++) cin >> a[i];

    for (int i=0;i<n-1;i++){
        int min_index=i;
        for (int j=i+1;j<n;j++){
            if (a[j]<a[min_index]) min_index=j;
        }
        swap(a[i],a[min_index]);
        b.push_back(a);
    }

    for (int i=b.size()-1;i>=0;i--) {
        cout << "Buoc " << i+1 << ": ";
        for (int j=0;j<n;j++) cout << b[i][j] << " ";
        cout << endl;
    }
}

int main() {
    testCase();
}
