#include <stdio.h> 
#include <math.h>
int main(){
	int N;
	scanf("%d",&N);
	int dem=1;
	while(N/10!=0){
		N/=10;
		dem++;
	}
	printf("%d",dem);
	return 0;
}
