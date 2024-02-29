#include <bits/stdc++.h>
using namespace std;
int a[101],b[101];
int n;
int ok[101]={0};

void in(int a[]){
    for (int i=1;i<=n;i++) cout << a[i] << " ";
    cout << endl;
}

int sinh(){
    int j=n-1;
    while (j>0 && a[j]>a[j+1]) --j;
    if (j==0) return 0;
    else {
        int k=n;
        while (a[k]<a[j]) --k;
        swap(a[j],a[k]);

        int l=j+1;
        int r=n;
        while (l<=r){
            swap(a[l],a[r]);
            ++l;
            --r;
        }
    }
    return 1;
}

void Try(int i){
    for (int j=1;j<=n;j++){
        if (!ok[j]){
            ok[j]=1;
            b[i]=a[j];
            if (i==n) in(b);
            else Try(i+1);
            ok[j]=0;
        }
    }
}

void TestCase(){
    cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i];

    sort(a+1,a+n+1);

    Try(1);

    //in(a);
    //while (sinh()) in(a);

}

int main() {
    int t=1;
    while (t--){
        TestCase();
    }
    return 0;
}