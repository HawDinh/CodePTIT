#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;

void in(int a[],int cnt){
    cout << "Buoc " << cnt << ": ";
    for (int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}

void selectionSort(int a[],int n){
    for (int i=0;i<n-1;i++){
        int min_index=i;
        for (int j=i+1;j<n;j++){
            if (a[j]<a[min_index]) min_index=j;
        }
        swap(a[i],a[min_index]);
        in(a,i+1);
    }
}

int main() {
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    selectionSort(a,n);
}
