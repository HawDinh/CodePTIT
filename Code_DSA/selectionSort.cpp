#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int n){
    for (int i=0;i<n-1;i++){
        int min_index=i;
        for (int j=i+1;j<n;j++){
            if (a[j]<a[min_index]) min_index=j;
        }
        swap(a[i],a[min_index]);
    }
}

int main() {
    int a[10]={4,8,4,1,1,3,8,6,2,10};
    selectionSort(a,10);

    for (int i=0;i<10;i++) cout << a[i] << " ";
} 