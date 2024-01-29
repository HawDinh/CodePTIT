#include <iostream>
using namespace std;
int n,k,a[101];
int b[101];

int dem;

void solve(){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=a[i]*b[i];
    }
    if (sum==k) {
        for (int i=0;i<n;i++){
            if (b[i]!=0) cout << a[i] << " ";
        } 
        cout << endl;
        ++dem;
    }
}

void Try(int i){
    for (int j=0;j<=1;j++){
        b[i]=j;
        if (i==n-1) solve();
        else Try(i+1);
    }
}

int main() {
    cin >> n >> k;
    for (int i=0;i<n;i++) cin >> a[i];
    dem=0;
    Try(0);
    cout << dem << endl;
    return 0;
}