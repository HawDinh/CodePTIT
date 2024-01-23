#include <stdio.h> 
#include <math.h>
int main(){
	unsigned int n;
	scanf("%u",&n);
	for(int i=1;i<=n;i++){
		unsigned long a;
		scanf("%ul",&a);
		if (a>0){
		double b=1/a;
		printf("%.15f\n",b);
}
}
}
