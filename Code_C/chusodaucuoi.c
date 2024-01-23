#include <stdio.h> 
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	int m=n%10;
	while(n/10>0){
		n/=10;
	}
	printf("%d %d",n,m);
}

