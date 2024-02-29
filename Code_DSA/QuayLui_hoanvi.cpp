#include <bits/stdc++.h>
using namespace std;

int n;
int a[10001];
int ok[10001];

void in(){
    for (int i=1;i<=n;i++) cout << a[i];
    cout << endl;
}

void Try(int i){
    for (int j=1;j<=n;j++){
        if (ok[j]) {
            a[i]=j;
            ok[j]=0;
            if (i==n) in();
            else Try(i+1);
            ok[j]=1;
        }
    }
}

int main() {
    cin >> n;
    for (int i=0;i<10001;i++) ok[i]=1;
    Try(1);
    return 0;
}