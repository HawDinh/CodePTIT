#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n){
    for (int last=n-1;last>0;last--){
        for (int i=0;i<last;i++){
            if (a[i]>a[i+1]) swap(a[i],a[i+1]);
        }
    }
}

int main() {
    int a[10]={4,8,4,1,1,3,8,6,2,10};
    bubbleSort(a,10);

    for (int i=0;i<10;i++) cout << a[i] << " ";
} 