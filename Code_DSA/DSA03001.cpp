#include <bits/stdc++.h>

using namespace std;

void testCase() {
    int cost;
    cin >> cost;
    int dem=0;
    int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    for (int i=9;i>=0;i--){
        dem+=(cost/a[i]);
        cost%=a[i];
        if (cost==0) break;
    }
    cout << dem;
}

int main() {
    int T; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}