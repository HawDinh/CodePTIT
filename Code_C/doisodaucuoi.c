#include <stdio.h> 
#include <math.h>
int main(){
	int N;
	scanf("%d",&N);
	int M=N%10;
	int x=10;
	int p=0;
	N=N/10;
	while (N/10!=0){
		p=p+((N%10)*x);
		x*=10;
		N/=10;
	}
	M=M*x+p+N;
	printf("%d",M);
	return 0;
}
