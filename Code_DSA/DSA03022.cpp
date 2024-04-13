#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    sort (a,a+n);

    int ans1=a[0] * a[1];
    int ans2=a[n-1] * a[n-2] * a[n-3];
    int ans3=a[n-1] * a[n-2];
    int ans4=a[0] * a[1] * a[n-1];
    int ans=max(ans1,ans2);
    ans=max(ans,ans3);
    ans=max(ans,ans4);

    cout << ans;

}

int main() {
    int t=1;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}