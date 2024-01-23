#include <stdio.h> 
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		if(i=1){
			for (int j=1;j<n;j++){
				printf(" ");
			}
			printf("*");
		}
		else if (i=n){
			for (int j=1;j<=n;j++){
				printf("* ");
			}
		}
		else{
			for (int j=1;j<i;j++){
				printf(" ");
		}
		printf("*");
		for (int j=(i-1)*2-1;;){
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
}
}
