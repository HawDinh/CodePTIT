#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;

void in(int a[],int cnt){
    cout << "Buoc " << cnt << ": ";
    for (int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}

int check(int a[]){
    for (int i=0;i<n-1;i++){
        if (a[i]>a[i+1]) return 0;
    }
    return 1;
}

void bubbleSort(int a[],int n){
    for (int last=n-1;last>0;--last){
        for (int i=0;i<last;i++){
            if (a[i]>a[i+1]) swap(a[i],a[i+1]);
        }
        in(a,n-last);
        if (check(a)==1) break;
    }
}

int main() {
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    bubbleSort(a,n);
}
