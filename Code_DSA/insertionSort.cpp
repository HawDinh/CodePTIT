#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int n){
    for (int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while (j>=0 && a[j]>key) {
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=key;
    }
}

int main() {
    int a[10]={4,8,4,1,1,3,8,6,2,10};
    insertionSort(a,10);

    for (int i=0;i<10;i++) cout << a[i] << " ";
} 