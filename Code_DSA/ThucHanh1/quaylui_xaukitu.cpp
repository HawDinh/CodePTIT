#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,k;
char s[101];

int check(){
    int dem1=0;
    int dem2=0;
    int dem3=0;

    for (char c:s){
        if (c=='A') ++dem1;
        else if (c=='B') ++dem2;
        else if (c=='C') ++dem3;
    }
    if (dem1<=dem2 && dem2<=dem3 && dem1>0 && dem2>0 && dem3>0) return 1;
    else return 0;
}

void in(int k){
    for (int i=1;i<=k;i++) cout << s[i];
    cout << endl;
}

void Try(int i,int k){
    for (int j='A';j<='C';j++){
        s[i]=j;
        if (i==k) {
            if (check()) in(k);
        }
        else Try(i+1,k);
    }
}

int main() {
    cin >> n; 
    s[0]='A'-1;
    for (int i=3;i<=n;i++){
        Try(1,i);
    }
}