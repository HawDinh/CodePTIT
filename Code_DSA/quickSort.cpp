#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r){
    int x=a[r];
    int i=l-1;
    for (int j=l;j<r;j++){
        if (a[j]<x){
            ++i;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void quickSort(int a[],int l,int r){
    if (l<r){
        int p=partition(a,l,r);
        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }
}

int main() {
    int a[10]={4,8,4,1,1,3,8,6,2,10};
    quickSort(a,0,9);

    for (int i=0;i<10;i++) cout << a[i] << " ";
} 