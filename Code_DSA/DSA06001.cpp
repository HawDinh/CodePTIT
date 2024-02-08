#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int patition(int a[], int l, int r){
    int x=a[r];
    int i=l-1;

    for (int j=l;j<r;j++){
        if (a[j]<x) {
            ++i;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void quickSort(int a[],int l, int r){
    if (l<r){
        int p=patition(a,l,r);
        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }

}


int main() {
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        quickSort(a,0,n-1);

        int l=0;
        int r=n-1;
        while (l<r){
            cout << a[r] << " " << a[l] << " ";
            ++l;
            --r;
            if (l==r && n%2==1) cout << a[l]; 
        }
        cout << endl;
    }
} 