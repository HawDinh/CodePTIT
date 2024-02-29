#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n, int x){
    int low=0;
    int high=n-1;
    int mid=(high+low)/2;
    while (low<=high){
        if (x>a[mid]) low=mid+1;
        else if (x<a[mid]) high=mid-1;
        else return mid;
        mid=(high+low)/2;
    }
    return -1;
}

int main() {
    int a[]={1,3,5,7,8,9,12,13};
    int x=5;
    int t=binarySearch(a,8,x);
    if (t>=0) cout << "Vi tri cua x la: " << t << endl;
    else cout << "Khong tim thay" << endl;
}