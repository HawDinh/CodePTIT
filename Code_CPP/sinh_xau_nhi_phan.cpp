#include <bits/stdc++.h>

using namespace std;

int a[10001];
int ok=1,n;

void in(){
    for (int i=0;i<n;i++) cout << a[i];
    cout << endl;
}

void sinh(){
    int i=n;
    while (i>0 && a[i]==1) --i;
    if (i==0 && a[i]==1) ok=0;
    else {
        a[i]=1;
        for (int j=i+1;j<=n;j++) a[j]=0;
    }
}

int main(){
    cin >> n;
    for (int i=0;i<n;i++) a[i]=0;
    in();
    while (ok){
        sinh();
        if(ok) in();
    }
}