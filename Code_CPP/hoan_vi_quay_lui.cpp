#include <bits/stdc++.h>

using namespace std;

int n;
int a[10001];
int used[10001]={0};

void in(){
    for (int i=1;i<=n;i++) cout << a[i];
    cout << endl;
}

void Try(int i){
    for (int j=1;j<=n;j++){
        if (used[j]==0){
            a[i]=j;
            used[j]=1;
            if (i==n) {
                in();
            }
            else Try(i+1);
            used[j]=0;
        }
    }
}

int main(){
    cin >> n;
    Try(1);
    return 0;
}
