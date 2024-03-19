#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

int n,k,ok=1,a[100001];

void sinh(){
    int i=k;
    while (i>0 && a[i]==n-k+i) --i;

    if (i==0) ok=0;

    else {
        ++a[i];
        for (int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
    }
}

int main(){
    cin >> n >> k;
    for (int i=1;i<=n;i++) a[i]=i;

    for (int i=1;i<=k;i++) cout << a[i];
    cout << endl;

    while (ok){
        sinh();
        for (int i=1;i<=k;i++) cout << a[i];
        cout << endl;
    }
    return 0;
}