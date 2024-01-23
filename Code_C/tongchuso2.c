#include <stdio.h> 
#include <math.h>
int main(){
	int n,a,b;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
	
	scanf("%d\n",&a);
	int tong=0;
	while (a>0){
		b=a%10;
		tong+=b;
		a=a/10;
	//printf("%d\n",tong);
	}
	printf("%d\n",tong);
}
	return 0;
}
