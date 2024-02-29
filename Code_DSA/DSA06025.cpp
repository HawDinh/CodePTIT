#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;

void in(int a[],int range,int cnt){
    cout << "Buoc " << cnt << ": ";
    for (int i=0;i<=range;i++) cout << a[i] << " ";
    cout << endl;
}

void insertionSort(int a[],int n){
    for (int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while (j>=0 && a[j]>key) {
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=key;
        in(a,i,i);
    }
}

int main() {
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    cout << "Buoc 0: " << a[0] << endl;
    insertionSort(a,n);
}
