#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

string s;
int n,a[101];
int ok[101];

void in(){
    for (int i=0;i<n;i++) cout << s[a[i]];
    cout << " ";
}

void Try(int i){
    for (int j=0;j<n;j++){
        if (ok[j]){
            ok[j]=0;
            a[i]=j;
            if (i==n-1) in();
            else Try(i+1);
            ok[j]=1;
        }
    }
}

void TestCase(){
    cin >> s;
    n=s.size();

    for (int i=0;i<101;i++) ok[i]=1;
    Try(0);
}

int main(){
    int t; cin >> t;
    while (t--){
        TestCase();
        cout << endl;
    }

    return 0;
}