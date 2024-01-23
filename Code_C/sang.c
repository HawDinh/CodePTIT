#include <stdio.h>
#include <math.h>
int a[1000001];
void sang(){
	for (int i=0;i<=1000001;i++){
		a[i]=1;
	}
	a[0]=a[1]=0;
	for (int i=2;i<=sqrt(1000000);i++){
		if(a[i]){
			for (int j=i*i;j<=1000000;j+=i){
				a[j]=0;
			}
		}
	}
}
