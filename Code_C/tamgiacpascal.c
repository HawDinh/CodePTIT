#include <stdio.h>
#include <math.h>
int gt(int n){
	if (n==0 || n==1) return 1;
	else {
		return n*gt(n-1);
	}
}
int main(){
	int n; scanf("%d",&n);
	for (int i=0;i<n;i++){
		for (int j=0;j<=i;j++){
			printf ("%d ",gt(i)/(gt(j)*gt(i-j)));
		}
		printf ("\n");
	}
}
