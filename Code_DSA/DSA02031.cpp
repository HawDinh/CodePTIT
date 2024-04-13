
#include <bits/stdc++.h>
using namespace std;
char c;
char a[30];
int n;
int ok[30];

void in(){
    for (int i=0;i<n;i++) cout << a[i];
    cout << endl;
}

int check(){
    for (int i=1;i<n-1;i++){
        if (a[i]=='A' || a[i]=='E'){
            if (a[i+1]!='A' && a[i-1]!='A' && a[i+1]!='E' && a[i-1] !='E') return 0;
        }
    }
    return 1;
}

void Try(int i) {
    for (int j=0;j<n;j++){
        if (ok[j]){
            ok[j]=0;
            a[i]='A'+j;
            if (i==n-1) {
                if (check()) in();
            }
            else Try(i+1);
            ok[j]=1;
        }
    }
}

void testCase() {
    cin >> c;
    n=c-'A'+1;
    
    for (int i=0;i<=n;i++) ok[i]=1;
    Try(0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}