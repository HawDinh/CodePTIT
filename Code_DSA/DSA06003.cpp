#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n],b[n];
        for (int i=0;i<n;i++) {
            cin >> a[i];
        }
        
        int dem=0;

        for (int i=0;i<n-1;i++){
            int min_index=i;
            for (int j=i+1;j<n;j++){
                if (a[min_index]>a[j]) min_index=j;
            }
            if (min_index!=i) {
                swap(a[i],a[min_index]);
                ++dem;
            }
        }
        cout << dem << endl;
    }
} 
