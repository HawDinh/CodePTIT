
#include <bits/stdc++.h>
using namespace std;
int n;
int a[101];
int ok[101];

int check(){
    for (int i=1;i<n;i++){
        if (abs(a[i]-a[i+1])<=1) return 0;
    }
    return 1;
}

void in(){
    for (int i=1;i<=n;i++) cout << a[i];
    cout << endl;
}

void Try(int i){
    for (int j=1;j<=n;j++){
        if (ok[j]){
            ok[j]=0;
            a[i]=j;
            if (i==n) {
                if (check()) in();
            }
            else Try(i+1);
            ok[j]=1;
        }
    }
}

void testCase() {
    cin >> n;
    for (int i=1;i<=n;i++) ok[i]=1;
    Try(1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}