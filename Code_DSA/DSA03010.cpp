#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n];
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        q.push(a[i]);
    }

    long long sum=0;

    while (q.size()>=2){
        int a=q.top();
        q.pop();
        int b=q.top();
        q.pop();
        
        int x=a+b;
        sum+=x;
        q.push(x);
    }
    cout << sum;
    
}

int main() {
    int t; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}