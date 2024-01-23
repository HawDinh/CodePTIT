#include <stdio.h> 
#include <math.h>
int main(){
	int a,b;
	scanf("%d",&a);
	int tong=0;
	while (a>0){
		b=a%10;
		tong+=b;
		a=a/10;
	}
	printf("%d",tong);
	return 0;
}
