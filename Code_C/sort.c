#include <stdio.h>
#include <math.h>
 int main(){
 	int n;
 	scanf("%d",&n);
 	int a[n];
 	for (int i=0;i<n;i++){
 	scanf("%d",&a[i]);
 }
 	int min;
 	int temp;
 	for (int i=0;i<n-1;i++){
 		min=i;
 		for (int j=i+1;j<n;j++){
 			if(a[j]<a[min]){
			min=j;
			 }
		 }
		if (min!=i){
			int tem=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	 }
	 printf("%d",a[1]);
 }
