// các phần tử trong mảng >=0 && <10^7
//in gộp trong hàm sort
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countingSort(int a[],int n){
    int max=0;
    int dem[n]={0};
    for (int i=0;i<n;i++) {
        dem[a[i]]++;
        if (a[i]>max) max=a[i];
    }

    for (int i=0;i<max;i++){
        while (dem[i]--) cout << i << " ";
    }
}

int main() {
    int a[10]={4,8,4,1,1,3,8,6,2,10};
    countingSort(a,10);
} 