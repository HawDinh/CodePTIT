#include <stdio.h> 
#include <math.h>
int main(){
	int N,i;
	scanf("%d",&N);
	int tich=1;
	while (N>1){
		i=N%10;
		tich*=i;
		N/=10;
	}
	printf("%d",tich);
	return 0;
}
