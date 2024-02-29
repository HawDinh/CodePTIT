#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;

void in(int a[],int cnt){
    cout << "Buoc " << cnt << ": ";
    for (int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[j]<a[i]) swap (a[i],a[j]);
        }
        in(a,i+1);
    }
}
