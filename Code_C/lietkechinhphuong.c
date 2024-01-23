#include <stdio.h> 
#include <math.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int dem=0;
	for (int i=1;i<=sqrt(n);i++){
		if(i*i>=m && i*i<=n){
		dem=dem+1;
	}
	}printf("%d\n",dem);
	for (int i=1;i<=sqrt(n);i++){
		if(i*i>=m && i*i<=n){
			printf("%d\n",i*i);
	}
}
	return 0;
}
