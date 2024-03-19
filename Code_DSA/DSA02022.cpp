#include <bits/stdc++.h>
using namespace std;
int n;
int a[8];

void solve(){
    string s;
    for (int i=0;i<2;i++) s+=to_string(a[i]);
    s+='/';

    for (int i=2;i<4;i++) s+=to_string(a[i]);
    s+='/';

    for (int i=4;i<8;i++) s+=to_string(a[i]);

    cout << s << endl;
}

int check(){
    int x1=10*a[0]+a[1];
    int x2=10*a[2]+a[3];
    int x3=1000*a[4]+100*a[5]+10*a[6]+a[7];
    if (x1>0 && x2>0 && x2<13 && x3>=2000) return 1;
    else return 0;
}

void Try(int i){
    for (int j=0;j<=1;j++){
        if (j==1) a[i]=2;
        else a[i]=0;
        if (i==7) {
            if (check()) solve();
        }
        else Try(i+1);
    }
}

void TestCase(){
    for (int i=0;i<8;i++) a[i]=0;
    Try(0);
}

int main() {
    TestCase();
    return 0;
}